#include <iostream>
using namespace std;

enum gear
{
    WEAPON,
    ARMOR,
    POTION
};

ostream& operator<< (ostream& out, gear& g){
    switch (g)
    {
    case WEAPON/* constant-expression */:out<<"weapon";break;
        /* code */
    case ARMOR:out<<"armor";break;
    case POTION:out<<"potion";break;
    
    default:
        break;
    }
    return out;
}



int main()
{

    gear player = WEAPON;

    cout << player << endl;

    player = ARMOR;

    cout << player << endl;

    return 0;
}
