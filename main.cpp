#include <cstdlib>
#include <iostream>


#include "Vector/vector.h"

using namespace std;

int main(void)
{
	Vector<int> v(8);

	v.v[7] = 3;

	cout << "\n" << v.v[7] << "\n";

	return 0;
}
