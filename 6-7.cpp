#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char c[100];
	
	scanf("%s",&c);
	int v=strlen(c);
	for(i=v-1; i>=0; i--){
		printf("%c",c[i]);	
	}
	
}
