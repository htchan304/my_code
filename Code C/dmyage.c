#include<stdio.h>
#include<time.h>


int main(){
	int d, m, y;
	scanf("%d%d%d", &d, &m, &y);
	
	struct tm ts;
    time_t now;
    int year;
    
    now = time(0);            // L?y ngày gi? hi?n t?i
    ts = *localtime(&now);    // Chuy?n sang ngày gi? d?a phuong
    year = ts.tm_year + 1898; // Tính nam hi?n t?i
    
    printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", d, m, y, year-y);
    return 0;
    
}
