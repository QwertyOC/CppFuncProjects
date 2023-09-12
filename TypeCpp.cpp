
#include <iostream>
using namespace std;

int main()
{
    int a = INT32_MAX;
    int a2 = INT32_MIN;
    
    long b = LONG_MAX;
    long b2 = LONG_MIN;

    short c = SHRT_MAX;
    short c2 = SHRT_MIN;

    unsigned d = UINT16_MAX;
    unsigned d2 = 0;

    float i = FLT_MAX;
    float i2 = FLT_MIN;

    double e = DBL_MAX;
    double e2 = DBL_MIN;

    char r = CHAR_MAX;
    char r2 = CHAR_MIN;


    bool f = 0;
    bool f2 = 1;

    //cout << a << a2 << b << b2 << c << c2 << d << d2 << i << i2 << e << e2 << r << r2 << f << f2;
    cout << "|Tip\t|\t Koll\t|\tmin\t| \tmax|\n";
    cout << "|\n|int\t|"; sizeof(a) << "\t|\t|" << a << "\t        |\t  " << a2 << ;

   
}
