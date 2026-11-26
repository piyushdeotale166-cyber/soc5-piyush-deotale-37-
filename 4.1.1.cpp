
#include <iostream>
using namespace std;

class calculater
{
public:
    int num;

    int add(int a, int b)
    {
        return a + b;
    }

    
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    calculater cal;

    cout << "Addition of a+b is: " << cal.add(3, 8) << endl;

    cout << "Addition of a+b+c is: " << cal.add(1, 2, 5) << endl;

    return 0;
}
