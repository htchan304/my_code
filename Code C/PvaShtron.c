#include<stdio.h>


int main(){
	float d, P, S;
	scanf("%f", &d);
	P = 3.14*d;
	S = (3.14*d*d)/4;
	printf("Chu vi: %.2f\n", P);
	printf("Dien tich: %.2f", S);
	return 0;
}
