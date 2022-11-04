#include <stdio.h>
int main() {
    int a, i, sum=0, t;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        scanf("%d", &t);
        if(t%5==0) {
            sum+=t;
        }
    }
    printf("%d", sum);
}