#include<iostream>
#include<string>
using namespace std;
struct employee
{
	char name[50];
	char Num[20];
	int pay;
};
void main(void)
{
	struct  employee JEW;
	printf("이름: ");scanf("%s", JEW.name);
	printf("주민등록번호: ");scanf("%s", JEW.Num);
	printf("급료: ");scanf("%d", &(JEW.pay));
	printf("이름 : %s\n주민등록번호 : %s\n급료 : %s\n", JEW.name, JEW.Num, JEW.pay);
}