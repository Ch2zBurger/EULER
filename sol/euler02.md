# Priject Euler 02

피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?

___


피보나치 수열의 n번째 수는 n-1번쨰 수와 n-2번째 수의 합이다.
4000000이하의 모든 n번째 수들을 검사하며 짝수를 골라 모두 더한다.

```c
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
```

a는 b를 내려받고 b는 기존의 a와 b의 합으로 변하면서 b항이 피보나치 수열을 계속 만들어가게 된다. 그때 b가 4000000이하이면서 짝수이면 s로 모두 더해 결과를 출력하도록 한다.

#### Answer:4613732