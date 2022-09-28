#include <stdio.h>
// scanf() 함수 
/**
 *  +키보드로부터 값을 입력
 * 
 * 변수: 
*/
int main(void)
{
    int age = 4;
    //age 호출 => 4값
 printf("%d\n" , age); // age 4

 printf("나이: ");
 scanf("%d" , &age);  //age 변수의 메모리 주소
 
 //정수형숫자 %d 문자 %s 실수 %lf

 printf("%d" , age); // age 4
}