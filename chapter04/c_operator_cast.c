//casting: ����ȯ
// -int(����) ��double(�Ǽ�)

#include <stdio.h>

int main(void) {
    int a = 20, b = 3;
    double res;

    //(double)�� �տ� ���̸� ����ȯ ex) 20 ��20.0 ,int �� double(����type ��ūtype)
    res = (double)a / (double)b; 
    printf("a = %d, b = %d\n", a, b);
    printf("a/b�� ��� : %.1lf\n", res);

//double �� int(ūtype ������type) : ���� �սǹ߻�
    a = (int)res; 
    printf("(int) %.1lf�� ���: %d\n", res, a);
}