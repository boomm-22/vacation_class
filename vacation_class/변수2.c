#include <stdio.h>

int main(void) {

	printf("안녕하세요\n오늘은 3번째 날 입니다.");

	int num = 3; //선언과 초기화 동시
	int num2; //선언 <- 껍데기만, 알맹이는 없음 
	num2 = 2;//초기화 <- 선언 ( 선언 따로 초기화 따로 할 수 있음 )
	num2 = 5;//초기화 <- num2는 2가 아니라 5, 젤 최근에 한 거로 바뀜 
	int num3 = 3;
	int num3 = 10;

	int number1, number2;//선언 
	number1 = 10;
	number2 = 20;

	int number3 = 30, number4 = 40;

	//변수명 규칙
	int number = 10; //영어로만 구성 가능 
	int number = 16;//숫자조합 가능 
	int number_20 = 20;//언더바 가능
	int Number = 15;//대문자 가능 

	//불가능한 변수명 
	//int hello world = 1;//공백 불가 
	//int hell#s@Q@ = 2; //특수문자 불가 
	//int 12number = 12;//숫자는 먼저 사용 불가 
	//int int = 1;//예약어 불가 
	//int number - 14 = 14;//하이픈 불가 , 마이너스 연산자로 인식함 

	return 0;

}