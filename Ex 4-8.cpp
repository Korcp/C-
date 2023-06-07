#include <stdio.h>

int main(void){
	double distance, hil, mile, galon;
	scanf("%lf %lf",&distance,&hil);
	//1마일은 1.609킬로미터 100km= 몇마일? 
	mile=distance/1.609;
	galon=hil/3.785;
	
	printf("%.1lf %.1lf",mile,galon);
	
	
	return 0;
}
