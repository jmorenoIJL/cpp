// compilador // https://www.onlinegdb.com/online_c++_compiler
#include "iostream"

using namespace std;

int main()
{
    int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};
    int limite = (sizeof(edades)/sizeof(edades[0]));
    // limite es 12 ;
    for (int i = 0; i < limite; i++)
    {
            cout<<edades[i]<<endl;
    }
}