# 2023-03-23 4주차 C언어 수업

```c

#include <stdio.h>

int main(void)
{
    int A,B,C;

    printf("두 수를 입력하시오:");
    scanf("%d %d", &A, &B);

    printf("%d\n", A * (B%10));
    printf("%d\n", A * (B/10%10));
    printf("%d\n", A * (B/100));
    printf("%d\n", A*B);
    //pirntf("%d", A + y%10);
}
```
