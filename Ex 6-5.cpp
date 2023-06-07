#include <stdio.h>

int main(void){
	char c;
	 int i, j,k;
	 scanf("%c",&c);
	 k=c-65;  
 
    for(i = 0; i <= k; i++) {  
        for(j = i; j < k; j++)    printf("-");  
        for(j = 0; j <= i; j++)    printf("%c ",c);  
        printf("\n");  
    }  
 


	return 0;
	
}
