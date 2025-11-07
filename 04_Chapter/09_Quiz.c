// Write a program to enter a password from the user & check that password with the correct password. If the entered password is correct then user can login in the system else user needs to try again. And user can try to login in the system maximum 3 times.

#include<stdio.h>

int main() {
    
    int user_attempts = 0;
    int correct_password = 1234;
    int entered_password;

    while(user_attempts < 3) {

        printf("Enter a Password: ");
        scanf("%d", &entered_password);

        if(entered_password == correct_password) {
            printf("Login Succesfully !\n");
            break;
        }
        else {
            printf("Password is wrong, Try Again !\n");
        }
        
        user_attempts++;
    }

    return 0;
}