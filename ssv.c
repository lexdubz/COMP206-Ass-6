#include <ctype.h>



void parse(char record[], int *acct, float *amnt) {
	char accountNum[20];
	char amount[20];
	
	//the array is a single line/record of an ssv file
	sscanf(record,"%s %s", accountNum, amount);
	
	//convert the data into the right types
	*acct = atoi(accountNum);
	//do this to convert to float type, since atof converts to double
	char *pEnd2;
	*amnt = strtof(amount,&pEnd2);
	
}

