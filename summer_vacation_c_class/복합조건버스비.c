#include <stdio.h>
main(void)
{
	/*
		사용자의 나이를 입력받는다.
		0 ~ 7세 유아의 버스비는 800원
		8 ~ 19 학생 버스비는 1200원
		20 ~ 34세 청년은 1600원
		35 ~ 59세 중년은 2000원
		60 ~ 150세 노년은 무료
		그 외의 값을 입력했다면 무언가 잘못되었다 출력
		&&연산자 사용
	*/
	int userAge;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &userAge);
	if(userAge >= 0 && userAge <= 7) {
		printf("0~7세 유아 버스비는 800원 입니다.");
	}
	else if (userAge >= 8 && userAge <= 19) {
		printf("8 ~ 19 학생 버스비는 1200원 입니다.");
	}
	else if (userAge >= 20 && userAge <= 34) {
		printf("20 ~ 34 학생 버스비는 1200원 입니다.");
	}
	else if (userAge >= 35 && userAge <= 59) {
		printf("35 ~ 59 학생 버스비는 1200원 입니다.");
	}
	else if (userAge >= 60 && userAge <= 150) {
		printf("60 ~ 150 학생 버스비는 1200원 입니다.");
	}
	else {
		printf("무언가... 잘못되었다.... 사람의 나이가 어떻게 %d살..?", userAge);
	}

	return 0;
}