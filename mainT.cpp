//sums consecutive integers
//version using template class

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;


// using template class
template<class T>
// sum function
// accum / p is passed by reference
inline void sum(int &accumulate, int n, T data)
{

    for (int i = 0; i < n; ++i)
        accumulate = accumulate + data[i];
}

int main()
{

    int accum = 0;

    // vector of type int
    vector<int> data;

    for (int i = 0; i < N; ++i)
    {
        // adds each int 0 - 39 as a element in data
        data.push_back(i);
    }

    sum(accum, N, data);

    // accum was passed by reference
    cout << "sum is " << accum << endl;

    return 0;
}