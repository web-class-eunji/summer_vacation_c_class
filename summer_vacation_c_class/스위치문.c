#include <stdio.h>
main(void)
{
	int day;
	printf("������ �����ϼ���(1~7�� ��1):");
	scanf_s("%d", &day);

	switch (day) {
	case 1: printf("�������Դϴ�. \n");
		break;
	case 2: printf("ȭ�����Դϴ�. \n");
		break;
	case 3: printf("�������Դϴ�. \n");
		break;
	case 4: printf("������Դϴ�. \n");
		break;
	case 5: printf("�ݿ����Դϴ�. \n");
		break;
	case 6: printf("������Դϴ�. \n");
		break;
	case 7: printf("�Ͽ����Դϴ�. \n");
		break;

	default: printf("��ȿ���� ���� �Է��Դϴ�.");
	}
	return 0;
}