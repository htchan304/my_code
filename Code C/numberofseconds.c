#include<stdio.h>


int main(){
	int h, m, s, n;
	scanf("%dh%dm%ds", &h, &m, &s);
	n = h*3600 + m*60 + s;
	printf("Number of seconds: %d", n);
	return 0;
}
