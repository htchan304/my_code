#include<stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	if (n%4==0){
		if (n%100==00){
			if (n%400==0){
				printf("%n la nam nhuan.", n);	
			}else {
				printf("%n la nam thuong.", n);
			}
		}else {
				printf("%n la nam nhuan.", n);
 	  }
	}else{
		  		printf("%n la nam thuong.", n);
}
return 0;	
}
