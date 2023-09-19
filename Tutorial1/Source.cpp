#include <iostream>
using namespace std;

int main()
{
	int a(1);
	int& ref_a = a;

 a = 4;
 cout << ref_a;

	return 0;
}