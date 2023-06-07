#include <stdio.h> //string(1)
#include <string.h>//strlen 함수 

int main(){
	int a,c; //변수선언 
	char b[30]; //성과이름이 30을넘지않는다고해서 30할당 배열은0~29 
	
	scanf("%[^\n]s\n",&b); //[^\n]요거는 \n나올때까지 b의문자를 다받는다는뜻  
	scanf("%d",&a);//정수값 받음 
	
	c=strlen(b)-1; //b의 문자열길이를 구하는데 성과이름이니까 공백이 하나생기니 -1 
	
	printf("%d %d",c,a); //c와 a를 출력. 
	
} 
