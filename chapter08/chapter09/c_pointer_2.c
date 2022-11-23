#include <stdio.h>

/**
 * 포인터(pointer) 또는 포인터 변수 
 *  - 변수의 메모리 주소를 저장하는 변수
 * 일반변수
 *  - 실제 값을 저장하는 변수
*/
int main (void) {
    int a; //일반변수
    int *pa; //포인터 변수(변수 앞에*붙이면)

    pa = &a; //&a → a변수의 시작번지(10번지)
             // pa → a변수의 시작번지(10번지)
             // pa(10번지) → 10번지 주소에 값(33)을 입력
    *pa = 33;
    //포인터 (*)의미 2개
    // 1.변수 선언 할때 (*)을 붙이면 →포인터변수
    // 2.대입 연산자(=) 함께 사용하면 → *pa 실제주소에 값을 넣기
    //*pa == a 동일

    printf("포인터 a값 출력: %d\n, *pa");
    printf("일반변수 a값 출력:%d\n, a");
}