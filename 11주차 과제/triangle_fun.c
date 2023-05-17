// 삼각 함수 라이브러리

#include <math.h> // 여러 수학 함수들을 포함하는 표준 라이브러리
#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.

int main(void) // 프로그램의 시작점이자 종료지점.(main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    double pi = 3.1415926535; // double : 소숫점 이하 15자리까지 실수 표현. double 사용할 때는 형식지정자 lf 사용. 
    double x, y; 

    x = pi / 2; 
    y = sin( x ); // x값을 y = sin(x)로 받음.
    
    printf("sin( %lf ) = %lf\n", x, y ); // 데이터 출력
    y = cos ( x ); 
    printf("cos( %lf ) = %lf\n", x, y ); // 데이터 출력
}