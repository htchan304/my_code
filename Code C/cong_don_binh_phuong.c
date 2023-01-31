#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	long long i, S = 0;
	for( i =1; i <= n; i++)
	S = S + i*i;
	printf("%lld", S);
	return 0;
	
}
