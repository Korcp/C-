#include <stdio.h>

int main(void){
	
	int j,i,t,d,h,m,s,a;
	for(j=0; j<4; j++){
	scanf("%d",&i);
	if(i<0){
		break;
	}
	else{
	
	t=i/86400;
	a=i/60;
	if(i>=86400){
		h=(i-86400)/3600;
	}
	else{
		h=i/3600;
	}
	m=a%60;
	s=i%60;
	
	printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n",i,t,h,m,s);
}
}
	return 0;
}
