#include <iostream>
using namespace std;

int a[] = { 1, 2, 3 };
int n = 3;
int xA = 0, yA = 0;
int USCLN(int a, int b)
{
	if (b == 0)
		return a;
	return (b, a%b);
}

int GiaiThua(int n)
{
	if (n == 0)
		return 1;
	return n * GiaiThua(n - 1);
}

void display(){
	for (int i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
}

void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}


int DuongDi(int xB, int yB){
	if (xB == xA && yB == yA){
		return 0;
	}
	else if (xA == xB || yA == yB)
	{
		cout << "KQ2: " << xB << " " << yB << endl;
		return 1;
	}
	else
	{
		cout << "KQ3: " << xB << " " << yB << endl;
		return DuongDi(xB, yB - 1) + DuongDi(xB - 1, yB);
	}
}
int k;

void HoanVi(int i)
{
	if (i == 0){
		display();
	}
	else
	{
		for (int j = i; j >= 0; j--)
		{
			Swap(a[i], a[j]);
			HoanVi(i - 1);
			Swap(a[i], a[j]);
		}
	}
}
int main(){

	HoanVi(n - 1);
	return 0;
}