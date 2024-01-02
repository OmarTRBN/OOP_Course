#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time(int h=0, int m=0, int s=0) : hour(h), minute(m), second(s) {}

    void showTime()
    {
        cout << setw(2) << setfill('0');
        cout << hour << ':' << setw(2) << setfill('0') << minute << ':' << setw(2) << setfill('0') << second << endl;
    }

    Time operator++()
    {
        ++second;
        if (second >= 60)
        {
            ++minute;
            second = 0;
            if (minute >= 60)
            {
                ++hour;
                minute = 0;
            }
        }
        return Time(hour, minute);
    }
};

int main()
{
    Time itsTime(3, 58, 56);
    for (int i = 0; i < 120; i++)
    {
        ++itsTime;
        itsTime.showTime();

        // Introduce a 1-second delay
        this_thread::sleep_for(chrono::milliseconds(50));
    }

    return 0;
}
