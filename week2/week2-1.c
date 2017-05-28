/*
*weekly homwork c mentoring
*
*title : 이차원 배열 동적할당
*
* @author	Doyeon Lee
* @since	2017-05-28
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int **arr;
	int num = 1;
	scanf("%d", &num); //몇열의 2차원 배열을 선언할지 입력
	num = num + 1; //죄송합니다..이래야 원하는 출력값이 나오네요;;ㅎ
	
	arr = (int**)malloc(sizeof(int*)*num); //num만큼 2차 포인터로 열 할당
	
	for (int i = 0; i < num; ++i) {
		arr[i] = (int*)malloc(i); // 각 열에 그만큼의 행의 갯수 할당
	}
	
	for (int j = 0; j < num; ++j) {
		for (int k = 0; k < j; ++k) {
			arr[j][k] = 0; //각 항에 0 입력
			printf("%d", arr[j][k]); //출력
		}
		printf("\n"); //다음 열에서 엔터
	}
	
 }