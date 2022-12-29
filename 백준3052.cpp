#include <iostream>
using namespace std;

int main() {
	int num[10] = { 0 };
	int a;
	int count=10;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		num[i] = a % 42;

	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				count--;
				break;
					
			}
					
		}
	}
	

	cout << count << endl;
}
