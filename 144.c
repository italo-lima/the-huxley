#include <stdio.h>

int main()
{
	int x,y;
	int l1,h1;
	int l2,h2;
	scanf("%d %d %d %d %d %d",&x,&y,&l1,&h1,&l2,&h2);
	if ((h1+l2)<=y && (h2<=x && l1<=x))
	{
		printf("S\n");
		return 0;
	}
	if ((l1+l2)<=y && (h2<=x && h1<=x))
	{
		printf("S\n");
		return 0;
	}
	if ((h1+h2)<=y && (l2<=x && l1<=x))
	{
		printf("S\n");
		return 0;
	}
	if ((l1+h2)<=y && (l2<=x && h1<=x))
	{
		printf("S\n");
		return 0;
	}

	if ((h1+l2)<=x && (h2<=y && l1<=y))
	{
		printf("S\n");
		return 0;
	}
	if ((l1+l2)<=x && (h2<=y && h1<=y))
	{
		printf("S\n");
		return 0;
	}
	if ((h1+h2)<=x && (l2<=y && l1<=y))
	{
		printf("S\n");
		return 0;
	}
	if ((l1+h2)<=x && (l2<=y && h1<=y))
	{
		printf("S\n");
		return 0;
	}

	printf("N\n");
	return 0;
}