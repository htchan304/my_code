#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int i, j;
	for( i = 1; i <= n; i++){
		printf("%d\n", i);
	}
	for( j = 1; j <= 2*i - 1; j++){
		printf("%d ", n);
	}
	
	return 0;
}
