#include <stdio.h>

/**
 * 변수: 값을 저장
 *포인터 (변수) : 주소를 저장 
 * 변수앞에 *를 붙이면 포인터로 인식!
 * 
 * int num = 4; #99번지
 * int *pn= &num;
 * 
 * num → 4
 * &num → 99번지
 * pn →99번지
 * *pn → 4
 * 
 * 변수 앞에 const → 상수(값을 고정)
 * 포인터 변수앞에 const룰 붙이면?
 *  - 상수 포인터 가능
 * 참조하고 있는 일반 변수에 값 변경 가능
 * a=30 (o) :참조하고 있는 일반 변수에 값 변경 가능
 * pa = &b (o) 포인터 변수가 참조하는 주소 변경 가능
 * *pa= 20(x) 직접 참조하여 값 변경 불가능
 * 
*/

int main(void) {
    int a=10, b=20;     //a 21번지 b 22번지 저장되어있다고 가정
    const int *pa = &a; // pa 에는 21번지

    printf("변수 a값: %d\n", *pa);
    pa = &b;
    printf("변수 a값: %d\n", *pa);
    pa = &a;
    a = 20;
    pa = 50; // pa → 상수포인터
    *pa = 50; // 포인터를 통해 직접 참조하여 값 변경 불가 =오류가 날거임
    printf("변수 a값: %d\n", *pa);

}