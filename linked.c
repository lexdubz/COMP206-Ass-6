//Student Name: Alexis Dubois
//Student ID: 260743051

//linked.c

	

struct ACCOUNT {
	int accountNumber;
	float balance;
	struct ACCOUNT *next;
};

//Create the list head as a private global variable
struct ACCOUNT *head;

//initialise the list head
void init() {
	head = malloc(sizeof(struct ACCOUNT));
	if(head == NULL) puts("Linked List head initialization failed");
}

//
void findUpdate(int account, int amount) {
	
	struct ACCOUNT *copy = head;

	struct ACCOUNT *temp = (struct ACCOUNT *)malloc(sizeof(struct ACCOUNT));
	if(temp == NULL) exit(1);

	temp->accountNumber = account;
	temp->balance = amount;
	
	int boolean = 0;

	while(copy != NULL) {
		if(copy->accountNumber == account) {
			boolean = 1;
			break;
		}
		copy = copy->next;
	}
	
	if(boolean==0) {
		temp->next = head;
		head = temp;
	}
	if(boolean ==1){
		copy->balance += amount;
	}

}

void prettyPrint() {

	struct ACCOUNT *temp = head;
	
	//iterate through the Nodes until the end of the list
	while(temp != NULL) {

		printf("ACCOUNT ID: %d \t BALANCE: $ %9.2f",temp->accountNumber,temp->balance);
		temp = temp->next;
	}

}





