#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str1[] = "abcDEF";
	char str2[] = "abcdef";
	cout << strcmp(str1, str2) << endl;

	int newSize = sizeof(str1)/sizeof(char) + sizeof(str2)/sizeof(char);
	char str3[newSize];
	strcat(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;


	char text[] = "This is a simple string";
	char pattern[] = "simple";
	char *p = strstr(text, pattern);

	cout << p << endl;

	char pattern2[] = "sss";
	char *index = strstr(text, pattern2);
	if (index == NULL) {
		cout << "Not found\n";
	} else {
		cout << "fount at " << index << endl;
	}
	
	cout << "Upper case of '" << text << "' is ";
	for (int i = 0; i < sizeof(text)/sizeof(char); i++) {
		cout << static_cast<char>(toupper(text[i])); 
	}
	cout << endl;
	
	return 0;
}
