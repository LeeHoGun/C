// 원의 면적 계산 프로그램

#include <stdio.h>

int main (void)
{
    float radius; // 반지름
    float area; // 면적

    printf("원의 반지름을 입력하시오 : ");
    scanf("%f",&radius);

    area = radius*radius*3.14;
    
    printf("원의 면적 : %f",area);

    return 0;
}