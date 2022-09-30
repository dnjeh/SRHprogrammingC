#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void exam3(){
	int n, a=0;

	printf("4자리수 입력 : ");
	scanf("%d", &n);

	do{
		a++;
		printf("%d", n%10);
		n/=10;
	} while(a<4);
} 

void exam4(){
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

void exam5(){
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

void exam6(){
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

void exam7(){
	/*int i=1, j;

	while(i<=5) {
		j=1;
		while(j<i) {
			printf("O");
			j++;
		}
		printf("*\n");
		i++;
	}*/
	int i, j;
	for(i=0;i<4;i++) {
		for(j=3-i;j>0;j--) {
			printf("*");
		}
		printf("O\n");
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
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
				break;
			default:
				break;
		}
	}
}
