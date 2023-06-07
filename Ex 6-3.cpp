#include <stdio.h>

int main(void){
	
	int i,j,n,d;
	
	scanf("%d",&n);
	int b=65+n;
	for(i=0; i<=n; i++){
		d=b-i;
		for(j=0; j<i; j++){
			printf("%c",b-j);
		}
		printf("%c\n",d);
	}
	
	return 0;
}
