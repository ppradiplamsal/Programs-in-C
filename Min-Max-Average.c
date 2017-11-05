

/*
Purpose of program: To accept a series of up to 10 integers from the user, store them into an array, find the maximum value in the array, and print the maximum value and the array in reverse order.
*/


Pseudocode:


Define max 10  (the maximum number of inputs possible as a macro variable “max”)



//Declare the prototypes of the functions with their types that will be used in the program
void ReadArray(int *p);
int FindMaxValue(int *q);
int ReverseArray(int *r, int *s);
void PrintArray(int *t, int length);




//Define the main function
int main (void)
{
	//Define the two arrays, "a" and "arev", of size “max” that will be used in the program and initialize them to zeroes, and declare the "length" variable to store the length of array input by the user
	int a[max] = {0}, arev[max] = {0}, length;
	//Call all the four supporting functions	
    	ReadArray(a);	
	FindMaxValue(a);
	length = ReverseArray(a, arev);   //Assign the return value of the ReadArray function to the variable “len"
	PrintArray(arev, length);
	return 0;
}  




//Define the ReadArray function and pass an integer pointer "p" corresponding to the first element of the array "a" as the parameter
void ReadArray(int *p)
{
	//Define an integer pointer "q" and make the pointers "p" and "q" point to the fist element of the array "a" 
	int *q;
	printf("\nPlease enter a series of numbers terminated by a 0 (upto 10 numbers):\n\n");
	for (q=p; q< p+max; q++) {
		scanf("%d", q);      //Prompt user to input up to 10 integers and store them into the array “a”	      
        	if (*q == 0)			      
	    		break;	     //Entering a zero will mean end of the user input
	}
	return;
}




//Define the FindMaxValue function and pass an integer pointer "q" corresponding to the first element of the array "a" as the parameter
int FindMaxValue(int *q)
{
	//Define an integer pointer "i" and make the pointers "q" and "i" point to the fist element of the array "a" 
	int *i, largest = *q;   	    //Set the value represented by the pointer "q" to be the largest value by assigning it to the variable "largest"
	for (i=q; i<q+max; i++) {
        	if (*i>largest)
           		largest = *i;       //Iterate through the array and if any element is greater than the largest value, assign it to the variable "largest
	}
        printf ("\nThe highest element in the array is: %d", largest);
}




//Define the ReverseArray and pass the addresses of the first elements of the arrays "a" and "arev" to the pointer variables "r" and "s" respectively
int ReverseArray(int *r, int *s)	
{
	//Define the integer pointers "c" and "i" make the pointers "c" and "r" point to the fist element of the array "a" and the pointers "i" and "s" point to the same of the array "arev" 

	//First finding the length of the array "a"
	int *c, *i, len=0;			//Define and set the initial value of the variable "len" to 0
	for (c=r; c<r+max; c++) {
		len++;
	
		if (*c == 0)			//If the value represented by the pointer "c" is 0, then stop
			break;
	}
	len--;					//The actual length of the array is upto the element just before 0


	//Assigning every element of the array "a" to the array "arev" in reverse order
	for (i=(r+len-1); i >= r ; i--) {
		*s++ = *i;
	}
	return len;				//Return the length of the array
}




//Define the PrintArray function and pass an integer pointer "t" corresponding to the first element of the array "arev" as the parameter and length of the array to the variable "length"
void PrintArray(int *t, int length)
{
	int *i;
	printf("\n\nThe reversed array is: ");
	//Print the elements in the “arev” array
	for (i=t; i<t+length; i++)
		printf("%d ", *i);
	printf("\n\n");
	return;
}



