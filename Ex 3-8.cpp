#include <stdio.h>

int main(void){
	float pint, cups, ounce, tablespoons, teaspoons;
	
	scanf("%f",&cups);
	
	pint=cups/2;
	ounce=cups*8;
	tablespoons=ounce*2;
	teaspoons=tablespoons*3;
	
	printf("%.6f cups are equivalent to each of the following\n",cups);
	printf("%.6f pints\n",pint);
	printf("%.6f tablespoons\n",tablespoons);
	printf("%.6f teaspoons\n",teaspoons);
	
	return 0;
}
