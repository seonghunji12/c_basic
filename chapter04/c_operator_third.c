#include <stdio.h>

int main(void) {
int a = 10, b = 20, res;

//���׿����� = (����) ? ��1 : ��2  true��� ��1�� false��� ��2�� ����Ѵ�.
res = (a > b) ? a : b;
printf("ū ��: %d\n", res);
}