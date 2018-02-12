#include <iostream>

using namespace std;

int main() {
	const int MAX_ROW = 2;
	const int MAX_COL = 2;
	int arr[MAX_ROW][MAX_COL];
	for (int row= 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			cout << "Enter value " << row << "," << col < ": ";
			cin >> arr[row][col];
		}
	}

	int sum[MAX_ROW];
	for (int i = 0; i < MAX_ROW; i++) {
		sum[i] = 0;
		for (int j = 0; j <MAX_COL; j++) {
			sum[i] += arr[i][j];
		}
		cout << sum[i] << endl;
	}

	return 0;
}
