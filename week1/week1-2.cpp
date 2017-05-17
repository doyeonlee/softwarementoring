/*
*weekly homwork c mentoring 
*
*title : number pyramid
*
* @author Doyeon Lee
* @since 2017-05-10
*/
#include<stdio.h>

int main() {
	int triangle_hight; //삼각형 하나 넓이
	int line = 1; //열
	int blank = 1; //열마다 공백 갯수
	int num = 1; //숫자
	printf("you can draw triangle!!\n");
	scanf("%d", &triangle_hight);
	//삼각형피라미드
	while (line <= triangle_hight) {

		while (blank <= triangle_hight - line) {//공백
			printf(" ");
			++blank;
		}
		while (num <= line) {//숫자 오름차순
			printf("%d", num);
			++num;
		}
		while (num > 1) {//숫자 내림차순
			--num; //num을 더한 상태로 끝났기 때문에 다시 빼주고 시작한다.
			printf("%d", num);
		}
		blank = 1;
		num = 1;
		printf("\n");
		++line;
	}

	--line; //line을 더한 상태로 끝났기 때문에 다시 빼주고 시작한다.

	//역삼각형 피라미드
	while (line >= 1) {

		while (blank <= triangle_hight - line) {//공백
			printf(" ");
			++blank;
		}
		while (num <= line) {//숫자 오름차순
			printf("%d", num);
			++num;
		}
		while (num > 1) {//숫자 내림차순
			--num; //num을 더한 상태로 끝났기 때문에 다시 빼주고 시작한다.
			printf("%d", num);

		}

		blank = 1;
		num = 1;
		printf("\n");
		--line;
	}
	return 0;
}
