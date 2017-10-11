#include<stdio.h>
#include<windows.h>
#define X 30
#define Y 200
#define VX 50
#define VY -50
int main()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = X, y = Y;
	int vx = VX, vy = VY;
	MoveToEx(hdc, X, Y, NULL);
	LineTo(hdc, 800, Y);
	for (int i = 0;i < 20;i++)
	{
		vy = vy + 10;
		x += vx;
		y += vy;
		Ellipse(hdc, x, y, x + 10, y + 10);
		Rectangle(hdc, x * 2, y * 2, x * 2 + 10, y * 2 + 10);
		Sleep(100);
	}
	return 0;
}