#include <stdio.h>

int main(void)
{
    int A,B;
    
    printf("두 수를 입력하시오:");
    scanf("%d %d", &A, &B);
    
    if (A>B)
        printf(">");
    else if(A<B)
        printf("<");
    else if(A==B)
        printf("==");
    
    return 0;
}