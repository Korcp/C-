#include <stdio.h>

int main(){
	float Mbs,MB;
	float sec;
	
	scanf("%f %f",&Mbs,&MB);
	
	sec=(MB*8)/Mbs;
	
	printf("%.2fsec",sec);
	return 0;
}
