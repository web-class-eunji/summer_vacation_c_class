#include <stdio.h>
main(void)
{
	/*
	if(���ǽ�){
		������ ������ ��� ������ �ڵ带 �ۼ�;
	}

	if(���ǽ�)
		������ ������ ��� ������ �ڵ� �ۼ�;

	if(���ǽ�){
		������ ������ ��� ������ �ڵ带 �ۼ�;
	} else {
		������ ���� false��� �� ���� �����
	}
	*/

	int if_number = 10;
	if (if_number < 500) {
		printf("%d(��)�� 500���� �۽��ϴ�. \n", if_number);
	}

	//%d �� 3�� ����
	if (if_number == 3) {
		printf("%d �� 3�� ����. \n", if_number);
	}

	//�Է¹��� �Ϸ� �������� 10000�� �̻��� ��쿡�� 
	// �Ϸ翡 %d�� �ȴٴ� ����ؿ�! ���� �����Դϴ�! ���
	int walk_count;
	printf("����� �Ϸ翡 �� �� �ȳ���?");
	scanf_s("%d", &walk_count);

	if (walk_count >= 10000) {
		printf("�Ϸ翡 %d�� �ȴٴ� ����ؿ�! ���� �����Դϴ�!\n", walk_count);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�.\n");
	}
	else {
		printf("alpha�� B�� �ٸ��ϴ�.\n");
	}

	// ����� �����ϴ� ���ڴ�?
	// 10 �̻��̶�� 10 �̻��̱���~
	// 10 �̸��̶�� 10 �̸��̱���~

	int like_number;
	printf("����� �����ϴ� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &like_number);

	if (like_number >= 10) {
		printf("����� �����ϴ� ���ڴ� 10 �̻��̱���~~");
	}
	else {
		printf("����� �����ϴ� ���ڴ� 10 �̸��̱���!");
	}

	return 0;
}