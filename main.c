//Name: Alexis Dubois
//Student ID: 260743051


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ssv.c"
#include "linked.c"


int main() {

	FILE *p = fopen("students.ssv","r");
	
	if(p ==NULL) return 1;

	char record[1000];
	
	//extract the data from the file and dump it in the buffer array
	//this is done until the \n character is read of until the eof if reached
	fgets(record,999,p);

	while(feof(p) == 0){
		
		//initialise the variables
		int actNum = 0;
		float actBall = 0;
		
		//call the function passing the reference to the variables to which the values will be attributed
		parse(record,&actNum,&actBall);
		
		//call the function passing the values
		findUpdate(actNum,actBall);
		
		//read the next line from the file to the buffer
		fgets(record,999,p);

	}

	fclose(p);

	prettyPrint();

	

}





