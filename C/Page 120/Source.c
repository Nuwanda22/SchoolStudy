#include <stdio.h>

main()
{
	int score[5];
	int i, sum = 0;
	for (i = 0; i < 5; i++){
		printf("%d���� �л��� ���α׷��� ������ �Է��ϼ���. : ", i + 1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
		sum += score[i];
	printf("�հ� : %d\n", sum);
	printf("��� : %.2f\n", sum / 5.0);
}