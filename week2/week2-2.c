/*
*weekly homwork c mentoring
*
*title : �����Ҵ� �̿��ؼ� �迭 ���� �ø���
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
	printf("�Ҵ��� �迭�� ���� : ");
	scanf("%d", &num);
	arr = (int*)malloc(num); //�Ҵ��� �迭�� ���̸�ŭ �Ҵ��Ѵ�

	printf("���ڸ� �Է��ϼ���\n");

	while (input != -1) {		//��ǲ���� -1�̸� �����.
		scanf("%d", &input);=	//��ǲ�� �޴´�.
		arr[i] = input;			//arr�迭�� i��°�� ���� �ִ´�.
		printf("i��° �迭 �� : %d\n", arr[i]);
		++i; // i����

		if (i >= num) {				//���� i�� �Ҵ�� �迭���� �̻��̶��
			num = num + 3;			//�迭���̸� 3��ŭ �÷��ְ�
			arr = (int*)malloc(num);//�ٽ� �Ҵ��Ѵ�.
			printf("�迭�ø���!!\n");
		}
	}
	return 0;
}