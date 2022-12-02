#include <stdio.h>
void message(int n, char *str) {
    int i;
    printf("[calc] %s\n", str);
    for(i=0;i<n;i++) {
        printf("*");
    }
    printf("\n");
}
int calc(int a, int b, char op) {
    switch (op) {
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            return a/b;
            break;
        case '%':
            return a%b;
            break;
        default:
            message(10, "unexpect op");
            return -1;
            break;
    }
}
int square(int a) {
    return a*a*a;
}
int main() {
    //message(2, "Hello");

    message(calc(2, 3, '+'), "결과");

    printf("%d의 세제곱값은 %d", 5, square(5));
}