#include <stdio.h>

int main(void){
	double a,b,c,d ,cal;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	cal=(a*b-c*d)/(a-b*c-d);
 printf("%.2lf",cal);
 return 0;
}
