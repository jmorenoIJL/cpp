#include <iostream>
using namespace std;


int main()
{
    int a, b;
    bool numprimo;
    for (a = 0; a <= 100; a++)
    {
        numprimo = true;
        for (b = 2; b <= a / 2; ++b)
        {
            if (a % b == 0) 
            {
                numprimo = false;
            }
        }
        if (numprimo == true)
            cout << a << " => es primo" << endl;
        else {
            cout << a << " => no es primo" << endl;
        }
    }
    return 0;
}


