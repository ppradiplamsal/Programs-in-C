/*
Purpose of program: To enter a string, write a function that takes the string as a parameter, encrypt the message as described above and returns the ciphertext. Then ask user again if she/he wants to continue or not. Finally print all the original messages in alphabetically ascending order.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100


//Prototypes for the functions to be used
char EncryptMessage(char array[]);
char SortInput(char array[][N], int t);



//Main function that contains while loop, encrypt function, and sort function
int main()
{

//Variables for 2D array and counters
    char userMessage[20][N], resume;
    int t, i;

    resume = 'y';
    t = 0;

//While loop that takes user inputs and stores them in 2D array and encrypts them
    while (resume == 'y') {
    printf("Please enter a message: ");
    fgets(userMessage[t], N, stdin);
    strtok(userMessage[t], "\n");
    EncryptMessage(userMessage[t]);
    t++;
    printf("Would you like to continue(y/n)? ");
    scanf("%c", &resume);
    getchar();
    }

//Sort function to put inputs in order then prints each one line by line
    SortInput(userMessage, t);
    printf("The original messages in alphabetical order are:\n");

    for (i = 0; i < t; i++){
        printf("%s\n", userMessage[i]);
    }
}


//EncryptMessage function counts the even and odd index numbers then puts them together to scramble original string, then prints encrypted message
char EncryptMessage(char array[])
{
    int i, j, length;
    char even[50] = " ", odd[50] = " ";

    length = strlen(array);
    j = 0;

    for(i = 0;i < length; i += 2){
            odd[j] = array[i];
            j++;
        }

    j = 0;

    for(i = 1; i < length; i += 2){
            even[j] = array[i];
            j++;
    }

    strcat(even, odd);
    printf("The encrypted message is: %s\n", even);
}


//SortInput is a bubble sort that uses a temp value to swap between higher and lower values to sort in ascending order
char SortInput(char array[][N], int t)
{
    char tempArray[N];
    int i, j;
   for (i = 0; i < t-1; i++){

        for (j = 1 + i; j < t; j++){

            if (strcmp (array[i], array[j]) > 0){
                strcpy (tempArray, array[i]);
                strcpy (array[i], array[j]);
                strcpy (array[j], tempArray);
            }
        }
    }
}

