#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char foo[] = "Almost every programmer should know memset!";
	cout << foo << endl;
	memset(foo, '-', 10);
	cout << foo;
	return 0;
}
