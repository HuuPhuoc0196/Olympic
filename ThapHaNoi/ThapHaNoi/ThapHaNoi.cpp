#include <iostream>
using namespace std;
int temp = 0;
int k;
int A[] = { 0, 0, 0 };
void Chuyen(int a, int b){
	if (temp >= k)
		return;
	temp++;
	A[a] = A[a] - 1;
	A[b] = A[b] + 1;
}

void ThapHaNoi(int n, int a, int b, int c){
	
	if (n == 1){
		Chuyen(a, b);
	}
	else{
		ThapHaNoi(n - 1, a, c, b);
		Chuyen(a, b);
		ThapHaNoi(n - 1, c, b, a);
	}
}

int main(){

	int n;
	cin >> n >> k;

	A[0] = n;

	ThapHaNoi(n, 0, 1, 2);
	
	for (int i = 0; i < 3; i++)
	{
		cout << A[i] << " ";
	}

	return 0;
}