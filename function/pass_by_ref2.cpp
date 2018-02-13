#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int &ref = n;
    
    {
        int n2 = 5;
        ref = n2;
    }
    
    cout << ref << endl;
    return 0;
}
