#include <cstdlib>
#include <windows.h>
#include "clear_array_index.h"

using namespace std;

static int Array[size] ={1,2,3,4,5,6,7,8,9,-1};

int main() {
    
    _int64 ctr1 = 0, ctr2 = 0, freq = 0;
    //int acc = 0;//, iter=0;
    if (QueryPerformanceCounter((LARGE_INTEGER *)&ctr1) != 0) {
        ClearUsingIndex( Array, size);
        
        QueryPerformanceCounter((LARGE_INTEGER *)&ctr2);
        cout << "Start value: " << ctr1 << endl;
        cout << "ENd value: " << ctr2 << endl;
        
        QueryPerformanceCounter((LARGE_INTEGER *)&freq);
        cout << "QueryPerformanceCounter minimum resolution: 1/" << freq << " seconds" << endl;
        cout << "100 increment time: " << ((ctr2 - ctr1)*1.0 / freq) * 1000000 << " microsecs" << endl;
    }
    else {
        DWORD dwerror = GetLastError();
        cout << "error value= " << dwerror << endl;
    }
    system("PAUSE");
    return 0;
}
