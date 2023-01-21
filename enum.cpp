#include <iostream>
using namespace std;

/* typedef */ enum days {SUN,MON,TUE,WED,THU,FRI,SAT};

inline days operator++(days d){
return static_cast<days>(static_cast<int>(d) +1 %7);
}

ostream& operator<<(ostream& out, const days& d){
switch(d) {
case /* constant-expression */SUN:out<<"SUN";break;
    /* code */
    case MON: out<<"MON";break;
    case TUE: out<<"TUE";break;
    case WED: out<<"WED";break;
    case THU: out<<"THU";break;
    case FRI: out<<"FRI";break;
    case SAT: out<<"SAT";break;

default:
    break;
}
return out;

}

int main()
{
    days d = MON,e;
    cout<<e<<endl;
    cout<<(static_cast<int>(e))<<endl;
    e=++d;
    cout<<d<<"\t"<<e<<endl;

    days today = FRI;
    cout<<"today is "<< today<< endl;
    today = ++today;
    cout<<"tomorrow is "<<today<< endl;
}