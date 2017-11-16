#include<iostream>
using namespace std;

class printer
{
private:
char arr[500];
public:
void SetString(char*a);
void ShowString();
};

void printer::SetString(char*a)
{
	strcpy(arr,a);
}
void printer::ShowString()
{
	cout<<arr;
}
void main()
{
	printer pnt;
	pnt.SetString("HelloWorld\n");
	pnt.ShowString();
}