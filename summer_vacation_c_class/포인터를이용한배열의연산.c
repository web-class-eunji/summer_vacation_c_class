#include <stdio.h>
main(void)
{
	//길이가 8인 배열을 선언한 후 12345678로 초기화!
	// 이배열의 마지막 요소의 주소를 가리키는 포인터 변수를 선언!
	// 홀수의 합을 저장할 변수를 생성
	// for문과 if문을 통해 모든 배열의 요소를 순회하며 홀수라면 홀수의 합을 저장하는 변수에 더해준다.
	// 출력 
	// 홀수의 합 : 16

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* ptr = &arr[7];
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		if (*ptr % 2 != 0) {
			//sum에다가 ptr이 가지고 있는 값을 더하기!!!!!
			//sum = sum + *ptr;
			sum += *ptr;
		}
		ptr--;
	}
	printf("홀수의 합 : %d \n", sum);
	return 0;
}