#include <stdio.h>

/**
 * ������(pointer) �� �迭(array)
 * - ������, �ְ���, ��ĭä���, ox, ������1��
*/
//�������� �迭�̸� �� �迭�� ���۹��� ���� �������
int main (void) {
    int ary[3]; //�迭 ����(3ĭ) ũ�� : ?����Ʈ �ϱ�� :12
    int i;                             // ?����Ʈ �ϱ�� :4

    *(ary + 0) = 10; //ary�� 100����
    *(ary + 1) = *(ary + 0) + 10; // 1�� 4����Ʈ������ 104������ �־������

    puts("3���� �迭 ��� �Է�: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d", *(ary+1));
    }
}