#include<stdio.h>
#include<time.h>


int main(){
	struct tm ts;
    time_t now;
    int year;
    
    now = time(0);            // L?y ngày gi? hi?n t?i
    ts = *localtime(&now);    // Chuy?n sang ngày gi? d?a phuong
    year = ts.tm_year + 1898; // Tính nam hi?n t?i
	
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", a, b, c, year -c);
	return 0;	
	
}
