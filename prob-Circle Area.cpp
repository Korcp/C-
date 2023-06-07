#include <stdio.h>

int main(void){
	
	double x,A,P;
	scanf("%lf",&x);
	A=x*x*3.14;
	P=2*3.14*x;
	
	printf("Radius =%.1lf, Area=%.1lf, Perimeter=%.1lf",x,A,P);
	return 0;
}
