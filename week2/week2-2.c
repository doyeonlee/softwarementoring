/*
*weekly homwork c mentoring
*
*title : 동적할당 이용해서 배열 길이 늘리기
*
* @author	Doyeon Lee
* @since	2017-05-28
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int *arr;
	int num = 1;
	int input = 0;
	int i = 0;
	printf("할당할 배열의 길이 : ");
	scanf("%d", &num);
	arr = (int*)malloc(num); //할당할 배열의 길이만큼 할당한다

	printf("숫자를 입력하세요\n");

	while (input != -1) {		//인풋값이 -1이면 멈춘다.
		scanf("%d", &input);=	//인풋을 받는다.
		arr[i] = input;			//arr배열의 i번째에 값을 넣는다.
		printf("i번째 배열 값 : %d\n", arr[i]);
		++i; // i증가

		if (i >= num) {				//만약 i가 할당된 배열길이 이상이라면
			num = num + 3;			//배열길이를 3만큼 늘려주고
			arr = (int*)malloc(num);//다시 할당한다.
			printf("배열늘리기!!\n");
		}
	}
	return 0;
}