//#include <iostream>
//using namespace std;
//
//int a[] = { 10, 17, 21, 6, 25, 12 };
//int n = 6;
//
//int USCLN(int a, int b){
//	while (b > 0)
//	{
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//
//int main(){
//
//	for (int i = 0; i < n - 1; i++){
//		for (int j = i + 1; j < n; j++){
//			if (USCLN(a[i], a[j]) == 1){
//				cout << "( " << a[i] << ", " << a[j] << " )" << endl;
//			}
//		}
//	}
//	return 0;
//}