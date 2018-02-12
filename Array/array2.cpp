#include <iostream>

using namespace std;

int main(){
	
	const int MAX_STUDENT = 5;
	double scores[MAX_STUDENT];
	
	for (int i = 0; i < MAX_STUDENT; i++){
		cin >> scores[i];
	}
	cout << std::endl;
	double max = -1;
	for (int i = 0; i < MAX_STUDENT; i++){
		if (scores[i] > max){
			max = scores[i];
		}
	}
	cout << "max = "  << max;
	return 0;
}
