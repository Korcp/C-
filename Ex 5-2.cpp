#include <stdio.h>

int main(void){
	
	long long i,a,b,c,d,sum;
	
	scanf("%lld  %lld",&a,&b);
	sum=0;
	c=a-b;
	d=a+b;
	
	for(i=c; i<=d; i++){
		sum=sum+i;
	}
	
	printf("%lld\n",sum);
	
	return 0;
}
