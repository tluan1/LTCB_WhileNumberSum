#include <iostream>
using namespace std;
int main() {
	int so, sum = 0;
	cout << "nhap cac so (nhap 0 thi dung):";
	while (true) {
		cin >> so;
		if (so == 0) break;
		sum += so;
	}
	cout << "tong 2 so la : " << sum << endl;
	return 0;
}