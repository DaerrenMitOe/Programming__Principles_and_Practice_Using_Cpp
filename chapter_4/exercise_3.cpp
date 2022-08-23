#include "../std_lib_facilities.h"

int main()
{
    double total;

    vector<double> distances;

    for (double distance; cin >> distance;)
        distances.push_back(distance);

    for (double x : distances)
        total += x;

    sort(distances);

    cout << "Total distance is: " << total
         << "\nThe smallest distance is: " << distances[0]
         << "\nThe greatest distance is: " << distances[distances.size() - 1]
         << "\nThe mean distance is: " << total / distances.size()
         << '\n';

    keep_window_open();

    return 0;
}