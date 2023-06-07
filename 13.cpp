#include <stdio.h>
#include <math.h>
int main(void){
	
	int a;
	double V,A,h;
	scanf("%d",&a);
	
	V=sqrt(2)*(a*a*a)/12;
	A=sqrt(3)*(a*a);
	h=sqrt(6)*a/3;
	
	printf("%.2lf %.2lf %.2lf",V,A,h);
	
	
	
	
	return 0;
}
