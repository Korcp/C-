#include <stdio.h>

int main(void){
	double distance, hil, mile, galon;
	scanf("%lf %lf",&distance,&hil);
	//1������ 1.609ų�ι��� 100km= ���? 
	mile=distance/1.609;
	galon=hil/3.785;
	
	printf("%.1lf %.1lf",mile,galon);
	
	
	return 0;
}
