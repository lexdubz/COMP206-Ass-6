#include <ctype.h>



void parse (char record[], int *acct, float *amnt) {
	char *accountNum;
	char *amount;
	
	//the array is a single line/record of an ssv file
	sscanf(record,"%d %f",accountNum, amount);
	
	//convert the data into the right types
	*acct = atoi(accountNum);
	*amnt = atof(amount);
}

