#include <stdio.h>
#define hour 60;
int main(void){
	
	int a,h,m;
	while(true){
		scanf("%d",&a);
		if(a<=0){
			break;
		}
		else{
			if(a>60){
				h=a/60;
				m=a%60;
		}
			else{
				h=0;
				m=a%60;
			}	
				printf("Time is minute(s):   %d=   %d hour(s) and  %d minute(s)\n",a,h,m);
			}
	
		}
	
	
	return 0;
}
