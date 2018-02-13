#include <iostream>
#include <math.h>

using namespace std;
const float PI = 3.14f;

void getSinCos(float deg, float &sinRef, float &cosRef){
	float rad = deg * PI / 180;
	sinRef = sin(rad);
	cosRef = cos(rad);
}

int main(){
	float deg, sin, cos;
	deg = 40;
	getSinCos(deg, sin, cos);
	cout << sin << endl << cos << endl;
	return 0;
}
