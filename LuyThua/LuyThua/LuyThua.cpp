#include <iostream>
using namespace std;

unsigned long int LuyThua(int x, int n){
	if (n == 0)
		return 1;
	return x * LuyThua(x, n - 1);
}

int main(){

	int x, n;
	cin >> x >> n;

	unsigned long int kq = LuyThua(x, n);
	
	cout << kq % 10000 << endl;
	return 0;
}