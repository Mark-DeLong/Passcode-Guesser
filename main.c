#include <stdio.h>
#include <stdlib.h>

long long password, guess, i;

int main () {

    printf("Enter a numerical passcode \n");
    scanf("%lli", &password);
                    
    for (i = 0; i < 55000000000000; i++) {
        guess = i;
        
        if (guess == password) {
            printf("Your passcode is %lli", guess);
            exit(0);
        }
    }
}
