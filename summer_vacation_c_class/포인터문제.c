#include <stdio.h>
main(void)
{
	// 변수 dog에다 4를 담는다.
	// dog의 주소를 저장하는 포인터 변수를 만든다.
	// 주소와 그 주소에 담긴 값을 출력한다.

	int dog = 4;
	int* dog_address;
	dog_address = &dog;
	printf("%d : %p \n", *dog_address, dog_address);

	int score[5] = {10,20,30,40,50};
	printf("%d\n", score[3]);
	// &score[0] == score
	
	return 0;
}