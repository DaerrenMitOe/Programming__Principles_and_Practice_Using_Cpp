#include "../std_lib_facilities.h"


int square(int x){
    int j = 0;
    
    for (int i = 0; i < x; ++i)
        j += x;
    
    return j;
}

int main()
{
    cout << square(7) << '\n';

}