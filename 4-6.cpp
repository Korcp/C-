#include <stdio.h>
#include <string.h>

int main(){
	char a[30],b[30]; //a와b를 지정 
	int al,bl,i,add; //정수지정 
	scanf("%s %s",&a,&b); //성과 이름 한줄에 받음 
	al=strlen(a);	//a의 문자길이 
	bl=strlen(b);	//b의 문자길이 
	add=al+bl;			//a+b의 문자길이 
	printf("*%s %s*\n",a,b); //첫줄에 *붙혀서 ab글자출력 
	for(i=0; i<add; i++){ //문자열의 길이만큼 반복 
		if(i==0){			//i가 0일때 *프린트 
			printf("*");
		}
		if(i==al-1){	//i가 첫글자의 끝일때 숫자 프린트 배열은 0부터값이니까 -1해줘야됨. 
			printf("%d",al);
		}
		else{			// 위에조건이 아니면 공백 프린트 
			printf(" ");
			
			if(i==add-1){	//i가 맨뒤에 글자를 지정할때 
				printf("%d",bl);	//bl을 출력 
			}
			
		}
		if(i==add-1){ //요건 add로하니까 범위밖이라서 똑같이 -1로하니까 바로뒤에 출력되서 요래햇엉 
			printf("*\n");
		}
		//그럼 성과 이름의 끝글자에 맞추어 출력완료. 
	}
	// 성과 이름 첫글자에 맞춰 출력 하는법 
	printf("*%s %s*\n",a,b);  //반복은 위랑동일 
	for(i=0; i<add; i++){
		if(i==0){
			printf("*");
		}
		if(i==0){	//*을삽입하고 첫위치가 0이면 첫글자에 출력하기때문에 0일때 출력 
			printf("%d",al);
	}
		if(i==(al)){ //그러면 al 끝나면 딱뒤에 첫글자에 위치하기때문에 출력 
			printf("%d",bl);
		}
		else{ //이외의 경우에는 공백출력 
			printf(" ");
		}
		if(i==add-1){ //마지막에 위치에 별출력 
			printf("*");
		} //사실 계속 실행하면서 수정 했어 현수도 시험때 나오면 자꾸실행시키면서 수정하는게 나을꺼야.. 
	}
}
