#include <stdio.h>//6-8; 

int main(){
	double a,b,min,re,v; //��꺯������ 
	
	while(true){ //while ���ѹݺ� 
		scanf("%lf %lf",&a,&b); //a��b�� �������� 
		if(getchar()!='\n'){ //�̰� ���� �ϸ� ��¥ �������
							//�̷��Ծ��� ���ڰ������� ���̵Ǽ� 
			break; // break�� ������Ѽ� while�ݺ�Ż�� 
		}	
		
		else{ //���ڰ� �ƴѰ�� 
			min=a-b;	// �μ��� �� 
			re=a*b;	   // �� 
			printf("%.3lf\n",min/re);//���� 
		}
	}
	return 0;
}
