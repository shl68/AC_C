#include <stdio.h>

int main() {


	
	int a[4][3] = {46,79,78,35,57,28,43,68,76,56,78,98};
	int b[4][3] = { 78,35,99,85,82,34,58,69,29,34,59,35 };
	int c[4][3];

	printf("위의 두 행렬 합의 결과값입니다.\n");
	printf("-----------------");


	for (int i = 0;i < 4;i++)
	{
		printf("\n");
		for (int j = 0;j < 3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%.3d | ", c[i][j]);
		}
	}


	printf("\n");

	



	printf("-----------------\n");

	printf("위의 두 행렬 차의 결과값입니다.\n");
	printf("-----------------");



	for (int i = 0;i < 4;i++)
	{
		printf("\n");
		for (int j = 0;j < 3;j++)
		{
			c[i][j] = a[i][j] - b[i][j];
			printf("%d | ", c[i][j]);
		}
	}
	printf("\n");

	printf("-----------------\n");






		return 0;
}
