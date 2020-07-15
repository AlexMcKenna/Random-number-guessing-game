/*
 * This program is to demonstrate the use of random number / input guessing system
 */

/* 
 * File:   main.c
 * Author: Alex
 *
 * Created on 06 October 2016, 13:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
void findNumber(int compare);
void maxturns(int compare);

int main(int argc, char** argv) {
    srand(time(NULL)); //generator for random numbers
    int array[100]; //array accepts ints up to 10
    int i; //for loops
    int size = sizeof (array) / sizeof (array[0]);

    for (int i = 0; i < 100; i++) {
        array[i] = rand() % 10 + 1;
        findNumber(array[i]);
    }

    for (int i = 0; i < 100; i++) {
        printf("Element %d: %d\n", i, array[i]);
    } //1st d=position, 1st i=random, array=guess

    return (EXIT_SUCCESS);
}

void findNumber(int compare) {
    int input;
    int max_turns = 0;

    printf("please enter a number between 1-10\n"); //prompts the user to enter the first number
    scanf("%d", &input); //scans the first number
    if (input < compare && input > 1) {
        printf("your guess was too low\n"); //error prints if result is too low
    } else if (input > compare && input < 10) {
        printf("your guess was too high\n"); //error prints if result is too high
    } else if (input == compare) {
        printf("your result was correct!\n"); //congrats if you win
    }
    if (input < 1 || input > 10) {
        printf("not a valid number\n"); //error prints if number isn't valid
    }

void maxturns(int compare) {
    for (int i = 0; i < max_turns; i++) {
        if (input != compare) { //initializes the max_turns variable
            max_turns++; //plus one if incorrect answer
        } else if (max_turns = 3) {
            printf("Bad luck, you have lost!"); //prints if the use has lost
            exit(EXIT_FAILURE);
        } else if (input == compare) {
            max_turns = 0; //if the person gets the right answer, the max_turns resets
        }
        }
    }
}


