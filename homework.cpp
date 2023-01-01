#include <iostream>
#include <vector>

using namespace std;

const int n = 40;

template <class T>
inline auto sum(T d)
{
	int i;
	auto sum = 0;

	for (i = 0; i < n; ++i)
		sum += d[i];

	return sum;
}

int main()
{
	int i;

	vector <double> data;

	for (i = 0; i < n; ++i)
		data.push_back(i);

	cout << "Sum = " << sum(data) << "\n";

	return 0;
}