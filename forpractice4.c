#include <stdio.h>
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
int main() {
    int no;

    while(1) {
        printf("문제 번호 : ");
        scanf("%d", &no);

        switch(no) {
            case 1: exam1(); break;
            case 2: exam2(); break;
            case 3: exam3(); break;
            case 4: exam4(); break;
            case 5: exam5(); break;
            case 6: exam1(); break;
            case 7: exam2(); break;
        }
    }
}

void exam1() {
    //예제14
    int i, j;
    for(i=1;i<=5;i++) {
        for(j=1;j<=3;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void exam2() {
    //예제15
    int i, j;
    for(i=1;i<=3;i++) {
        for(j=1;j<=5;j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}
void exam3() {
    //예제16
    int i, j;
    for(i=1;i<=5;i++) {
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void exam4() {
    //예제17
    int i, j, n;
    printf("출력할 행 입력 : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
void exam5() {
    //예제18
    int i, j;
    for(i=1;i<=5;++i) {
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    } 
    for(i=4;i>=1;--i) {
        for(j=i;j>0;j--) {
            printf("*");
        }
        printf("\n");
    } 
}
void exam6() {
    int i, j;
    for(i=2;i<=9;i++) {
        printf("*** %d단 *** \n", i);
        for(j=1;j<=9;j++) {
            printf("%d * %d = %2d", i, j, i*j);
        }
        printf("\n");
    }
}
void exam7() {
    
}