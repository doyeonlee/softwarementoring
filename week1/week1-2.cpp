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
	int triangle_hight; //�ﰢ�� �ϳ� ����
	int line = 1; //��
	int blank = 1; //������ ���� ����
	int num = 1; //����
	printf("you can draw triangle!!\n");
	scanf("%d", &triangle_hight);
	//�ﰢ���Ƕ�̵�
	while (line <= triangle_hight) {

		while (blank <= triangle_hight - line) {//����
			printf(" ");
			++blank;
		}
		while (num <= line) {//���� ��������
			printf("%d", num);
			++num;
		}
		while (num > 1) {//���� ��������
			--num; //num�� ���� ���·� ������ ������ �ٽ� ���ְ� �����Ѵ�.
			printf("%d", num);
		}
		blank = 1;
		num = 1;
		printf("\n");
		++line;
	}

	--line; //line�� ���� ���·� ������ ������ �ٽ� ���ְ� �����Ѵ�.

	//���ﰢ�� �Ƕ�̵�
	while (line >= 1) {

		while (blank <= triangle_hight - line) {//����
			printf(" ");
			++blank;
		}
		while (num <= line) {//���� ��������
			printf("%d", num);
			++num;
		}
		while (num > 1) {//���� ��������
			--num; //num�� ���� ���·� ������ ������ �ٽ� ���ְ� �����Ѵ�.
			printf("%d", num);

		}

		blank = 1;
		num = 1;
		printf("\n");
		--line;
	}
	return 0;
}
