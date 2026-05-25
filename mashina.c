#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int i;

    for(i = 0; i < 60; i++) {

        system("clear");

        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        printf("      ______\n");

        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        printf(" ____/[] []\\___\n");

        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        printf("| _          _ |\n");

        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        printf("'-(_)------(_)-'\n");

        usleep(80000);
    }

    return 0;
}
