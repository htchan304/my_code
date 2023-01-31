#include<stdio.h>

int main(){
	int d, m, y, D;
	scanf("%d %d %d", &d, &m, &y);
	if( y>=1 ){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			D=31;
		}else if(m==4 || m==6 || m==9 || m==11){
			D=30;
		}else if(m==2){
			if((y%4==0) && (y%100!=0)){
				D=29;	
			}else if(y%400==0){
				D=29;
			}else{
				D=28;
			}
		}
	}
	
	if(d<D){
		d++;
	}
	else if(d==D){
		d=1;
		if(m==12){
			m=1;
			y++;
		}
		else{
			m++;
		}
	}
	printf("%02d/%02d/%02d", d, m, y);
	
}
