#include <stdio.h>
int main() {
    int i, j, n, m, t=1;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(i=m-1;i>=0;i--) {
        for(j=0;j<n;j++) {
            a[j][i]=t++;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}