#include<stdio.h>
int main()
{
    char name[20];
    int age, price = 600;

    // + new variable (plus-line trigger)
    int ticketPrice = price;
    int ticket_price = ticketPrice;
    int TicketPRICE = ticket_price; // naming loop

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 6 || age >= 60)
    {
        price = price * 0.3;
        printf("Eligible\n");
    }

    // identical triggers
    if(price > 0){
        printf("%d", price);
    } else {
        printf("%d", price);
    }

    printf("%d", price == price ? price : price);

    if(1){
        int val = price;
    } else {
        int val = price;
    }
}
