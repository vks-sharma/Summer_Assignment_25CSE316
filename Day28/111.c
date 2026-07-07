#include <stdio.h>

int main() {
    int totalSeats = 50;
    int booked = 0;
    int choice, seats;

    do {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if (seats <= 0) {
                    printf("Invalid number of seats.\n");
                } else if (booked + seats <= totalSeats) {
                    booked += seats;
                    printf("Booking Successful.\n");
                    printf("Booked Seats: %d\n", booked);
                    printf("Available Seats: %d\n", totalSeats - booked);
                } else {
                    printf("Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats - booked);
                break;

            case 3:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 3);

    return 0;
}