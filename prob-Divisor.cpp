#include <stdio.h>

int main(void){
	int i,n;
	int count=0;
	
	scanf("%d",&n);
	
	for(i=2; i<n; i++){
		
		if(n%i==0){
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
