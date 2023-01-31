#include<stdio.h>


int main(){
		int d, m , y, D;
	scanf("%d %d %d", &d, &m, &y);
	if(m==1){
		D=d;
	}
	else if(m==2){
		D=31+d;
	}
	else if(m==3){
		D=59+d;
	}
	else if(m==4){
		D=90+d;
	}
	else if(m==5){
		D=120+d;
	}
	else if(m==6){
		D=151+d;
	}
	else if(m==7){
		D=181+d;
	}
	else if(m==8){
		D=212+d;
	}
	else if(m==9){
		D=243+d;
	}
	else if(m==10){
		D=273+d;
	}
	else if(m==11){
		D=304+d;
	}
	else if(m==12){
		D=334+d;
	}
	if((y%4==0&&y%100!=0)||(y%400==0)) if(m>2) D++;
printf("%d", D);
return 0;	
}
