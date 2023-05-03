#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T,typename j> T myMax(T x, j y)
{
return (x > y) ? x : y;
}

int main()
{int a=3;
float b=7;
cout << myMax(a, b) << endl; // Call myMax for int
}
