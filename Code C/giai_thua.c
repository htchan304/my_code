#include<stdio.h>

int main(){
	int n, i;
	long long S=1; 
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	S= S*i;
	printf("%d! = %lld", n, S);
	return 0;
}
