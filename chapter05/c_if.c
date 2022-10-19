#include <stdio.h>
/**
 * if문(제어문) 기본 문법
 * 
 * if(조건) {
 * 실행문
 * } else if(조건) {
 * 실행문
 * } else {
 * 실행문
 * }
 * 
 * if 와 else는 한번씩만 else if 는 여러번 사용가능
 * 
  조합 방법
  1. if() 단독
  2. if()~else
  3. if()~else if()
  4.if()~else if()~else

  ※if문은 반드시if로 시작
  ※else if()와 else는 필수 아님
  ※if와 else는 한번만 사용 가능
  ※else if()여러번사용 가능
  ※if문에서 체인으로 연결된 경우 위에서부터
  참(true)인 값 하나만 실행하고 빠져나감

#조건문 1개(chain) - 이중에 하나만 실행(참)
if(남자이면){
    출력(남자);
    }else{
        출력(여자)
 }

#조건문 2개(각각 따로 실행)- 남자에서 참이어도 (여자)실행
if(남자이면){
    출력(남자);
    }
    if(여자이면{
        출력(여자)
 }
*/

int main(void) {
    int a = 20;
    int b = 0;
//조건을 보고
//참(true) 블록문 안에 있는 코드 실행
// 거짓(false) 다음으로 넘어감
    if(a > 10) {
        printf("a가 10보다 커요!");
    }
}