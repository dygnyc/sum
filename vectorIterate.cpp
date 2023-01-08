#include <iostream>
#include <vector>

using namespace std;

template <class T>

void outputVector(vector<T> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> a{1, 2, 3};
    vector<double> b{1.1, 2.2, 3.3, 4.4};
    vector<string> c{"tom", "deck", "steam"};

    outputVector(a);
    outputVector(b);
    outputVector(c);

    a.push_back(4);
    outputVector(a);

    b.push_back(5.5);
    outputVector(b);

    c.pop_back();
    outputVector(c);

    return 0;
}
