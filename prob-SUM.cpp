#include <stdio.h>

int main(void){
	
	int N,i,sum,n1;
	
	scanf("%d\n",&N);
	sum=0;
	for(i=0; i<N; i++){
		scanf("%d",&n1);
		
		sum=sum+n1;
	}
	
	printf("%d",sum);
	return 0;
}
