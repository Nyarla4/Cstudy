#include<iostream>
#define ID_len 20
#define M_spd 200
#define Fuel 2
#define Acc 10
#define Brk 10

using namespace std;

class car
{
private:
char gamer_ID[ID_len];
int fuelG;
int carSpd;
public://class내부의 함수를 이용하여 class내부에 접속가능
void member(char*id,int fuel);
void show_car_stat();
void Accel();
void Break();
};
void car::member(char*id,int fuel)
{
strcpy(gamer_ID,id);
fuelG=fuel;
carSpd=0;
}
void car::show_car_stat()
{
	cout<<"ID"<<gamer_ID<<endl;
	cout<<"연료"<<fuelG<<endl;
	cout<<"속도"<<carSpd<<endl;
}
inline void car::Accel()//inline:속도가 더 빨라진다. 무언가 단점이 존재
{
	if(fuelG==0)
	return;
	else
	fuelG-=2;
	if((carSpd+10)>=200)
	{
		carSpd=200;
		return;
	}
	carSpd+=10;
}
void car::Break()
{
	if (carSpd < 10)
	{
		carSpd = 0;
		return;
	}
	carSpd -= 10;
}
int main()
{
	car run99;
	run99.member("run99",100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.show_car_stat();
	run99.Break();
	run99.show_car_stat();
	return 0;
}