#include <stdio.h>

/**
 * int main() {
 *      printf("%d", sum(5, 10));
 * 
 * }
 *      ↓      (return)
 *      ↓        ↑    
 *      ↓        ↑
 *  (parameters) ↑
 * int sum(int x, int y) {
 *    return x + y;
 * }   
*/

//함수 → (매개변수), return
//함수 →   x, return o 인함수를 만들어보자
int get_num(void); //선언
int main(void) {
    printf("값: %d", get_num());//호출

}
// main() 함수 위에 함수가 선언되면, 함수선언 따로할 필요 없음
// void: 해당값을 사용하지 않을 경우
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d, &num");
    return num;
}