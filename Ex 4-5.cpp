#include <stdio.h> //4-5

int main(void){
	double Mbs, MB, sec; //�ް� ��Ʈ �ް� ����Ʈ �� ����. 
	
	scanf("%lf %lf",&Mbs,&MB); //�ް���Ʈ�� �ް�����Ʈ�� ���� 
	sec=(MB*8)/Mbs;	//1����Ʈ=8��Ʈ �� ����Ʈ�� 8�����ϸ� ������ ��Ʈ���Ǽ�
					// ���������� ������ �ʰ� ���ȴ�. 
	printf("%.2lfsec",sec);//�̰� ���� ��� ��° �ڸ����� 
	
	return 0;
}
