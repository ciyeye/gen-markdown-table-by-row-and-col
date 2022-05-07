#include <iostream>
using namespace std;

int main() {
	int row = 0, col = 0;
	cout << "请输出行和列：" << endl;
	cin >> row >> col;
	for (int i = 0; i <= row; i++) {
		if (i == 1) {
			cout << "|";
			for (int j = 0; j <= col - 1; j++) {
				cout << " :-: |";
			}
			cout << endl;
		} else {
			cout << "|";
			for (int j = 0; j <= col - 1; j++) {
				cout << "  |";
			}
			cout << endl;
		}
	}
	cin >> row;
	return 0;
}