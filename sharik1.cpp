#include <iostream>
#include <cmath>
const double g = 9.8;
using std::cout, std::endl;

class ball {
	double h, v;
	double constanta = g * h;

	public:
		void up_height(double h0){
	//		v = 0;
			constanta = g * h0;// + v*v/2;
		}

		void down_height(double* h0, double* t){
			*h0 *= 0.7;
			*t = 0;
			constanta = g * *h0;
		}

		void show (double t){
			h = g*t*t/2;
			v = sqrt(2*(constanta - g*h));
			cout << "h = " << h << endl << "v = " << v << endl << endl;
		} 
};

int main()
{
	double h0 = 90;
	double t = sqrt(2*h0/g);
	class ball shar; 
	shar.up_height(h0);

	while(t >= 0){
		shar.show(t);
		t -= 1;
	}

	shar.down_height(&h0, &t);
	while(t <= sqrt(2*h0/g)){
		shar.show(t);
		t += 1;
	} 
	return 0;
}