#include <stdio.h>
int pack(int a) {
    printf("%d*", a);
    if(a==1||a==0) return 1;
    else return a*pack(a-1);
}
//재귀함수(recursion recursive)
//펙토리얼 구현
int main() {
    int a, t;
    printf("펙퇼얼 값을 구해봅시다.\n숫자 : ");
    scanf("%d", &a);
    printf("\b == %d 입니다", a, pack(a));
}