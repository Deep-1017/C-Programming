#include<stdio.h>
#include<string.h>
// Else if Clause / Else if Ladder

int main() {
    int day = 1;

    if(day == 0) {
        printf("Watch a Youtube Video");
    }
    else if(day == 4) {
        printf("Going to Gym");
    }
    else if(day == 1) {
        printf("Going to Library");
    }
    else {
        printf("Do the routine work");
    }
    return 0;
}