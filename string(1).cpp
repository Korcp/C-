#include <stdio.h> //string(1)
#include <string.h>//strlen �Լ� 

int main(){
	int a,c; //�������� 
	char b[30]; //�����̸��� 30�������ʴ´ٰ��ؼ� 30�Ҵ� �迭��0~29 
	
	scanf("%[^\n]s\n",&b); //[^\n]��Ŵ� \n���ö����� b�ǹ��ڸ� �ٹ޴´ٴ¶�  
	scanf("%d",&a);//������ ���� 
	
	c=strlen(b)-1; //b�� ���ڿ����̸� ���ϴµ� �����̸��̴ϱ� ������ �ϳ������ -1 
	
	printf("%d %d",c,a); //c�� a�� ���. 
	
} 
