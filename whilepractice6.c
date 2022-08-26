#include <stdio.h>
int main() {
    printf("\n에제14==========\n");
    int n,sum=0;
    printf("정수 입력(0이면 종료) : ");
    do{ 
        scanf("%d", &n);
        sum+=n;
    } while(n);
    printf("합 : %d", sum);
}