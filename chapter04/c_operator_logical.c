/**
 * ��������
 * 1.AND(&&)
 * -�� ������ ��� ���� ��쿡�� ��!
 * ����1 | ����2 | ���
 * False |False  |False
 * True  |False  |False
 * False |True   |False
 * True  |False  |False
 * 2.OR(||)
 * - ���� �߿� 1���� ���̸� ��!
 * ����1 | ����2 | ���
 * False |False  |False
 * True  |False  |True
 * False |True   |True
 * True  |False  |True
 * 
 * 
 * &&, &
 * ||, |
 * 
 * 1�� ���� ���� 2�� ���� ���� ��������?
 *  -1��(&, |): 2���� ������ ��� �˻� �� ��� ����
 *  -2��(&&, ||):1���� �������� �����ϸ� ��� ����
 * 
 * 1���� ���� �� ��Ȯ�ϰ�����, 2���� ���� �� �����ӵ��� ����� ������ �� ����.
*/
#include <stdio.h>

int main(void) {
    int a = 30;
    int res;

    res = (a > 10) && (a < 20);
    printf("(a > 10 && (a < 20) : %d\n", res);
    res = (a < 10) || (a > 20);
    printf("(a < 10 || (a > 20) : %d\n", res);
    res = !(a >= 30) ;
    printf("!(a >= 30) : %d\n", res);
}