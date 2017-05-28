/*
*weekly homwork c mentoring
*
*title : invert number
*
* @author	Doyeon Lee
* @since	2017-05-15
*/
#include <stdio.h>
int main() {
	int num; //입력받는 수
	int ten = 1; //나누는 10의 제곱수
	int rest = 10; //나머지
	int cipher = 0; //자리수
	int i;
	int pri; //출력햘 수
	scanf("%d", &num);

	//입력받은 수의 자리수 구하기
	for (ten = 1; rest > 1; ++cipher) {
		rest = num / ten;
		ten = ten * 10;
	}

	//거꾸로 출력하기
	for (i = 1; i < cipher ; ++i) {
		pri = num;
		pri = pri % 10;
		printf("%d", pri);
		num = num / 10;
	}

	return 0;
}