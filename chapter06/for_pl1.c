#include <stdio.h>

//1~10까지 값의 총합 계산
int main(void) {
    int sum = 0; //총합 누적

    // 작성해보세요 . (for문 활용) for문 활용해서 1~10까지 값을 덧셈하는 코드를 작성
    
    for(int i=1; i<=3; i++) {
        sum = sum + i; //sum += i;
    
    
    printf("누적 총합: %d\n", sum);
    }
}