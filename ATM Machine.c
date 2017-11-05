/*
Purpose of program: To create an ATM menu, prompt users for their selections, check balance, make a deposit, make a Withdrawal, change Password, and exit when they want.
*/



#include <stdio.h>

int main(void) 
{
	
	int a = 1, Password[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	float MyAccount = 1000.00f;
	char Selection, key;
	
	
	while (a==1)
	{ 
	
	printf ("1) Check balance\n2) Make a Deposit\n3) Make a Withdrawal\n4) Change Password\n5) Exit\n");
	printf ("Please type a number from 1 to 5 to select a menu item:\n");

	Selection = getchar();
	int Selec_Num = Selection - '0';
	
	switch (Selec_Num) {
		case 1 :
			printf ("User entered 1\n");
        	printf ("Execute Check balance\n");
        	printf ("Balance is $ %g\n", MyAccount);
        
        	printf ("Press any key to continue your transactions …\n");
        	scanf("%c", &key);
        	a = 1;
        	break;
        	
        case 3:
        	printf ("User entered 3\n");
        	printf ("Execute Make a Withdrawal\n");
        	printf ("Enter amount to withdraw: ");
        	scanf("%g", &withdrawl);
        	New_Balance = MyAccount - withdrawl;
        	printf("\nNew Balance is $ %g\n", New_Balance);
        	
        	printf ("Press any key to continue your transactions …\n");
        	scanf("%c", &key);
        	a = 1;
        	break;
        
        	
        case 4 :
        	printf("User entered 4\n");
        	printf("Execute Change Password\n");
        	printf("Enter new password: ");
        	for (i=0; i<7; i++)
        		scanf ("%d", &Password[i]);
        	printf("\nNew Password is “%d”\n", Password);
        	
        	printf ("Press any key to continue your transactions …\n");
        	scanf("%c", &key);
        	a = 1;
        	break;
        
        case 5 :
        	printf ("User entered 5\n");
        	printf ("Execute Exit\n");
        	printf ("Terminating program\n");
        	printf ("Have a nice day!\n");
        	a = 0;
        	break;
        	
        default :
        	a = 1;
        	break;
		}
	  
	
	}
	
	

	return 0;
}