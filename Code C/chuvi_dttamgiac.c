#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, x, y;
	scanf("%f%f%f", &a, &b, &c);
	x = (a+b+c)/2;
	y = sqrt(x*(x-a)*(x-b)*(x-c));
	printf("Chu vi: %.2f\n", a+b+c);
	printf("Dien tich: %.2f", y);
	return 0;	
}
