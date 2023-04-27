// 평균 계산하기 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double num1,num2,num3;
    double sum,avg;

    printf("3개의 실수를 입력하시오 : ");
    scanf("%lf %lf %lf",&num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;

    printf("합계=%.2lf\n",sum); // 소수점 이하를 2자리로 표시
    printf("평균=%.2lf\n",avg);

    return 0;
}