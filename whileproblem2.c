#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void exam1(){
	int i=30;
	while(i>=10) {
		printf("%d ", i);
		i-=2;
	}
} 

void exam2(){
	int i=1, n, sum=0;

	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d", &n);

	while(i<=n) {
		sum+=i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
} 

void exam3(){
	int i=0, sum=0;

	while(1) {
		i++;
		if(i>10) break;
		if(1%5==0) continue;
		sum+=1;
	}
	printf("sum = %d\n", sum);
} 

void exam4(){
	int i, su, cnt=0;

	printf("숫자 입력 : ");
	scanf("%d", &su);

	i=1;
	while(i<=su) {
		if(su%i==0) {
			cnt++;
		}
		i++;
	}
	if(cnt==1) {
		printf("%d은(는) 소수\n", su);
	}
	else {
		printf("%d은(는) 소수가 아님\n", su);
	}
} 

void exam5(){
	int i, j;
	for(i=1;i<=5;++i) {
		for(j=0;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
	for(i=4;i>=1;--i) {
		for(j=0;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
} 

void exam6(){
	int n, a1=0, a2=1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		printf("%d ", a1);
		a3=a1+a2;

		a1=a2;
		a2=a3;
	}
} 

void exam7(){
	int answer, cnt=0, guess;
	srand(time(NULL));
	answer=rand()%100+1;
	
	do {
		printf("1부터 100까지 숫자를 맞춰보세요>> ");
		scanf("%d", &guess);
		cnt++;

		if(guess>answer) {
			printf("제시한 숫자가 높습니다.\n");
		}
		if(guess<answer) {
			printf("제시한 숫자가 낮습니다.\n");
		}
	} while(guess!=answer);

	printf("축하합니다! 정답은 %d이고, 시도횟수는 %d입니다.", answer, cnt);
} 

void exam8(){
	int a, b, temp, i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);
	if(a>b) {
		temp=a;
		a=b;
		b=temp;
	}
	for(i=a;i<=b;i++) {
		printf("%d ", i);
	}
} 

void exam9(){
	int i=1, j;

	while(i<=5) {
		j=1;
		while(j<i) {
			printf("O");
			j++;
		}
		printf("*\n");
		i++;
	}
} 

void exam10() {
	int i, j;
    for(i=1;i<=9;i++) {
        for(j=2;j<=5;j++) {
            printf("%2d *%2d = %2d\t", j, i, j*i);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=9;i++) {
        for(j=6;j<=9;j++) {
            printf("%2d *%2d = %2d\t", j, i, j*i);
        }
        printf("\n");
    }
}

int main(){
	system("chcp 65001");
	system("cls");
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
				break;
			default:
				break;
		}
	}
}
