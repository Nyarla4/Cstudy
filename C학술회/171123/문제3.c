#include<stdio.h>
struct complex {
	int real;
	int imaginary;
};
struct complex complex_sum(struct complex x, struct complex y)
{
	struct complex A;
	A.real = x.real + y.real;
	A.imaginary = x.imaginary + y.imaginary;
	printf("(%d+%di)+(%d+%di)=%.2f+%.2fi\n",x.real, x.imaginary, y.real, y.imaginary, (double)A.real,(double)A.imaginary);
	return A;
}
void main()
{
	struct complex p,q;
	printf("ù��° ���Ҽ� �Է�(a+bi�� ��� a b�� �������� �Է�):");
	scanf("%d %d", &p.real, &p.imaginary);
	printf("�ι�° ���Ҽ� �Է�(a+bi�� ��� a b�� �������� �Է�):");
	scanf("%d %d", &q.real, &q.imaginary);
	//printf("(%d+%di)+(%d+%di)=%d+%di\n", p.real, p.imaginary, q.real, q.imaginary, complex_sum(p, q));
	complex_sum(p,q);
}