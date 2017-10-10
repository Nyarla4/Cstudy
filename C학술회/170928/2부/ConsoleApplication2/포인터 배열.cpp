#include<iostream>
using namespace std;
/*
void main(void)
{
	int arr[3] = { 11,22,33 };
	int *ptr = arr;
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;//배열에 있는 11이라는 값이 증가하는게 아닌 주소값이 증가
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d\n", *ptr);

	*(++ptr) = 20;//ptr+=1의 상태, 즉 ptr이 가리키는것은 arr[1],ptr자체가 바뀌어있음.
	cout << *ptr << endl;
	*(ptr+1) = 20;//이곳에서는 ptr+1을 가리키고있음, 즉 arr[2]에다가 20을 넣는다.
	cout << *(++ptr) << endl;
*/
/*
void main(void)//확인문제
{
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}
*/