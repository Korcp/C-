#include <stdio.h> //Gravity 

int main(){
	double F; //F 중력의크기 
	double G=6.67430E-17;//중력상수 
	double m1,m2,r; //질량 m1m2 r거리 
	
	scanf("%lf %lf %lf",&m1,&m2,&r); //질량 거리받고 
	
	F=G*((m1*m2)/(r*r)); //계산하기 
	
	printf("%e",F); //끝  
}
