#include<stdio.h>
/*
	*포인터:주소값이 들어가는 변수
		주소값을 이용하여 내용변경
		대체적으로 4byte
		ex)int* pt;
*/
//포인트:메모리로 접근해서 실제 객체를 컨트롤 할 수 있는 기능
int main(void)
{
	int N = 10;
	int* p = &N;//&:주소값
	//p에 들어있는것은 N, N에 들어있는것이 10

	//포인트 변수가 가리키는 변수와 포인트 변수의 자료형은 같아야한다.
	printf("N:?");
	scanf("%d", &N);

	printf("N:%d\n", N);
	printf("*p:%d\n", *p);
	
	printf("&N:%d\n", &N);
	printf("p(=p가 가리키는 주소값):%d\n", p);
	//*:가리키고 있는것
	return 0;
}