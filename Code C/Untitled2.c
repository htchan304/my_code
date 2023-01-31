#include<stdio.h>


int main(){
	int R1, R2, R3;
	float Rss, R;
	scanf("%d%d%d", &R1, &R2, &R3);
	Rss = (R2*R3)*1.0/(R2+R3);
	R = Rss + R1;
	printf("%.2f", R);
	return 0;
}
