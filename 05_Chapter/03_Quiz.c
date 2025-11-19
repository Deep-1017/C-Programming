// Write a program with three functions 
// 1. Good morning function which prints “good morning”. 
// 2. Good afternoon function which prints “good afternoon”. 
// 3. Good night function which prints “good night”. 
// main() should call all of these in order 1→3→2

#include<stdio.h>

// Func Proptotype of Good Morning, Good Afternoon, Good Night Func
void goodMorning();        
void goodAfternoon();
void goodNight();
void greetUser();


// Function Definition

void goodAfternoon() {
    printf("Good Afternoon\n");  
    greetUser(); 
}
void goodNight() {
    printf("Good Night\n");
}
void greetUser() {
    printf("Hello, How are you?\n");
}
void goodMorning() {
    printf("Good Morning\n");
}

int main() {
    goodAfternoon();
    goodNight();
    goodMorning();

    return 0;
}  


