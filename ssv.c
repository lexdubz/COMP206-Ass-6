#include <ctype.h>



void parse (char record[], int *acct, float *amnt) {
	char accountNum[];
	char amount[];

	//the array is a single line/record of an ssv file
	fscanf(record[],"%s %s",accountNum, amount);

	*acct = atoi(accountNum);
	*amnt = atof(amount);
}

