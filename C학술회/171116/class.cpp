#include<iostream>
using namespace std;
namespace a//중복되는 변수의 사용을 방지(중복되어도 괜찮게)
{
int b;
}
typedef struct point//typedef:이름을 바꿀 수 있다.
{
	int x;
	int y;
};

class Point//아무곳에서 접근하지 못하게한다. 접근지정자,생성자 등이 존재 및 그것으로만 접근가능
{
	private:
	int x;
	public:
	int y;
};
/*
	class 종류
		private:자신의 클래스에서만 사용 가능
		public:main이나 타 클래스등 모든곳에서 접속 가능
		/protected:상속에서 사용/
*/
void main()
{
	point a{ 1,2 };//class는 이런식으로 초기화 할 수 없음
	Point A;
	a::b;
}