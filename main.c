#include <stdio.h>
#include <stdlib.h>

long long password, guess;

int main () {

    printf("Enter a numerical passcode \n");
    scanf("%lli", &password);
    
    long long i;
                    
    for (i = 0; i < 55000000000000; i++) {
        guess = i;
        
        

        if (guess == password) {
            printf("Your passcode is %lli", guess);
            exit(0);
        }
    }
}
