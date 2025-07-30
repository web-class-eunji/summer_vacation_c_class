#include <stdio.h>
main(void)
{
	// scanf_s를 사용하여 값 3개를 받은 후 합계를 구하는 코드를 작성!
	// 변수는 4개를 선언할 것
	int x, y, z, total;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("\n");

	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %d\n", z);
	printf("\n");

	total = x + y + z;
	printf("%d + %d + %d = %d\n", x, y, z, total);

	float fnum;
	printf("실수 입력 : ");
	scanf_s("%f", &fnum);
	printf("입력된 값 : %.2f\n", fnum);

	float scanf_pi;
	printf("원주율 입력 : ");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값 : %.4f", scanf_pi);


	return 0;
}