#include <stdio.h>
#include <stdlib.h>
void func1();
void func2();

int main() {
    int no;
    while(1) {
        printf("함수번호 : ");
        scanf("%d", &no);
        switch (no)
        {
        case 0:
            return 0;
        case 1:
            system("cls");
            func1();
            break;
        case 2:
            system("cls");
            func2();
            break;
        default:
            printf("잘못된 입력입니다. (자연수만 허용)");
            break;
        }
    }
}

void func1() {
    int i=0, sum=0;
    while(1) {
        i++;
        if(i>10) {
            break;
        }
        if(i%5!=0) continue;
        sum+=i;
    }
    printf("1부터 10까지 5의 배수를 제외한 합 : %d", sum);
}
void func2() {
    int n, count=0, sum=0;
    do {
        scanf("%d", &n);
        if(n<1) continue;
        sum+=n;
        count++;
    } while(count<5);
    printf("합계 : %d \n", sum);
}