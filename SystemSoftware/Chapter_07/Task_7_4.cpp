//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

struct Flight {
public:
    struct Time {
        int hour;
        int minute;

        Time(int hour, int minute) : hour(hour), minute(minute) {}

        friend istream &operator>>(istream &is, Time &time) {
            is >> time.hour >> time.minute;
            return is;
        }
    };
    string number;
    string destination;
    Time departureTime;
    Time arrivalTime;
    double ticketPrice;
    bool hasSeats;

    friend istream &operator>>(istream &is, Flight &flight) {
        string temp;
        is >> flight.number
           >> flight.destination
           >> flight.departureTime
           >> flight.arrivalTime
           >> flight.ticketPrice
           >> temp;
        flight.hasSeats = temp == "yes";
        return is;
    }
};

int main() {

    int n = 50;
    Flight flights[1];
    for (int i = 0; i < n; i++) {
        cin >> flights[i];
    }
    string destination;
    cin >> destination;


    for (int i = 0; i < n; i++) {
        if (destination == flights[i].destination &&
            (flights[i].arrivalTime.hour >= 10 && flights[i].arrivalTime.hour <= 12) &&
            flights[i].hasSeats) {
            cout << flights[i].number << endl;
        }
    }
}