#include <stdio.h>
//��������- �����丵
int main(void) {
    // ���� 4�� 1�� ����ڷκ��� ���� �Է�
    int score;
    char grade;

    printf("���� : ");
    scanf("%d", &score);
    
    if(score >= 0 && score <= 100) {
        //����: 0~100��
          if( score >= 91) { //��ø if�� if�� �鿩�����
            grade = 'A';
            // 2. �����κ��� ���(A,B,C, ..)�Ǵ�
        } else if(score <= 90 && score >= 81) {
            grade = 'B';
        } else if(score <= 80 && score >= 71) {
            grade = 'C';
        } else if(score <= 71 && score >= 61) {
            grade = 'D';
        } else {
            grade = 'F'; // 3.������ ����� ���
        }printf("�л��� ������ %d������ %c�����Դϴ�. ", score, grade) ;
    } else {
        //���� : 0�� �̸� �Ǵ� 100�� �ʰ�
        printf("ERROR: 0~100�� ���̿� ���� �Է��ϼ���.");
    }
}
