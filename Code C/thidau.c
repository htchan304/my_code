#include<stdio.h>


int main (){
	float s1, s2, s3, min, max, QG, DT;
	scanf("%f%f%f", &s1, &s2, &s3);
	max = s1;
	min = s1;
	QG = 1;
	DT = 1;
	if (s2<min){
		min = s2;
		QG = 2;
	}
	if (s3<min){
		min = s3;
		QG = 3;
	}
	if (s2>max){
		max = s2;
		DT = 2;
	}
	if (s3>max){
		max = s3;
		DT = 3;
	}
	printf("Thanh tich tot nhat: %.1f giay\nThanh tich thap nhat: %.1f giay\nVDV thi dau quoc gia: %.0f\nVDV xuong voi doi tre: %.0f", min, max, QG, DT);
	return 0;	
}
