#include <stdio.h>

int main(void) {
    int num1 = 20, num2 = 10, num3 = 50;
    int temp;
    //����: num1 > num2> num3
    // ����1 num1 < num2 �� �� ��ȯ : num1 >num2
    // ����2 num1 < num3 �氪 ��ȯ : num1 > num2, num3   (num1�� ���� ū ���̵�)
    // ����3 num2 < num3 �氪 ��ȯ : num2 > num3
    // ��num1 > num2 > num3

    // ���� 3���� ���� �ٸ� ���� ����
    // - ����: num1�� num2�� ���� �ٲ�(ü����)

    //�ڵ� ---(1)��ȯ �ϴ¹�
    // temp = num1;
    //num1 = num2;
    //num2 = temp;
    //�ڵ� ---
    //(1)

    //printf("num1: %d\n", num1); //10
    //printf("num2: %d", num2); //20

    //(2)
    if(num1 < num2){
    temp = num1;
    num1 = num2;
    num2 = temp;
    } 
    if(num1 < num3){ //swap
    temp = num1;
    num1 = num3;
    num3 = temp;
    } 
    if(num2 < num3){
    temp = num2;
    num2 = num3;
    num3 = temp;
    }

    printf("%d > %d > %d", num1, num2, num3);


}