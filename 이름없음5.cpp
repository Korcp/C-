#include <stdio.h>
#include <string.h>
int main(){
	long long n,m,sum; //�����䱸 ���� 
	long long add,min; //���� ���� 
	long long i; //�ݺ����� �� ���� 
	scanf("%lld %lld",&n,&m);
	
	min=n-m;
	add=n+m;
	sum=0;						// 
	for(i=min; i<=add; i++){ // ���Ƿ� min 7 add 13
							// i�ǰ��� 7,8,9,10,11,12,13 
		sum=sum+i;			// i=7; sum=0+7
							// i=8; sum(7)=7+8;
							// i=9; sum=15+9;
							// i=10; sum=21+10;
	}
		printf("%lld",sum);
		return 0;
}
