#include<stdio.h>


int main(){
	int R1, R2, R3;
	float R, Rss;
	scanf("%d%d%d", &R1, &R2, &R3);
	Rss = (R2*R3)*1.0/(R2+R3);
	R = R1 + Rss;
	printf("%.2f", R);
	return 0;
}
