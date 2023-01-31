#include<stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	if(c==65 || c==69 || c==79 || c==73 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117){
		printf("%c is a vowel.", c);
	} else{
		printf("%c is a consonant.", c);
	}
return 0;
}
