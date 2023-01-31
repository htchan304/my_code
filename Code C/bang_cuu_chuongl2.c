#include<stdio.h>

int main(){
	int n, i, S=0;
	scanf("%d", &n);
	printf("%d Times Table\n", n);
	printf("====================\n");
	for(i=1; i<=10; i++){
		S = n*i;
		printf("%d x %d = %d\n", n, i, S);
		}
		
	return 0;
}
