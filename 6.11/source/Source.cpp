#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(void)
{
	int i, j, tmp;
	int a[SIZE] = { 65,5,41,22,99 ,44,26,35,21,8};
	int flag;             //判斷是否重複

	for (i = 1; i < SIZE; i++)
	{
		 flag=0;          //-------------------------------------------多的判斷
		for ( j = 0; j < SIZE-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

				flag = 1;
			}

		}
		if (flag == 0)//-------------------------------------------多的判斷
		{
			break;
		}					  //-------------------------------------------多的判斷


		printf("Loop %d：", i);
		for ( j= 0; j < SIZE; j++)
		{
			printf("%4d", a[j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;

}
