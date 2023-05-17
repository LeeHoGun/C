// 동전 던지기 게임

#include <stdlib.h> // C 표준 유틸리티 함수들을 모아놓은 헤더파일.
#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.
#include <time.h> // C 언어에서 시간 관련 함수를 모아놓은 라이브러리

int coin_toss(void); // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.)

int main(void) // 프로그램의 시작점이자 종료지점.(main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    int toss;
    int heads = 0;
    int tails = 0;
    
    srand((unsigned)time(NULL)); /* time함수 : 시간을 구한다.(그 안에 "(NULL)"은 매크로로 널 포인터를 뜻함.) */
                                 /* time(NULL)함수 : 1970년 1월 1일 0시 0분 0초를 기점으로 현재 시간까지의 시간을 계산해줌.(초 단위) */
    // srand((unsigned)time(NULL)) : 난수 발생 초기화. ( seed값으로 현재시간 부여 (unsigned)time(NULL) -> seed값 양수형으로 선언.) 
    for (toss = 0; toss < 100; toss ++) // 100번 반복
    {
        if (coin_toss() == 1) // 코인을 던짐
        {
            heads++; // 앞면 count + 1
        }
        else
        {
            tails++; // 뒷면 count + 1
        }
    }
    printf("동전의 앞면: %d\n", heads);
    printf("동전의 뒷면: %d\n", tails);

    return 0;
}

int coin_toss(void) // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.)
{
    int head = rand() % 2; // 동전은 0 아니면 1이 나옴
    
    return head; // head값 return 
}
