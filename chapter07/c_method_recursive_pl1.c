#include <stdio.h>

int func(int num);
int main(void) {
    // i ��5 3  1
    // i =5  ��� = func(5): f(5)=120  �� 120
    //                     num = 5 , 5*f(4) #5*24=120
    //                    num = 4 , 4*f(3)  #4*6=24
    //                    num = 3 , 3*f(2)  #3*2=6
    //                    num = 2 , 2*f(1)  #2*1=2
    //                    num = 1, return1
    for(int i=5; i>=0; i++) {
        if(1 % 2 == 1)   printf("func(%d): %d\n", i, func(i));
        
    }
}
int func(int num) {
    if(num == 1) {
        return 1;
    } else {
        return num * func(num-1);
    }
}