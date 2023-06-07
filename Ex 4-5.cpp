#include <stdio.h> //4-5

int main(void){
	double Mbs, MB, sec; //메가 비트 메가 바이트 초 변수. 
	
	scanf("%lf %lf",&Mbs,&MB); //메가비트와 메가바이트를 받음 
	sec=(MB*8)/Mbs;	//1바이트=8비트 즉 바이트에 8을곱하면 단위가 비트가되서
					// 같은단위로 나누면 초가 계산된다. 
	printf("%.2lfsec",sec);//이게 계산식 출력 둘째 자리까지 
	
	return 0;
}
