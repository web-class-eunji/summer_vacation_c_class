#include <stdio.h>
main(void)
{
	// ���ǽ� ? ������ �̰� ��µ˴ϴ�.(true) : Ʋ���� �̰� ��µ˴ϴ�.(false)
	//int ten = 10, twenty = 20;
	//int max;

	//max = ten > twenty ? ten : twenty;
	//printf("�� ū ���� : %d", max);


	// ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦����� 0�� ���, Ȧ����� 1�� ���
	// ���� : ��� �޽��� [�Է��� ���ڴ� *�̸�, ��� : 0 or 1]
	int like_num, result;
	printf("����� �����ϴ� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &like_num);

	//like_num�� 2�� ���� ������ ���� 0�� ���ٸ� ¦���̴�.
	result = (like_num % 2 == 0) ? 0 : 1;
	printf("����� %d�� �����Ͻô±���?! ��� : %d\n", like_num, result);




	//����ڰ� 20�� �̻��̶�� 1280�� ���϶�� 800���� �޴� ���α׷� �����
	int user_age,check;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &user_age); // ����ڷκ��� ���� �Է¹�������

	check = user_age >= 20 ? 1280 : 800;
	printf("%d���� ����ö ����� : %d  �Դϴ�.", user_age, check);

	return 0;
}