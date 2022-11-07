//조재현은 오늘도 귀엽다 짜증난다 피곤하다피곤하다 다 떄려치고싶다
#include <stdio.h>
/**
 *  Break & Continue 문
 *  - 반복문에서 주로 사용
 * 
 *  -#break: 즉시 반복문을 빠져나가라
 *             → 이후로 반복문 실행x
 * 
 *  - continue: 즉시 다음 반복으로 넘어가라
 *              → 이후로 반복문 실행 o
 * 
*/
int main(void) {//홀수만 출력하는 반복문
    for(int i=1; i<=10; i++) {
        if(i % 2 == 0) {
            continue;
        }
        if(i == 7){
            break;
        }
        printf("%d\n", i);
    }
}