//����2
#include <stdio.h>
#define ROWZIZE 2
#define COLZIZE 3
int main() {
	int i, j;
	int td[ROWZIZE][COLZIZE];

	for (i = 0; i < ROWZIZE; i++) {//���� for���� �̿��� �迭�� ������ �Է� ����
		for (j = 0; j < COLZIZE; j++) {
			printf("td[%d][%d]: ", i, j);//�迭 ���� ��ġ
			scanf_s("%d", &td[i][j]);//�迭 ���� �Է�
			printf("\n");
		}
	}

	for (i = 0; i < ROWZIZE; i++) {//���� for���� �̿��� �Է¹��� �迭�� ������ ���
		for (j = 0; j < COLZIZE; j++) {
			printf("td[%d][%d]: %d\n", i, j, td[i][j]);
		}
	}

}