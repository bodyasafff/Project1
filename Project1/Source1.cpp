#include<iostream>
using namespace std;
float big(float, float);
void main()
{
	float y;
	cout << "vvedit vidstan kilomertah ---->";
	cin >> y;
	float x;
	cout << "vvedit chas v xvulunah ---->";
	cin >> x;
	big(y, x);
	system("pause");
}
float big(float x, float y)
{
	float c;
	c = y / x;
	cout << "shvudkist v kilometrh za hvuluny = " << c << endl;
	return c;
}