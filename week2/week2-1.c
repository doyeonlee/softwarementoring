/*
*weekly homwork c mentoring
*
*title : ������ �迭 �����Ҵ�
*
* @author	Doyeon Lee
* @since	2017-05-28
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int **arr;
	int num = 1;
	scanf("%d", &num); //��� 2���� �迭�� �������� �Է�
	num = num + 1; //�˼��մϴ�..�̷��� ���ϴ� ��°��� �����׿�;;��
	
	arr = (int**)malloc(sizeof(int*)*num); //num��ŭ 2�� �����ͷ� �� �Ҵ�
	
	for (int i = 0; i < num; ++i) {
		arr[i] = (int*)malloc(i); // �� ���� �׸�ŭ�� ���� ���� �Ҵ�
	}
	
	for (int j = 0; j < num; ++j) {
		for (int k = 0; k < j; ++k) {
			arr[j][k] = 0; //�� �׿� 0 �Է�
			printf("%d", arr[j][k]); //���
		}
		printf("\n"); //���� ������ ����
	}
	
 }