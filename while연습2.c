#include <stdio.h> 
int main() {
	///����5 (������) )
	int i, j, n, sum=0;
	
	printf("���� ���� ���� ���� ������ �� �Է� : ");
	scanf("%d %d", &i, &n);
	j=i;
	while(j<=n) {
		sum+=j;
		j++;
	} 
	printf("%d���� %d������ ���� %d�Դϴ�\n", i, n, sum);
	printf("=====================\n"); 	
}
