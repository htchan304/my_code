#include<stdio.h>


int main(){
	float lt, th1, th2, th3, th4, tb;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	tb = (lt + th1 + th2 + th3 + th4)/5;
	if(tb>=9.0){
		printf("Diem so: %.1f\nDiem chu: A", tb);
	} 
	else if(tb>8.0) {
		printf("Diem so: %.1f\nDiem chu: B+", tb);	
		}
	else if(tb>7.0){
		printf("Diem so: %.1f\nDiem chu: B", tb);
	}
	else if (tb>6.0){
		printf("Diem so: %.1f\nDiem chu: C+", tb);
	}
	else if(tb>5.0){
		printf("Diem so: %.1f\nDiem chu: C", tb);
	}
	else if(tb>4.5){
		printf("Diem so: %.1f\nDiem chu: D+", tb);
	}
	else if(tb>4.0){
		printf("Diem so: %.1f\nDiem chu: D", tb);
	}
	else if(tb<4.0){
		printf("Diem so: %.1f\nDiem chu: F", tb);
	}
	return 0;
}
