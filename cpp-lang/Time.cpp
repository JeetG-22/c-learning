#include <iostream>
using namespace std;

class Time
{
public:
    Time();
    void printStandard();

private:
    int hour;
    int minute;
    int second;
};

Time::Time()
{
    hour = minute = second = 0;
}

void Time::printStandard()
{
    cout << hour << ":" << minute << ":" << second;
}

int main()
{
    Time t;
    t.printStandard();
}