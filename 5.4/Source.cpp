#include <iostream>
#include <cmath>

using namespace std;

double S0(const int N)
{
	double s = 0;
for (int i=1; i <= N; i++)
s += cos(sin(i)) / (1 + (sin(i) * (sin(i))));
return s;
}
double S1(const int i, const int N)
{
	if (i > N)
		return 0;
	else
return cos(sin(i)) / (1 + (sin(i) * (sin(i))));
}
double S2(const int i, const int N)
{
	if (i < 1)
		return 0;
	else
		return cos(sin(i)) / (1 + (sin(i) * (sin(i))));
}
double S3(const int N, const int i, double t)
{
	t = t + cos(sin(i)) / (1 + (sin(i) * (sin(i))));
	if (i >= N)
		return t;
	else
		return S3( N, i + 1, t);
}
double S4(const int N, const int i, double t)
{
	t = t + cos(sin(i)) / (1 + (sin(i) * (sin(i))));
	if (i <= 1)
		return t;
	else
		return S4(N, i - 1, t);
}
int main()
{
	int N;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(N) << endl;
	cout << "(rec up ++) S1 = " << S1(N, N) << endl;
	cout << "(rec up --) S2 = " << S2(N, 1) << endl;
	cout << "(rec down ++) S3 = " << S3(N, N, 0) << endl;
	cout << "(rec down --) S4 = " << S4(N, 1, 0) << endl;
	system("pause");
	return 0;
}


