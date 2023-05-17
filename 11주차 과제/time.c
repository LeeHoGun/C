#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.
#include <time.h> // C 언어에서 시간 관련 함수를 모아놓은 라이브러리

int main(void) // 프로그램의 시작점이자 종료지점.(main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    time_t start, end; // time t는 데이터를 현재 날짜와 시간으로 변환한다. (unsigned long과 동일함) 
    start = time(NULL); // C 라이브러리 함수 time(NULL)은 1970년 1월 1일 이후의 시간을 초 단위로 반환함.
    printf("10초가 되면 아무 키나 누르세요\n");
    
    while(1) /* while(1) : 1 = True, 0 = False. while(1)은 항상 참이기 때문에 while문 안에 있는 코드들이 무안루프를 돌게 됨.*/
    {       
        if(getchar()) // 버퍼에 데이터가 있을 때 -> 버퍼 가장 앞의 데이터를 반환함.
        {             // 버퍼에 데이터가 없을 때 -> 엔터(‘\n’)가 올 때까지 사용자로부터 문자를 받아서 버퍼에 저장하고 가장 앞의 데이터를 반환한다.
            break;    // ( 만약 문자가 ‘1’ 이면 버퍼에는 ‘1’과 ‘\n’이 들어갔다가 ‘1’이 리턴됨 )
        }   // while 블록 빠져나옴.
    }
    printf("종료되었습니다.\n");
    end = time(NULL);  
    printf("경과된 시간은 %ld 초 입니다.", end - start); // end - start의 time을 %ld로 데이터 출력.
    // long decimal의 첫 글자를 따서 ld를 사용. 더 큰 정수.

    return 0; // 현재 실행 중인 해당함수를 벗어나겠다는 뜻.
}