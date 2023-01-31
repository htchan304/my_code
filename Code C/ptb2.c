#include<stdio.h>
#include<math.h>


int main(){
	float a, b, c, x, x1, x2, D;
	scanf("%f%f%f", &a, &b, &c);
	D = b*b - 4*a*c;
	x1 = (-b-sqrt(D))/2*a;
	x2 = (-b+sqrt(D))/2*a;
	if (D==0){
		x = -b/2*a;
		printf("NGHIEM KEP \nx = %.2f", x);
	}
	else if (D<0){
		printf("VO NGHIEM");
	}	 else {
		printf("NGHIEM PHAN BIET \nx1 = %.2f \nx2 = %.2f", x1, x2);
	}
return 0;	
}
