#include <stdio.h>

/**
 * ���������� ��������
 *  -���������� �������Լ� ��, �� ���� ���������� ����ϴ� ����
 *  - ���������� �������� ����{} ���� ����, �ٸ� �Լ� ��� �Ұ�
 *  - ���������� �̸��� ���Ƶ� ����� �Լ��� �ٸ��� ���� ������ ����
 *  -�Լ��� �� ���ǰ� ��ȯ�Ǹ� ���������� ���� �ڵ����� ȸ�� 
 *  -�Լ��� �Ű�����(parameter)�� ��������
*/
int a = 50; //��������: ��𼭵��� ��� ����!

int main(void) {
    int a = 1, b = 2;
    //����� �� �ִ� ������ 2�� �̻��� ��쿡�� 
    //���� ����� ������ ��� ��
    int result;
    int a = 5; //Erorr(�Ȱ��� �̸� ������ �ߺ� ����x)
    printf("����: %d", sum(a, b));
}

int sum(int x, int y) {
    int result; //�Լ� ������ ���� �� ����(��������) ��������int result�� �Լ� �ΰ� ������ �� �������� ������ �������ʴ´�.
    result = x + y;
    return result;
}