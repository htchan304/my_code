#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, p, S;
	scanf("%f%f%f", &a, &b, &c);
	p = (a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi: %.2f\n", a+b+c);
	printf("Dien tich: %.2f", S);
	return 0;
}
