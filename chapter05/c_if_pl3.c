#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("ù��° ��: ") ;
    scanf("%d", &num1) ;
    printf("�ι�° ��: ") ;
    scanf("%d", &num2) ;
    // ���� 
    // 1. ��1�� ��2���� ū��� ���
    //2. ��1�� ��2���� ������� ���
    // 3. ��1�� ��2�� ���� ���
    // �����ǹ�! ��������

    if(num1 > num2) {
        printf( "%d�� %d���� Ů�ϴ�" , num1, num2);
    } else if(num1 < num2) {
        printf("%d�� %d���� �۽��ϴ�", num1, num2);
    }
    else { 
        printf("%d�� %d�� �����ϴ�", num1, num2);
    }
}