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
	char text;//�Է¹���
	scanf("%c", &text);

	if (text >= '0' && text <='9') {
		printf("���� �Դϴ�");
	} else if (text >= 'a' && text <= 'z') {
		printf("�ҹ����Դϴ�");
	} else if (text >= 'A' && text <= 'Z') {
		printf("�빮���Դϴ�");
	}
	return 0;
}