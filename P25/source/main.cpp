#include <stdlib.h>
#include<stdio.h>

int addbypne(int &xref);
void main()
{
	int x = 100;
	int y = addbypne(x);

	printf("x=%d\n", x);
	system("pause");
}
int addbypne(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}