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
    printf("\n에제15==========\n");
    int i, num;

    i=1;
    printf("약수를 구할 수 입력 : ");
    scanf("%d", &num);
    while(i<=num) {
        if(num%i==0) {
            printf("%d ", i);
        }
        i++;
    }
}