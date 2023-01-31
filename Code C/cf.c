#include<stdio.h>


int main(){
	int x;
	float C;
	scanf("%d", &x);
	C = 5.0/9 * (x-32);
	printf("%d do F = %.2f do C", x, C);
	return 0;
}
