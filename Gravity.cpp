#include <stdio.h> //Gravity 

int main(){
	double F; //F �߷���ũ�� 
	double G=6.67430E-17;//�߷»�� 
	double m1,m2,r; //���� m1m2 r�Ÿ� 
	
	scanf("%lf %lf %lf",&m1,&m2,&r); //���� �Ÿ��ް� 
	
	F=G*((m1*m2)/(r*r)); //����ϱ� 
	
	printf("%e",F); //��  
}
