#include <stdio.h>
main(void)
{
	// & (and) : �����ϴ� �� ��Ʈ�� ���� ��� 1�̶�� 1�� ��ȯ �ƴϸ� 0
	// | (or) : �����ϴ� ��Ʈ�� �� �� 1�� �ϳ��� ������ 1�� ��ȯ
	// ^ (xor) : �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	// ~(not) : ��Ʈ�� ���� 1�̸� 0����, 0�̶�� 1�� �������Ѽ� ��Ÿ��

	int bit_five = 5; // 00000101
	int bit_three = 3; // 00000011
	printf("%d & %d = %d\n", bit_five, bit_three, bit_five & bit_three);

	int bit_seven = 7; // 00000111
	printf("%d & %d = %d\n", bit_five, bit_seven, bit_five & bit_seven);
	printf("%d | %d = %d\n", bit_five, bit_three, bit_five | bit_three);
	printf("%d ^ %d = %d\n", bit_five, bit_three, bit_five ^ bit_three);


	return 0;
}