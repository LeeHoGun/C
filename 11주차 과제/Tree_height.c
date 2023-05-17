// 나무 높이 측정

#include <math.h> // 여러 수학 함수들을 포함하는 C언어의 표준 라이브러리.
#include <stdio.h> // C 표준 라이브러리 중 표준 입출력에 대한 선언을 모아놓은 헤더파일.

int main(void) // 프로그램의 시작점이자 종료지점.(main함수임을 알림) / (void) : 메인함수가 인자값을 받지 않는다 의미.
{
    double height, distance, tree_height, degrees, radians; 
    // double : 소숫점 이하 15자리까지 실수 표현. double 사용할 때는 형식지정자 lf 사용.
    printf("나무와의 길이(단위는 미터):"); // 데이터 출력
    scanf("%lf", &distance); // 형식화된 데이터를 읽는 함수. 실수로 출력.
                             // & = 해당 변수의 주소를 가리키는 역할. 주소값이다. 
    printf("측정자의 키(단위는 미터):"); // 데이터 출력
    scanf("%lf",&height);  // 형식화된 데이터를 읽는 함수. 실수로 출력
                           // & = 해당 변수의 주소를 가리키는 역할. 주소값이다. 
    printf("각도(단위는 도):"); // 데이터 출력
    scanf("%lf", &degrees);  // 형식화된 데이터를 읽는 함수. 실수로 출력  
                             // & = 해당 변수의 주소를 가리키는 역할. 주소값이다. 
    radians = degrees * (3.141592 / 180.0); // 라디안 = 원하는 각도 X PI X 180도

    tree_height = tan(radians) * distance + height; // 나무 높이 = 탄젠트(라디안) X 길이 + 키(높이)
    printf("나무의 높이(단위는 미터): %lf\n", tree_height); 

    return 0; // 현재 실행 중인 해당함수를 벗어나겠다는 뜻.
}