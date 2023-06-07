#include <stdio.h>
#include <string.h>
int main(){
	long long n,m,sum; //정수요구 변수 
	long long add,min; //합차 변수 
	long long i; //반복문에 들어갈 변수 
	scanf("%lld %lld",&n,&m);
	
	min=n-m;
	add=n+m;
	sum=0;						// 
	for(i=min; i<=add; i++){ // 임의로 min 7 add 13
							// i의값은 7,8,9,10,11,12,13 
		sum=sum+i;			// i=7; sum=0+7
							// i=8; sum(7)=7+8;
							// i=9; sum=15+9;
							// i=10; sum=21+10;
	}
		printf("%lld",sum);
		return 0;
}
