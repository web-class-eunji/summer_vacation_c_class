#include <stdio.h>
main(void)
{
	// scanf_s�� ����Ͽ� �� 3���� ���� �� �հ踦 ���ϴ� �ڵ带 �ۼ�!
	// ������ 4���� ������ ��
	int x, y, z, total;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("\n");

	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %d\n", z);
	printf("\n");

	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);

	float fnum;
	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &fnum);
	printf("�Էµ� �� : %.2f\n", fnum);

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� �� : %.4f", scanf_pi);


	return 0;
}