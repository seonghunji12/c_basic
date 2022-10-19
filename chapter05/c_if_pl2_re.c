#include <stdio.h>
//학점계산기- 리팩토링
int main(void) {
    // 나애 4줄 1번 사용자로부터 점수 입력
    int score;
    char grade;

    printf("점수 : ");
    scanf("%d", &score);
    
    if(score >= 0 && score <= 100) {
        //점수: 0~100점
          if( score >= 91) { //중첩 if문 if문 들여쓰기다
            grade = 'A';
            // 2. 점수로부터 등급(A,B,C, ..)판단
        } else if(score <= 90 && score >= 81) {
            grade = 'B';
        } else if(score <= 80 && score >= 71) {
            grade = 'C';
        } else if(score <= 71 && score >= 61) {
            grade = 'D';
        } else {
            grade = 'F'; // 3.점수와 등급을 출력
        }printf("학생의 점수는 %d점으로 %c학점입니다. ", score, grade) ;
    } else {
        //점수 : 0점 미만 또는 100점 초과
        printf("ERROR: 0~100점 사이에 값을 입력하세요.");
    }
}
