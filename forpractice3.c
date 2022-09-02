#include <stdio.h>
void exam11();
void exam12();
void exam13();
void exam14();
void exam15();
int main() {
    int no;

    while(1) {
        printf("문제 번호 : ");
        scanf("%d", &no);

        switch(no) {
            case 11: exam11(); break;
            case 12: exam12(); break;
            case 13: exam13(); break;
            case 14: exam14(); break;
            case 15: exam15(); break;
        }
    }
}

void exam11() {
    int num1, num2, i;
    printf("공배수를 구할 두 수 입력 : ");
    scanf("%d %d", &num1, &num2);
    for(i=1;i<=100;i++) {
        if(i%num1==0&&i%num2==0) {
            printf("%d ", i);
        }
    }
} 
void exam12() {
    int sum=0, num=1;
    for(;;) {
        sum+=num;
        printf("%d까지의 합 : %d", num, sum);
        num++;
        if(num>5) {
            break;
        }
    }
}
void exam13() {

}
void exam14() {

}
void exam15() {

}