//ATM PROBLEM SOLUTION CODECHEF DONE BY ROHIT DAS//

#include <stdio.h>
int main() {
	int amount;
	float balance;
	scanf("%d%f",&amount ,&balance);
	float remainbal;
	if(amount%5= =0)
	{
	    if(amount<balance)
	    {
	        remainbal=balance-amount-(0.5);
	        printf("%f",remainbal);
	    }
	}
	else{
	 printf("%f",balance);
	}
	return 0;
}

