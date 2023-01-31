#include<stdio.h>


int main(){
	int d, m, y;
	scanf("%d%d%d", &d, &m, &y);
	if( y>=1 ){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			if(1<=d && d<=31){
				printf("YES");
			}else{
				printf("NO");
			}
		}else if(m==4 || m==6 || m==9 || m==11){
			if(1<=d && d<=30){
				printf("YES");
			}else{
				printf("NO");
			}
		}else if(m==2){
			if((y%4==0) && (y%100!=0)){
				printf("YES");		
			}else if(y%400==0){
				if(1<=d && d<=29){
					printf("YES");
				}else{
					printf("NO");
				}
			}else{
				printf("NO");
			}
		}
	}else{
		printf("NO");
	}
	return 0;	
	
}
