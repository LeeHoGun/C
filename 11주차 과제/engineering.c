// 공학용 계산기 프로그램

#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.
#include <math.h> // 여러 수학 함수들을 포함하는 C언어의 표준 라이브러리.

int menu(void) // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.)
{
    int n;
    
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요:");
    scanf("%d", &n); /* 형식화된 데이터를 읽는 함수. %d = 형식지정자. 10진 정수로 출력. 
                       & = 해당 변수의 주소를 가리키는 역할. 주소값이다. */

    return n; // n값 return.
}

void factorial() // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.
{
    long long n, result=1, i; // int형으로 원하는 정수값을 다 못 담을 때 쓰임. 조 단위를 넘어, 경 단위의 큰 숫자를 표현할 수 있음.
    printf("정수를 입력하시오: ");
    scanf("%lld", &n); // long long decimal의 첫 글자를 따서 lld를 사용.
    for(i = 1; i <= n; i++) // 반복 조건. i 변수값 1로 초기화, i가 n보다 작거나 같을 때 i++ 반복)
    {
        result = result * i;
    }
    printf("결과 = %lld\n\n", result);
}

void sine() // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.)
{
    double a, result; // double : 소숫점 이하 15자리까지 실수 표현. double 사용할 때는 형식지정자 lf 사용.
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);
    result = sin(a); // a의 sin값을 result로 받음
    printf("결과 = %lf\n\n", result);
}

void logBase10() // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.)
{
    double a, result;
    printf("실수값을 입력하시오:");
    scanf("%lf", &a);
    if(a <= 0.0) // 조건 내용. a가 0.0 보다 작거나 같을 때
    {
        printf("오류\n");
    }
    else
    {
        result = log10(a); // a를 log10해서 result로 받음.
        printf("결과 = %lf\n\n", result);
    }
}

int main(void) // 프로그램의 시작점이자 종료지점.(main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    while(1)
    {
        switch(menu()) // menu(void)함수에서 받은 n값 선택. printf
        {
            case 1:
            {
                factorial(); // 1.팩토리얼
                break; // switch 블록 빠져나옴.
            }
            case 2:
            {
                sine(); // 2. 싸인
                break;  // switch 블록 빠져나옴.
            }
            case 3:
            {
                logBase10(); // 3.로그(base 10)
                break; // switch 블록 빠져나옴.
            }
            case 7:
            {
                printf("종료합니다.\n"); // 7.종료
                return 0; // 해당함수에서 나옴.
            }
            default: // 모든 case와 일치하지 않은 경우 실행.
            {
                printf("잘못된 선택입니다.\n");
                break; // switch 블록 빠져나옴.
            }
        }
    }
}