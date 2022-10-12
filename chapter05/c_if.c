#include <stdio.h>
/**
 * if문(제어문) 기본 문법
 * 
 * if(조건) {
 * 실행문
 * } else if(조건) {
 * 실행문
 * } else {
 * 실행문
 * }
 * 
 * if 와 else는 한번씩만 else if 는 여러번 사용가능
*/

int main(void) {
    int a = 20;
    int b = 0;
//조건을 보고
//참(true) 블록문 안에 있는 코드 실행
// 거짓(false) 다음으로 넘어감
    if(a > 10) {
        printf("a가 10보다 커요!");
    }
}