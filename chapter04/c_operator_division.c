#include <stdio.h>

int main(void){
    double apple;
    int banana;
    int orange;

    apple = 5.0 / 2.0; //  '/'몫을 계산
    banana = 5 / 2;
    orange = 5 % 2; // '%' 나머지를 계산
    //실수 연산 실수 = 실수
    //정수 연산 정수 = 정수
    //실수 연산 정수 = 실수
    //짝수 , 혹수 판별
    // num % 2 ==0

    printf("apple: %.1lf\n", apple);
    printf("banana: %d\n", banana);
    printf("orange: %d\n", orange);
}