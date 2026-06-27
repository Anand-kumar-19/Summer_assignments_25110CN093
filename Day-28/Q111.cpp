#include<iostream>
#include<string>
#include<ctime>

struct Ticket{

    int ticketid;
    std::string passengername;
    std::string destination;
    int seats;
    float fare;
};

int main(){

    srand(time(0));

    int n;

    // Taking input for the number of bookings
    std::cout << "Enter the number of bookings : ";
    std::cin >> n;

    Ticket tickets[n];

    // Generating the starting ticket ID
    int ticketnumber = (rand() % 900) + 100; // Random number between 100 and 999

    // Taking input for ticket details
    std::cout << "\nEnter the details of the bookings :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nBooking " << i + 1 << '\n';

        // Automatically generating ticket ID
        tickets[i].ticketid = ticketnumber++;

        std::cin.ignore();

        std::cout << "Enter the passenger name : ";
        std::getline(std::cin, tickets[i].passengername);

        std::cout << "Enter the destination : ";
        std::getline(std::cin, tickets[i].destination);

        std::cout << "Enter the number of seats : ";
        std::cin >> tickets[i].seats;

        std::cout << "Enter the fare per seat : ";
        std::cin >> tickets[i].fare;
    }

    // Displaying ticket details
    std::cout << "\n===== TICKET DETAILS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nTicket ID : "
                  << tickets[i].ticketid << '\n';

        std::cout << "Passenger Name : "
                  << tickets[i].passengername << '\n';

        std::cout << "Destination : "
                  << tickets[i].destination << '\n';

        std::cout << "Number of Seats : "
                  << tickets[i].seats << '\n';

        std::cout << "Total Fare : "
                  << tickets[i].seats * tickets[i].fare << '\n';
    }

    return 0;
}