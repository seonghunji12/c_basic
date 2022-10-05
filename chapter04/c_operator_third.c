#include <stdio.h>

int main(void) {
int a = 10, b = 20, res;

//삼항연산자 = (조건) ? 값1 : 값2  true라면 값1을 false라면 값2를 사용한다.
res = (a > b) ? a : b;
printf("큰 값: %d\n", res);
}