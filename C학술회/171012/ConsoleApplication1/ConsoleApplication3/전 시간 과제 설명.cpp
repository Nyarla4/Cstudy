#include<iostream>
using namespace std;
int main(void)
{
	char str[] = "I LOVE YOU";
	char*ptr = str;
	int i = 10, k;//i:포인터용,k:출력용
	while (i >= 0)
	{
		while (ptr[i] != ' '&&ptr[i] != str[0])
		{
			i--;
		}
		if (ptr[i] != str[0])
			k = i + 1;
		else
			k = i;
		while (ptr[k] != ' '&&ptr[k] != NULL)
		{
			printf("%c", ptr[k++]);
		}
		if (ptr[k] == NULL)
		{
			printf(" ");
		}
		else
		{
			printf("%c", ptr[k++]);
		}
		i--;
	}
}