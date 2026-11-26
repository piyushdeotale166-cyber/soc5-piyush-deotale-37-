#include <iostream>
using namespace std;

class person
{
private:
    int age;

public:
    void eat()
    {
        cout << "The person is eating." << endl;
    }
};

class doctor : public person
{
public:
    void eat()
    {
        cout << "The doctor is eating." << endl;
    }
};

int main()
{
    person per;
    doctor doc;

    per.eat();
    doc.eat();

    return 0;
}
