#include <stdio.h>
main(void)
{
	/*
	if(���ǽ�1){
		if(���ǽ�2){
			���ǽ�1�� 2�� ��� ������ ��쿡 �ڵ� ����;
		}
		1�������� ���� �ڵ�
	}
	*/

	int student_num = 250805, student_num_check;
	int password = 112233, password_check;

	printf("�й��� �Է����ּ��� : ");
	scanf_s("%d", &student_num_check);

	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf_s("%d", &password_check);

	if (student_num == student_num_check) {
		if (password == password_check) {
			printf("%d�� �α��� �Ǿ����ϴ�!", student_num_check);
			//���̵�� ��� ��� ��ġ�� ���
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.");
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�.");
	}
	return 0;
}