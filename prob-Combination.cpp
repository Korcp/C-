#include <stdio.h>

int main(void){
	
	int n,k,i,c,com;
	scanf("%d %d",&n,&k);
	c=n-k;
	int a=1;
	int b=1;
	int d=1;
	for(i=k; i>0; i--){
		a*=i;
	}
	for(i=n; i>0; i--){
		b*=i;
	}
	
	for(i=c; i>0; i--){
		d*=i;
	}
	com=b/(a*d);
	printf("%d",com);
	return 0;

}
