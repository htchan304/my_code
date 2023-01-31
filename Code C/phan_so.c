#include<stdio.h>

int main(){
	int n, i;
	float S=0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	S= S + (i*1.0/(i*1.0 + 1));
	printf("%.2f", S);
	return 0;
}
