#include <stdio.h>
void printer_char(char ch, int count);

int main(void) {
    print_char('*', 3);

}

void printer_char(char ch, int count) {
    for(int i=0; i<count; i++) {
        printf("%c", ch);
    }
    //�Լ��� ȣ���ϰ� ����Ǹ� �ٽ� ȣ������ ������ ���ư�
    // 1.�Լ� ���� �� return���� ������ ����!
    // 2.���� ���� �� }�� ������ ����! (return�� ���������ϹǷ� ������ �����ÿ���)
    return;
}