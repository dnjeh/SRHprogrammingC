#include <stdio.h>
int main() {
    int i, j, n, t=1;
    scanf("%d", &n);
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            a[i][j]=t++;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}