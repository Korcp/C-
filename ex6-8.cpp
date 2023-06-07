#include <stdio.h>//6-8; 

int main(){
	double a,b,min,re,v; //계산변수선언 
	
	while(true){ //while 무한반복 
		scanf("%lf %lf",&a,&b); //a와b의 값을받음 
		if(getchar()!='\n'){ //이게 설명 하면 진짜 어려워서
							//이렇게쓰면 문자가들어오면 참이되서 
			break; // break를 실행시켜서 while반복탈출 
		}	
		
		else{ //문자가 아닌경우 
			min=a-b;	// 두수의 차 
			re=a*b;	   // 곱 
			printf("%.3lf\n",min/re);//정답 
		}
	}
	return 0;
}
