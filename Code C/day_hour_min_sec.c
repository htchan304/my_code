#include<stdio.h>


int main(){
	int n, d, h, m, s;
	scanf("%d", &n);
	d = n/86400;
	h = (n - d*86400)/3600;
	m = (n - d*86400 - h*3600)/60;
	s = (n - d*86400 - h*3600 - m*60);
	if(d>=1){
		printf("%d days %02d:%02d:%02d", d, h, m, s);
	} else {
		printf("%02d:%02d:%02d", h, m, s);
	}	
return 0;	
}
