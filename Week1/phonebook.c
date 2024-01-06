#include <stdio.h>
#include "cs50.h"

int main (void)

{
    string name = get_string("What's your name? ");
    int age= get_int("What's your age?" );
    string phone = get_string ("What's your phonenumber");

    printf("Age is %i. Name is %s. Phone Number is %s.", age, name, phone);
}