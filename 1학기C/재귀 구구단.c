#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			switch (i)
			{
			case(2):printf("%d×%d=%d\n", i, j, N2(j)); break;
			case(3):printf("%d×%d=%d\n", i, j, N3(j)); break;
			case(4):printf("%d×%d=%d\n", i, j, N4(j)); break;
			case(5):printf("%d×%d=%d\n", i, j, N5(j)); break;
			case(6):printf("%d×%d=%d\n", i, j, N6(j)); break;
			case(7):printf("%d×%d=%d\n", i, j, N7(j)); break;
			case(8):printf("%d×%d=%d\n", i, j, N8(j)); break;
			case(9):printf("%d×%d=%d\n", i, j, N9(j)); break;
			default:
				printf("\n"); break;
			}
				
		}
		printf("\n");
	}
	return 0;
}
int N2(int num)
{
	if (num == 1)
		return 2;
	else
		return N2(num - 1) + 2;
}//2단
int N3(int num)
{
	if (num == 1)
		return 3;
	else
		return N3(num - 1) + 3;
}//3단
int N4(int num)
{
	if (num == 1)
		return 4;
	else
		return N4(num - 1) + 4;
}//4단
int N5(int num)
{
	if (num == 1)
		return 5;
	else
		return N5(num - 1) + 5;
}//5단
int N6(int num)
{
	if (num == 1)
		return 6;
	else
		return N6(num - 1) + 6;
}//6단
int N7(int num)
{
	if (num == 1)
		return 7;
	else
		return N7(num - 1) + 7;
}//7단
int N8(int num)
{
	if (num == 1)
		return 8;
	else
		return N8(num - 1) + 8;
}//8단
int N9(int num)
{
	if (num == 1)
		return 9;
	else
		return N9(num - 1) + 9;
}//9단
