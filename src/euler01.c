#include<stdio.h>
int main(){
	int i,a=0;
	for(i=3;i<1000;i++){
		if(i%3==0||i%5==0){
			a=a+i;
		}
	}
	printf("%d",a);
}
