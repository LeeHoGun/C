// 삼각함수 그리기

#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.
#include <math.h> // 여러 수학 함수들을 포함하는 C언어의 표준 라이브러리.
#define PI 3.141592 // 상수(숫자, 기호, 문자열 등)나 심지어 함수까지 특정 문자로 치환할 수 있는 기능을 가짐.

double rad(double degree) // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.)
{
    return PI * degree / 180.0; // 파이 X 각도 / 180도를 return
}

void drawbar (int height) // 함수헤더 ( 반환형, 함수 이름, 매겨변수 목록으로 이루어짐.(매개변수 height))
{ 
    for(int i = 0; i < height; i++) // 반복 조건.(i 변수를 0으로 초기화, i가 height 보다 작을 때 i++ 반복.)
    {
        printf("*");
    }
    printf("\n");
}

int main(void) // (main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    int degree, x, y; // 변수 선언 
    for(degree = 0; degree <= 90; degree += 10) // 반복 조건. (각도)degree 변수 0으로 초기화, degree가 90보다 작거나 같을 때 degree += 10 반복.)
    {   // 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다.
        y = (int)(60 * sin(rad((double)degree)) + 0.5); // 60 X 싸인(레디안(각도)+0.5)
        drawbar(y); // drawbar함수 : 전달 인자 없이 20개의 *을 출력함.
    }
    return 0; // 현재 실행 중인 해당함수를 벗어나겠다는 뜻.
}