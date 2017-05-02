//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <string>

using namespace std;

struct Weather {
    string name;
    double day_temperature[];
    double night_temperature[];
    bool was_precipitation[];
};

int main() {
    int daysAmount;
    cin >> daysAmount;
    Weather weather;
    cin >> weather.name;
    weather.day_temperature = new double[daysAmount];
    weather.night_temperature = new double[daysAmount];
    weather.was_precipitation = new bool[daysAmount];

    for (int i = 0; i < daysAmount; i++) {
        cin >> weather.day_temperature[i]
            >> weather.night_temperature[i]
            >> weather.was_precipitation[i];
    }

    double average = 0;

    for (int i = 0; i < daysAmount; i++) {
        average += weather.day_temperature[i];
        average += weather.night_temperature[i];
    }
    average /= daysAmount * 2.;

    for (int i = 0; i < daysAmount; i++) {
        double dayAverage = (weather.day_temperature[i] + weather.night_temperature[i]) / 2;
        if (dayAverage > average) {
            cout << i + 1 << ' ';
        }
    }
    return 0;
}