#include <stdio.h>

int main(void) {
    int n = recursion(16);
    printf("%d", n);
}

int recursion(int n) {
    if(n<5) return 1;
    // if{실행문} → 조건이 참인경우 실행
/**
 * 실행문이 하나면 { } 생략가능
*/

    else if(n%5 == 1) return n+recursion(n-1);
    else recursion(n-1);
}
/**
 * recuesion(16)
 * ↓
 * n=16, 16+recursion(15)
 * ↓
 * n=15, recursion(14)
 *  ↓
 * n=14, recursion(13)
 *  ↓
 * n=13, recursion(12)
 *  ↓
 * n=12, recursion(11)
 *  ↓
 * n=11, 11+recursion(10)
 *  ↓
 * n=10, recursion(9)
 *  ↓
 * n=9, recursion(8)
 *  ↓
 * n=8, recursion(7)
 *  ↓
 * n=7, recursion(6)
 * 
 *  ↓
 * n=6, 6+recursion(5)
 *  ↓
 * n=5, recursion(4)
 *  ↓
 * n=4, 1 ##다시 위로올라가줌
 * 
*/