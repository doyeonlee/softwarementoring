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
	int num; //�Է¹޴� ��
	int ten = 1; //������ 10�� ������
	int rest = 10; //������
	int cipher = 0; //�ڸ���
	int i;
	int pri; //����l ��
	scanf("%d", &num);

	//�Է¹��� ���� �ڸ��� ���ϱ�
	for (ten = 1; rest > 1; ++cipher) {
		rest = num / ten;
		ten = ten * 10;
	}

	//�Ųٷ� ����ϱ�
	for (i = 1; i < cipher ; ++i) {
		pri = num;
		pri = pri % 10;
		printf("%d", pri);
		num = num / 10;
	}

	return 0;
}