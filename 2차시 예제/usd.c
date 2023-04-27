// 환율 계산 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
    double rate; // 원 달러 환율
    double usd; // 달러화
    int krw; // 원화는 정수형 변수로 선언

    printf("환율을 입력하시오 :");
    scanf("%lf",&rate);

    printf("원화 금액을 입력하시오 :");
    scanf("%d",&krw);

    usd = krw / rate; //달러화로 환산
    printf("원화 %d원은 %f달러입니다.",krw, usd); // 계산 결과 출력
}
