#include <stdio.h>
main(void)
{
	// ���� dog���� 4�� ��´�.
	// dog�� �ּҸ� �����ϴ� ������ ������ �����.
	// �ּҿ� �� �ּҿ� ��� ���� ����Ѵ�.

	int dog = 4;
	int* dog_address;
	dog_address = &dog;
	printf("%d : %p \n", *dog_address, dog_address);

	int score[5] = {10,20,30,40,50};
	printf("%d\n", score[3]);
	// &score[0] == score
	
	return 0;
}