#include <stdio.h>
main(void)
{
	/*
	if(조건식){
		조건을 만족할 경우 실행할 코드를 작성;
	}

	if(조건식)
		조건을 만족할 경우 실행할 코드 작성;

	if(조건식){
		조건을 만족할 경우 실행할 코드를 작성;
	} else {
		조건의 값이 false라면 이 값이 실행됨
	}
	*/

	int if_number = 10;
	if (if_number < 500) {
		printf("%d(이)가 500보다 작습니다. \n", if_number);
	}

	//%d 과 3은 같다
	if (if_number == 3) {
		printf("%d 과 3은 같다. \n", if_number);
	}

	//입력받은 하루 걸음수가 10000보 이상일 경우에만 
	// 하루에 %d보 걷다니 대단해요! 좋은 습관입니다! 출력
	int walk_count;
	printf("당신은 하루에 몇 보 걷나요?");
	scanf_s("%d", &walk_count);

	if (walk_count >= 10000) {
		printf("하루에 %d보 걷다니 대단해요! 좋은 습관입니다!\n", walk_count);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.\n");
	}
	else {
		printf("alpha는 B와 다릅니다.\n");
	}

	// 당신이 좋아하는 숫자는?
	// 10 이상이라면 10 이상이군요~
	// 10 미만이라면 10 미만이군요~

	int like_number;
	printf("당신이 좋아하는 숫자를 입력해주세요 : ");
	scanf_s("%d", &like_number);

	if (like_number >= 10) {
		printf("당신이 좋아하는 숫자는 10 이상이군요~~");
	}
	else {
		printf("당신이 좋아하는 숫자는 10 미만이군요!");
	}

	return 0;
}