#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, a, c, F, xp, xk, dx;

	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (c < 0 && a != 0)
			F = -(a * (x * x));
		else
			if (c > 0 && a == 0)
				F = (a - x) / (c * x);
			else
				F = (x / c);

		cout << "|" << setw(7) << setprecision(2) << x << "   |" << endl;
		x += dx;
	} 
	cout << "---------------------------" << endl;

	return 0;
}