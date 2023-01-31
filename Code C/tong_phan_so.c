#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	float S = 0;
	int i;

	for( i = 1 ; i <= n; i++)
	S = S + ( i*1.0 /(i*1.0 + 1));
	printf("%.2f ", S);
	
	return 0;
	
}
