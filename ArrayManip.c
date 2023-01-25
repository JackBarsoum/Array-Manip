#include <stdio.h>
#include <stdbool.h>
#define MAX_NUM 255
int main(void)
{
/*

Code to Manipulate an array continuously using an easy
to understand interface

Written By: Jack Barsoum

*/

unsigned int size = 0;
unsigned int choice, choicedetail;
int a[MAX_NUM+1];
int b[MAX_NUM+1];
bool finish = false;
int i = 0;
int n = 0;
int numpick = 0;

//Reading in array and assigning it to a[i]

printf("What size would you like your array to be?\n");
scanf("%d", &size);
if (size > 255) {
  printf("Unusable array size please make the array smaller than 255 and not a negative number\n");
  return -1;
}

for (i=0;i<size;i++) {
printf("Please enter a number\n");
scanf("%d", &a[i]);
}

//Printing out array

for (i=0;i<size;i++) {
  printf("%d ", a[i]);
}

//Code will continue unless user has declared
//the interface to stop

while (finish == false) {
printf("What would you like to do to the array? (1) Reverse (2) Addition (3) Multiply (4) Stop\n");
scanf("%d",&choice );


          if (choice == 1) {
          //Code to reverse array at given point
          printf("At what position do you want the array to stop reversing? (Please note this number cannot be larger than %d)\n", size);
          scanf("%d", &choicedetail);

          while (choicedetail > size) {
            printf("Invalid position number cannot be larger than %d or a negative integer\n",size);
            scanf("%d", &choicedetail);
                                      }

            for (i=0;i<choicedetail;i++) {
              b[i] = a[choicedetail-1-i];
                                         }

            for (i=0;i<choicedetail;i++) {
              a[i] = b[i];
                                         }

            printf("The array is now: ");

            for (n=0;n<size;n++) {
              printf("%d ", a[n]);
                                 }
            printf("\n");
                            }

        if (choice == 2) {
          //code to add an integer to every number in the array
        printf("At what position do you want the array to stop adding an integer to?\n");
        scanf("%d",&choicedetail);

        while (choicedetail > size) {
          printf("Invalid position number cannot be larger than %d or a negative integer\n",size);
          scanf("%d", &choicedetail);
                                    }

        printf("Please input a number to be added to the numbers in the array chosen\n");
        scanf("%d", &numpick);

        for (i=0;i<choicedetail;i++) {
          a[i] += numpick;
                                     }

        printf("The array is now: ");

        for (n=0;n<size;n++) {
          printf("%d ", a[n]);
                             }
            printf("\n");
                            }

        if (choice == 3) {
          //code to multiply an integer to every number in the array

        printf("At what position do you want the array to stop multiplying an integer to?\n");
        scanf("%d",&choicedetail);

        while (choicedetail > size) {
        printf("Invalid position number cannot be larger than %d or a negative integer\n",size);
        scanf("%d", &choicedetail);
                                    }

        printf("Please input a number to be multiplied to the numbers in the array chosen\n");
        scanf("%d", &numpick);

        for (i=0;i<size;i++) {
          a[i] *= numpick;
                             }

        printf("The array is now: ");

        for (n=0;n<size;n++) {
          printf("%d ", a[n]);
                             }
        printf("\n");
                          }

        if (choice == 4) {
          //code to stop program and print final array
          finish = true;

          printf("The final array is now: ");

          for (n=0;n<size;n++) {
            printf("%d ", a[n]);
          }
        return 0;
        }

if (choice < 1 || choice > 4) {
printf("Invalid command try using a number between 1-4\n");
}

}

}
