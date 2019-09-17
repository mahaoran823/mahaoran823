#include<iostream>
#include<math.h>
#include <Windows.h>
using namespace std;

int main()
{

	int a, b, c;
	float f1, f2, z;
	cin >> a >> b >> c;
	z = b * b - 4 * a*c;

	if (z >= 0)
	{
		f1 = ((-b) + sqrt(z)) / 2 * a;
		f2 = ((-b) - sqrt(z)) / 2 * a;
		cout << " The result f1 = " << f1 << ", f2 = " << f2 << endl;
	}
	else
	{
		cout << "No result";
	}

	system("pause");

	return 0;


}



