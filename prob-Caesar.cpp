#include <stdio.h>

int main(){
	int a,i;
	char b[80];
	
	scanf("%d\n",&a);
	scanf("%[^\n]s",&b);
	 
	for(i=0; i<81; i++){
		  if(b[i] >='A' && b[i]<='Z'){
			b[i]-=a;
	}		
	}
		printf("%s",b);
	
	return 0;
}
