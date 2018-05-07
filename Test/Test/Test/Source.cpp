#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void Xuat(vector<int> v){
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i);
	}

	cout << endl;
}
int main(){

	map<int, int> m;
	for (int i = 3; i <= 5; i++){
		m[i] = 2 * i;
	}

	for (int i = 0; i < m.size(); i++)
	{
		cout << m[i];
	}
	cout << endl;

	map<int, int>::iterator itr = m.find(-1);

	if (itr == m.end()){
		cout << "Khong co nek" << endl;
	}

	for (int i = 0; i < m.size(); i++)
	{
		cout << m[i];
	}
	cout << endl;

	system("pause");
	return 0;
}


