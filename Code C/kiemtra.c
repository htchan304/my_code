#include<stdio.h>


int main(){
	float LT, TH1, TH2, TH3, TH4, TB;
	char t;
	scanf("%c", &t);
	scanf("%f%f%f%f%f", &LT, &TH1, &TH2, &TH3, &TH4);
	TB = (LT + (TH1 + TH2 + TH3 + TH4)/4)/2;
	printf("%c\n", t);
	printf("Ly thuyet: %.2f\n", LT);
	printf("Thuc hanh 1: %.2f\n", TH1);
	printf("Thuc hanh 2: %.2f\n", TH2);
	printf("Thuc hanh 3: %.2f\n", TH3);
	printf("Thuc hanh 4: %.2f\n", TH4);
	printf("Trung binh: %.2f", TB);
	return 0;
}
