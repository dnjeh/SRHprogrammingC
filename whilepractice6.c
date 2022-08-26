#include <stdio.h>
int main() {
    /*printf("\n에제14==========\n");
    int n=0,sum=0;
    printf("정수 입력(음수면 종료) : ");
    do{ 
        sum+=n;
        scanf("%d", &n);
    } while(n>=0);
    printf("합 : %d", sum);*/
    /*printf("\n문제2==========\n");
    int i, num;

    i=1;
    printf("약수를 구할 수 입력 : ");
    scanf("%d", &num);
    while(i<=num) {
        if(num%i==0) {
            printf("%d ", i);
        }
        i++;
    }*/
    printf("\n문제3==========\n");
    int i, su, cnt=0;

    printf("숫자 입력 : ");
    scanf("%d", &su);

    i=1;
    while(i<=su) {
        if(su%i==0) {
            cnt++;
        }
        i++;
    }
    if(cnt==2) {
        printf("%d은(는) 소수\n", su);
    }
    else {
        printf("%d은(는) 소수가 아님\n", su);
    }
}