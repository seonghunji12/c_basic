#include <stdio.h>
#include <string.h>

/**
 * char 배열명[문자열 길이+1] = 문자열;
 * +문자열길이 +1의 이유는 문자열의 끝에 '\0'( 넣을 문자) 자동으로 추가
 * +기본자료형을 여러개 묶어서 사용하는 것을  '배열' 이라고함
 *  ※ 배열은 선언된 이후에 대입연산자로 값 ㅇㅂ력 불가
 *  →strcpy(string copy) 함수 사용하면 가능
 *  strcpy() : 문자열 복사
 * 
 * '' : 문지형(char)
 * "" : 문자열형(string)
*/

int main(void) {
    char fruit[20] = "strawberry";

    printf("딸기 : %s\n", fruit);

    printf("딸기잼 : %s %s\n", fruit, "jam" );
 //fruit = "banana"; 사용불가
 strcpy(fruit, "banana");
 printf("%s\n", fruit);
 return 0;
}