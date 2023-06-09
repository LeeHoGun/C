// 월급,연봉,세금 계산 프로그램

#include <stdio.h>
#define TAX_RATE 0.2 // 기호 상수(1)

int main(void)
{
    const int MONTHS = 12; // 기호 상수(2)
    int m_salary, y_salary; // 변수 선언

    printf("월급을 입력하시오:"); // 입력 안내문
    scanf("%d", &m_salary);
    
    y_salary = MONTHS * m_salary; // 순수입 계산
    printf("연봉은 %d입니다.\n", y_salary);
    printf("세금은 %f입니다.", y_salary*TAX_RATE);

    return 0;
} 