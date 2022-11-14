#include <stdio.h>
void printer_char(char ch, int count);

int main(void) {
    print_char('*', 3);

}

void printer_char(char ch, int count) {
    for(int i=0; i<count; i++) {
        printf("%c", ch);
    }
    //함수를 호출하고 종료되면 다시 호출헀던 곳으로 돌아감
    // 1.함수 종료 → return문을 만나면 종료!
    // 2.힘수 종료 → }을 만나면 종료! (return은 생량가능하므로 리턴이 없을시에는)
    return;
}