#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int i, S = 0;
	printf("%d Times Table", n);
	printf("\n====================");
	for( i = 1; i <= 10; i++){
			S = n*i;	
			printf("\n%d x %d = %d", n, i, S);
		}
	return 0;
}
