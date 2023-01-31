#include<stdio.h>
int main() {
	int a;
	printf("Nhap vao a = ") ;
	scanf("%d", &a);
	((a%2==0)?"Chan":"Le");
	printf("%d la so: ", a);
}

