#include<iostream>
using namespace std;
namespace a//�ߺ��Ǵ� ������ ����� ����(�ߺ��Ǿ ������)
{
int b;
}
typedef struct point//typedef:�̸��� �ٲ� �� �ִ�.
{
	int x;
	int y;
};

class Point//�ƹ������� �������� ���ϰ��Ѵ�. ����������,������ ���� ���� �� �װ����θ� ���ٰ���
{
	private:
	int x;
	public:
	int y;
};
/*
	class ����
		private:�ڽ��� Ŭ���������� ��� ����
		public:main�̳� Ÿ Ŭ������ �������� ���� ����
		/protected:��ӿ��� ���/
*/
void main()
{
	point a{ 1,2 };//class�� �̷������� �ʱ�ȭ �� �� ����
	Point A;
	a::b;
}