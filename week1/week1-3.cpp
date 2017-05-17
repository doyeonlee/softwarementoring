/*
*weekly homwork c mentoring
*
*title : this text is num/upper/lower
*
* @author Doyeon Lee
* @since 2017-05-10
*/
#include<stdio.h>
int main() {
	char text;//입력문자
	scanf("%c", &text);

	if (text >= '0' && text <='9') {
		printf("숫자 입니다");
	} else if (text >= 'a' && text <= 'z') {
		printf("소문자입니다");
	} else if (text >= 'A' && text <= 'Z') {
		printf("대문자입니다");
	}
	return 0;
}