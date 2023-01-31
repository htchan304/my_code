#include<stdio.h>


int main(){
	float lt, th1, th2, th3, th4, T;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	T = (lt + th1 + th2 + th3 + th4)/5;
	if (T >=4 ){
		printf("DAT");
	}
	else{
		printf("KHONG DAT");
	}
	return 0;
}
