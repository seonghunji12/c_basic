#include <stdio.h>

//1~10���� ���� ���� ���
int main(void) {
    int sum = 0; //���� ����

    // �ۼ��غ����� . (for�� Ȱ��) for�� Ȱ���ؼ� 1~10���� ���� �����ϴ� �ڵ带 �ۼ�
    
    for(int i=1; i<=3; i++) {
        sum = sum + i; //sum += i;
    
    
    printf("���� ����: %d\n", sum);
    }
}