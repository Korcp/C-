#include <stdio.h>

int main(void){
	
	long long int n,i,sum,c;
	c=0;
	scanf("%lld",&n);
	sum=0;  
	for(i=1; i<=n; i++){
		c=(1000*i); //i=1 1000 i=2 2000; i=3 3000;
		sum=sum+c;
	}
	
	printf("%lld",sum);
	
	return 0;
}
