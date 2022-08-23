#include "../std_lib_facilities.h"

int main()
{
    double sum = 0.0;
    vector<double> temps;

    for (double temp; cin >> temp;)
        temps.push_back(temp);

    for (double x : temps)
        sum += x;

    cout << "Average temperature: " << sum / temps.size() << '\n';

    sort(temps);

    if (temps.size() % 2)
    {
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }
    else
    {
        cout << "Median temperature: " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2 << '\n';
    }

    keep_window_open();

    return 0;
}