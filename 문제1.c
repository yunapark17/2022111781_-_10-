//����1
#include <stdio.h>
void sum(int A[5], int B[5]);//�� void �Լ�
void mul(int A[5], int B[5]);//�� void �Լ�

void sum(int A[5], int B[5]) {//�� void �Լ�
	int i;
	printf("A + B = { ");
	for (i = 0; i < 5; i++) {//for���� �̿��� ������ �迭�� ���� ����
		printf("%d ", A[i] + B[i]);//�� ���
	}
	printf("}\n");
}

void mul(int A[5], int B[5]) {//�� void �Լ�
	int i;
	printf("A * B = { ");
	for (i = 0; i < 5; i++) {//for���� �̿��� ������ �迭�� ���� ����
		printf("%d ", A[i] * B[i]);//�� ���
	}
	printf("}\n");
}

int main(void)//main�Լ�
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[5] = { 5, 4, 3, 2, 1 };

	sum(A, B);
	mul(A, B);

	return 0;
}