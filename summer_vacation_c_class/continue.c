#include <stdio.h>
main(void) {
	// continue�� ����
	// �ݺ����� ���� �ݺ��� �ߴ��ϰ� �ٷ� ���� �ݺ����� �Ѿ��.
	// continue �ڿ� ���� �ڵ�� ������� �ʴ´�!
	
	int continueNum;
	for (continueNum = 0; continueNum <= 10; continueNum++) {
		if (continueNum % 2 == 0) {
			continue; // continueNum�� �����ϴٰ� ¦���� �Ǿ��ٸ� �Ʒ� �ڵ带 �����ϰ� ���� �ݺ����� �Ѿ
		}
		printf("%d \n", continueNum);
	}

	int whileConNum = 0;
	while (whileConNum <= 10) {
		whileConNum++;
		if (whileConNum % 2 != 0) {
			continue;
		}
		printf("%d\n", whileConNum);
	}
	
	return 0;


}