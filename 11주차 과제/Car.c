// 자동차 게임

#include <stdlib.h> // C 표준 유틸리티 함수들을 모아놓은 헤더파일.
#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.
#include <conio.h> // 콘솔 입출력 함수를 제공하는 헤더. (kbnit이나 getch 함수 등을 사용할 때 쓰임.)
#include <time.h> // C 언어에서 시간 관련 함수를 모아놓은 라이브러리.

void disp_car(int car_number, int distance) // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐. 매개변수 car_number, distance 선언)
{   // 함수 내용 (몸체).
    int i; // i 변수 선언
    printf("CAR #%d:", car_number); // 데이터 출력 값으로 car_number를 %d 형식 지정자를 통해 값을 받아줌.
    for( i = 0; i < distance/10; i++ ); // 반복 조건. (i를 0으로 초기화, i가 distance/10한 값 보다 작을 때 i++반복함.)
    {
        printf("*");
    }
    printf("\n");
}

int main(void) // 프로그램의 시작점이자 종료지점.(main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    int i;
    int car1_dist = 0, car2_dist = 0; // 변수 값 0으로 초기화. 초기화란 변수를 사용하기 전 처음 값을 저장하는 것.
    // srand((unsigned)time(NULL)) : 난수 발생 초기화. ( seed값으로 현재시간 부여 (unsigned)time(NULL) -> seed값 양수형으로 선언.)
    srand((unsigned)time(NULL)); /* time함수 : 시간을 구한다.(그 안에 "(NULL)"은 매크로로 널 포인터를 뜻함.) */
                                 /* time(NULL)함수 : 1970년 1월 1일 0시 0분 0초를 기점으로 현재 시간까지의 시간을 계산해줌.(초 단위) */

    for( i = 0; i < 6; i ++ ) // 반복 조건. (i를 0으로 초기화, i가 6보다 작을 때 i++ 반복함.) 증감연산자 i = i+1과 같음.
    {
        car1_dist += rand() % 100; /* car1_dist,car2_dist를 rand()를 이용하여서 난수를 발생한다. 난수의 범위는 */
        car2_dist += rand() % 100; /* %연산자를 사용해서 0에서 99로 제한하였다.*/
        disp_car(1, car1_dist); // 위에서 난수 발생한 후 car1_dist값 받아줌.
        disp_car(2, car2_dist); // 위에서 난수 발생한 후 car2_dist값 받아줌.
        printf("----------------\n");
        _getch(); // 기본적으로 키보드 입력을 받는 역할을 하는 함수.
    }
    return 0; // 현재 실행 중인 해당함수를 벗어나겠다는 뜻.
}