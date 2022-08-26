#include <stdio.h> 
int main() {
	///예제5 (변형됨) )
	int i, j, n, sum=0;
	
	printf("합을 구할 시작 수와 마지막 수 입력 : ");
	scanf("%d %d", &i, &n);
	j=i;
	while(j<=n) {
		sum+=j;
		j++;
	} 
	printf("%d부터 %d까지의 합은 %d입니다\n", i, n, sum);
	printf("=====================\n"); 	
}
