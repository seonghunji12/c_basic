#include <stdio.h>

/**
 * ������ ���� ��Ģ
 * �����ʹ� ����Ű�� ������ ���°� ���� ���� ����
 * ����ȯ�� ����� ������ ����
 * double a = 3.4;
 * double *pd = &a;
 * int *pi;
 * pi = (int *)pd;
 * �� pd�� (int *)pd;
 * �� pd �� int�� ������ �ּҷ� �� ��ȯ 
*/

int main(void) {
    int a = 10; //a 100����
    int *p = &a;// p 100����
    double *pd; // pd(�ּ�)
    //pd = p; (x)
    pd = (double *)p; // (0)����ȯ
    printf("%lf\n", *pd);
}