#include<stdio.h>

int main(){
	int n, S=0, i;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	S= S + i*i;
	printf("%d", S);
	return 0;
	
}
