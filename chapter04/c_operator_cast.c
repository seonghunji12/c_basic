//casting: 형변환
// -int(정수) →double(실수)

#include <stdio.h>

int main(void) {
    int a = 20, b = 3;
    double res;

    //(double)을 앞에 붙이면 형변환 ex) 20 →20.0 ,int → double(작은type →큰type)
    res = (double)a / (double)b; 
    printf("a = %d, b = %d\n", a, b);
    printf("a/b의 결과 : %.1lf\n", res);

//double → int(큰type →작은type) : 값의 손실발생
    a = (int)res; 
    printf("(int) %.1lf의 결과: %d\n", res, a);
}