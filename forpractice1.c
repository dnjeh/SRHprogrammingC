#include <stdio.h>
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
int main() {
    int no;
    while(1) {
        printf("\n문제 번호 : ");
        scanf("%d", &no);
        printf("%d번 문제==================\n", no);
        switch(no) {
            case 1: exam1(); break;
            case 2: exam2(); break;
            case 3: exam3(); break;
            case 4: exam4(); break;
            case 5: exam5(); break;
        }
    }
}

void exam1() {
    int i;
    for(i=1;i<=6;i++) {
        printf("i = %d\n", i);
    }
}
void exam2() {
    int i, sum=0;
    for(i=1;i<=10;i++) {
        sum+=i;
    }
    printf("1~10까지 합 : %d", sum);
}
void exam3() {
    int i, even=0, odd=0;
    for(i=1;i<=100;i++) {
        if(i%2==0) {
            even+=i;
        }
        else{
            odd+=i;
        }
    }
    printf("짝수합 = %d, 홀수합 = %d", even, odd);
}
void exam4() {
    //구구단 2단 축력하기
    int i;
    for(i=1;i<=9;i++) {
        printf("2 * %d = %d\n", i, i*2);
    }
}
void exam5() {
    printf("읎음");
}