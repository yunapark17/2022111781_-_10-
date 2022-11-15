//����3
#include <stdio.h>
#define m 3 //���A�� ��
#define n 3 //���A�� ��, ���B�� ��
#define p 3 //���B�� ��

int main(void) {
	int i, j, k;
	int A[m][n]; //���A
	int B[n][p]; //���B
	int C[m][p]; //���C, C=A*B

	for (i = 0; i < m; i++) {//���� for���� �̿��� ���A�� �Է� ����
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i, j);//���A�� ���� ��ġ�� ����
			scanf_s("%d", &A[i][j]);//���A�� ������ �Է� ����
		}
	}
	printf("\n");

	for (i = 0; i < n; i++) {//���� for���� �̿��� ���B�� �Է� ����
		for (j = 0; j < p; j++) {
			printf("B[%d][%d]: ", i, j);//���B�� ���� ��ġ�� ����
			scanf_s("%d", &B[i][j]);//���B�� ������ �Է� ����
		}
	}
	for (i = 0; i < n; i++)//���� for���� �̿��� ���C(A�� B�� ��)�� ���
		for (j = 0; j < p; j++) {
			C[i][j] = 0;//���C �ʱ�ȭ
			for (k = 0; k < m; k++)//for���� �̿��� ����� ũ�� ���(��� A,B�� ������ ���ϰ� ��� ����)
				C[i][j] += A[i][k] * B[k][j];
		}
	printf("\n");

	for (i = 0; i < 3; i++) {//���� for���� �̿��� ���C�� ���
		for (j = 0; j < p; j++) {
			printf("C[%d][%d]=%d", i, j, C[i][j]);
			printf("\n");
		}
	}
	return 0;
}