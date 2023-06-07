#include <stdio.h>

int main(void){
	
	//float quart;
    //float gram = 950;
    //float j = 3.0e-23;
    //float g;
 
    //scanf("%f", &quart);
 
 //   g = quart * gram / j;
 
   // printf("%e", g);
 
 
 	double q;
 	double gram=950;
 	double j=3.0e-23;
 	double g;
 	
 	scanf("%lf",&q);
 	
 	g=q*gram/j;
 	
 	printf("%e",g);
 	
    return 0;
}
