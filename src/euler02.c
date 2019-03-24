#include<stdio.h>
int main(){
	int a=1,b=2,c,s=0;
	while(b<4000000){
		if(b%2==0){
		s=s+b;
		}
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",s);
}
