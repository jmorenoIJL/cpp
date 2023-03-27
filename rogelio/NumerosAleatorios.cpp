#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    time_t tiempo = time(NULL);
    srand(tiempo);
    for(int i=0; i<10; i++)
    {

        int num = rand();
        cout << num << endl;
    }
    return 0;
}
