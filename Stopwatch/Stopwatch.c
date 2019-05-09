#include <stdio.h>
#include <unistd.h>
#define TRUE 1

int main (void) {

int hr = 0, min = 0, sec = 0;

while (TRUE) {
    printf("\nRemaining Time Left:\n\n");
    printf("\t\t\t\t %3d hr : %3d min : %3d sec\r\n", hr, min, sec);

    sec++;
    sleep(1);

    if (sec == 60) {
        min++;
        sec = 0;
    }

    if (min == 59) {
        hr++;
        min = 0;
        sec = 0;
    }
    
}

return 0;


}
