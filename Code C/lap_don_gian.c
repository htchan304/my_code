#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int i;
	printf("1");
	for( i = 2; i <= n; i++)
	printf(", %d", i);
	printf("$");
	return 0;
	
}
