#include <stdio.h>
main(void)
{
	// 조건식 ? 맞으면 이게 출력됩니다.(true) : 틀리면 이게 출력됩니다.(false)
	//int ten = 10, twenty = 20;
	//int max;

	//max = ten > twenty ? ten : twenty;
	//printf("더 큰 값은 : %d", max);


	// 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을 출력, 홀수라면 1을 출력
	// 조건 : 출력 메시지 [입력한 숫자는 *이며, 결과 : 0 or 1]
	int like_num, result;
	printf("당신이 좋아하는 숫자를 입력해주세요 : ");
	scanf_s("%d", &like_num);

	//like_num을 2로 나눈 나머지 값이 0과 같다면 짝수이다.
	result = (like_num % 2 == 0) ? 0 : 1;
	printf("당신은 %d를 좋아하시는군요?! 결과 : %d\n", like_num, result);




	//사용자가 20살 이상이라면 1280원 이하라면 800원을 받는 프로그램 만들기
	int user_age,check;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &user_age); // 사용자로부터 정수 입력받을거임

	check = user_age >= 20 ? 1280 : 800;
	printf("%d세의 지하철 요금은 : %d  입니다.", user_age, check);

	return 0;
}