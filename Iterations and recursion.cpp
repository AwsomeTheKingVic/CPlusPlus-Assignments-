 #include <iostream>
using namespace std;

int fact(int n) {

	if (n == 1 || n == 0) {

		return 1;

	}
	return(n * fact(n - 1));

}

double Euler(double e, double  n , double error) {

	double e_prev = e;

	e = e + 1.0 / fact(n);

	error = abs(e - e_prev);

	n++;

	if (error > .000000001) {

		Euler(e, n, error);

	}
	else {

		return e;

	}

}


int main()
{

	double e = 0;
	double error = 1;
	int n = 0;

	while (error > 0.000000001) {

		double e_prev = e;

		e = e + 1.0 / fact(n);

		error = abs(e - e_prev);

		n++;
	}

	cout << "E Iterations = " << e << endl;

	cout << "E recursion = " << Euler(e, n, error) << endl;
}
