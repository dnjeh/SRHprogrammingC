#include <stdio.h>

//5 << 간단 계산기 << 2 + 3
double dcalc(double a, double b) {
    double t;
    if(!b) {
        printf("0으로 나누면 무한으로 발-산\n");
        t=0b1111111111111111111111111111111;
    }
    else t=a/b;
    return t;
}
double calc(char op, double a, double b) {
    double t;
    switch(op) {
        case '+':
            t=a+b;
            break;
        case '-':
            t=a-b;
            break;
        case '*':
            t=a*b;
            break;
        case '/':
            t=dcalc(a, b);
            break;
        default:
            printf("잘못된 연산자입니다 (허나, +로 인식하겠습니다)\n");
            t=calc('+', a, b);
            break;
    }
    return t;
}
int main() {
    double a, b;
    char op;
    printf("연산식을 입력: ex) 2 + 3 : ");

    scanf("%lf %c %lf", &a, &op, &b);
    printf("계산 과정 : %.2lf %c %.2lf = %.2lf", a, op, b, calc(op, a, b));
}