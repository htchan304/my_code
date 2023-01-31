#include<stdio.h>


int main(){
	int d, m, y, z;
	scanf("%d%d%d%d", &d, &m, &y, &z);
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %02d tuoi.", d, m, y, z-y);
	return 0;
}
 
