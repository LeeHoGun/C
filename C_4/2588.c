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

/* int x,y,re;
   
   printf("두 수를 입력하시오 : ")

   int n1=0, n2=0, n3=0;
   scanf("%d %d", &x, &y);
   
   n1 = y%10;
   n2 = x * (y/10%10);
   n3 = x * (y/100);
   
   printf("%d\n", n1);
   printf("%d\n", n2);
   printf("%d\n", n3);
   printf("%d\n", n4);
   
   printf("%d", n3*100+n2*10+n1);*/