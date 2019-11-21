//Student Name: Alexis Dubois
//Student ID: 260743051

//linked.c

	

struct ACCOUNT {
	int accountNumber;
	float balance;
	struct ACCOUNT *next;
};


//initialise the linked list
struct ACCOUNT *head = NULL;

void findUpdate(int account, int amount) {
	
	struct ACCOUNT *copy = head;

	struct ACCOUNT *temp;
	temp = (struct *ACCOUNT)malloc(sizeof(struct ACCOUNT));
	if(temp == NULL) exit(1);

	temp.accountNumber = account;
	temp.balance = amount;
	
	int boolean = 0;

	while(copy.next != NULL) {
		if(copy.accountNumber == account) {
			boolean = 1;
			break;
		}
		
	}
	
	if(boolean==0) {
		temp.next = head;
		head = temp;
	}
	if(boolean ==1){
		copy.balance += amount;
	}

}

void prettyPrint() {

	struct temp = head;
	
	//print the first node
	printf("ACCOUNT ID:\t %d \t BALANCE: \t $%.2f",temp.accountNumber,temp.balance);


	//iterate through the remaining Nodes until the end of the list
	while(temp.next != NULL) {

		printf("ACCOUNT ID: %d \t BALANCE: $ %9.2f",temp.accountNumber,temp.balance);

	}

}





