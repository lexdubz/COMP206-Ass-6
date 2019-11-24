//Student Name: Alexis Dubois
//Student ID: 260743051

//linked.c
#include "Account.h"
#include "defs.h"


//Create the list head as a private global variable
struct ACCOUNT *head = NULL;


//function receives the account number and amount to add to the balance as input
void findUpdate(int account, int amount) {
	//create a copy of the linked-list head
	struct ACCOUNT *copy = head;
	//initialize a temporary account node to store the values received
	struct ACCOUNT *temp = (struct ACCOUNT *)malloc(sizeof(struct ACCOUNT));
	if(temp == 0) exit(1);

	temp->accountNumber = account;
	temp->balance = amount;
	
	int boolean = 0;

	while(copy != 0) {
		if(copy->accountNumber == account) {
			boolean = 1;
			break;
		}
		copy = copy->next;
	}
	//if we have no match in the existing list, append the new account at the beginning of the list
	if(boolean==0) {
		temp->next = head;
		head = temp;
	}
	//if we have a match in the list, the variabble boolean =1
	//at this point we update the value of account balance by adding the amount
	if(boolean ==1){
		copy->balance += amount;
	}

}

void prettyPrint() {
	//initialize a copy of the head node to start the iteration
	struct ACCOUNT *temp = head;
	
	//iterate through the Nodes until the end of the list
	while(temp != 0) {

		printf("ACCOUNT ID: %d \t BALANCE: $ %9.2f \n",temp->accountNumber,temp->balance);
		temp = temp->next;
	}

}





