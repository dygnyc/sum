// Write a template function that outputs the elements of the array
#include <iostream>
using namespace std;

template <class T>

void outputArray(const T data[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << data[i] << endl;
    }
    cout<< endl;
}

int main(){
    int a[] = {1,2,3,4};
    short b[] ={5,6,7,8};

    string c[] = {"tom","deck","steam"};
    double d[] = {1.1,2.2,3.3};

    outputArray(a,4);
    outputArray(b,4);
    outputArray(c,3);
    outputArray(d,3);

    return 0;
}