#include <stdio.h>

/**
 * �ּҿ� ������ 
 *  _�ּ� : �޸� ������ �ּ�(��: 21����, 99����)
 *  _ �ּ� �� ��� (���� �ٲ�������)
 *   ������ �溯��(�ּ�)
 * 
 * int a, b;  #a(100����) , b(200����)
 * int *p;
 * p = &a; #p(100����)
 * p = &b; #p(200����)
 * - �� p�� 100����, 200���� : ����
 * �� &a, &b�� �ּ� : ���
 * 
 * �������Ͱ� ���� �ּ� ����
 * (�ϳ��� ������ ���ÿ� ����Ű�°͵� ����)
 *  int a;
 * int *pa, *pb;
 * pa = pb = &a;
 * *pa = 10;
 * printf("%d", *pb);
 * - �ּҴ� ����̱� ������ ���Կ����� ���ʿ� ���Ұ�
 * &a = &b; (x) #a (100����) , b(200����)
 * const int num = 4;
 * num 10; (x)
 * 
 * �������� ũ��� ������ �ּ��� ũ�⿡ ���� ����
 * ũ�Ⱑ Ŭ���� ���� ������ �޸� ��밡��
 * �������� ũ��� �����Ϸ��� ���� �ٸ�
 * ��� �ּҿ� �����ʹ� ����Ű�� �ڷ����� ������� ũ�Ⱑ ������
*/
int main(void) {
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char ���� �ּ� ũ��: %d\n", sizeof(&ch));
    printf("int ���� �ּ� ũ��: %d\n", sizeof(&in));
    printf("double ���� �ּ� ũ��: %d\n", sizeof(&db));

    printf("char ������ ũ��: %d\n", sizeof(&pc));
    printf("int ������ ũ��: %d\n", sizeof(&pi));
    printf("double ������ ũ��: %d\n", sizeof(&pd));

    printf("char ���� ����Ű�� ���� ũ��: %d\n", sizeof(&*pc));
    printf("int ���� ����Ű�� ���� ũ��: %d\n", sizeof(&*pi));
    printf("double ���� ����Ű�� ���� ũ��: %d\n", sizeof(&*pd));

}