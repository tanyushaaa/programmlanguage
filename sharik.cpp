#include <iostream>
#include <cmath>
const double g = 9.8;
using std::cout, std::endl;

void print_h_v (double h0, double* v, double t1, double t, double constanta)
{
	double h;

	while (t >= t1)
	{
		h = g*t*t/2;
		*v = sqrt(2*(constanta - g*h));
		cout << "h = " << h << endl << "v = " << *v << endl << endl;

		t-=1;//0.5;
	}
}

int main()
{
	double h0 = 90, v = 0, t1 = 0;
	double constanta = g*h0 + v*v/2;
	double t = sqrt(2*h0/g);

	print_h_v (h0, &v, t1, t, constanta);

	h0 *= 0.7;
	cout << endl << "the ball fell at the time " << t << " and, having lost 30%% of its kinetic energy, jumped vertically up" << endl;
	print_h_v (h0, &v, -sqrt(2*h0/g), t1, constanta);
	cout << endl << "the ball reached its maximum height " << h0 << "at the time " << sqrt(2*h0/g) << "and began to fall down again" << endl;
	print_h_v (h0, &v, t1, sqrt(2*h0/g), constanta);

	return 0;
}