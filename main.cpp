#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(double time)
{
    const double g = 9.8;
    return 0.5 * g * time * time;
}

int main()
{
    cout << fixed << setprecision(2);

    cout << "Time (seconds)\tDistance (meters)" << endl;

    for (int time = 1; time <= 10; time++)
    {
        cout << time << "\t\t"
             << fallingDistance(time) << endl;
    }

    return 0;
}
