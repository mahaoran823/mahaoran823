# include<iostream>
using namespace std;
#include<Windows.h>

# include<math.h>
void main()
{
	int a, b, c;
	float s, d;
	
	cin >> a >> b >> c;
	d = 0.5*(a + b + c);
	s = sqrt(d*(d - a)*(d - b)*(d - c));
	cout << "�����ε����Ϊ" << s << endl;

	//return 0;
	system("pause");
}
