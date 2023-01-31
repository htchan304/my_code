#include<stdio.h>


int main(){
	int x, y, z, a;
	scanf("%dh%dm%ds", &x, &y, &z);
	a = x*3600+y*60+z;
	printf("Number of seconds: %d", a);
	return 0;
		
}
