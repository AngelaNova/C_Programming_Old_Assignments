#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
	int data;
	struct Node* next;
	struct Node* prev;

} Node;






Node* create_dll_from_array(int array[],int size){

	Node *newNode,*temp;
	Node *head= NULL;
    	temp = (Node*)malloc(sizeof(Node));
	if (temp==NULL) return NULL;

	for (int i=0; i<size; i++){ 
	newNode =(Node*) malloc(sizeof(Node));
	if (newNode==NULL) return NULL;
	(*newNode).data=array[i];


	if (i==0){
	head=newNode;		
	(*newNode).next = head;
	(*newNode).prev = head;
	}


	else{

	temp= (*head).prev;

	(*temp).next=newNode;
	(*newNode).next =head;
	(*newNode).prev=temp;
	temp=head;
	(*temp).prev=newNode;
	}
	
	};

	return head;	
}


void print_dll(Node* head){

	Node* current;
	if (head==NULL){
		printf("No data found in the List\n");
	}
	else{
		current=head;
	do{		
			printf("%d \t", (*current).data);
			current= (*current).next; 
		}while (current !=head);
	printf("\n");
	}

}


void insert_after(Node* head, int valueToInsertAfter, int valueToBeInserted){

	Node* current, *newNode;
	int x=0;
	newNode=(Node*) malloc(sizeof(Node));
	(*newNode).data=valueToBeInserted;
	current=head;
	while ((*current).next!=head){
		if ((*current).data==valueToInsertAfter ){
			(*newNode).next=(*current).next;
			(*((*current).next)).prev=newNode;
			(*current).next=newNode;
			(*newNode).prev=current;
			x=1;
			break;
		}
	
		current= (*current).next;
		
		if ((*current).next==head && (*current).data==valueToInsertAfter){
				
			(*newNode).next=(*current).next;
			(*((*current).next)).prev=newNode;
			(*current).next=newNode;
			(*newNode).prev=current;
			x=1;
			break;	
			}
	}

		if (x==0){
			(*newNode).prev=(*head).prev;
			(*((*head).prev)).next=newNode;
			(*head).prev=newNode;
			(*newNode).next=head;	
		}
	
	
}

Node*  delete_element(Node* head, int valueToBeDeleted){

	Node* current, lastV;
	int temp;
	current=head;
//	lastV=(*head).prev;
 	do{

			
		if ((*current).data==(*head).data && (*current).data==valueToBeDeleted){
		
		head=(*head).next;
		
	//		(*current).prev=(*((*current).prev)).prev;

				(*((*current).next)).prev=(*current).prev;
		//		(*current).next=current;
				(*((*current).prev)).next=(*current).next;
		
		return head;
		}
		
		if((*current).data==valueToBeDeleted){

		(*((*current).next)).prev=(*current).prev;
		(*((*current).prev)).next=(*current).next;
		

		return head;
		}

		current=current->next;

		
	}while (current!=head);

} 



void sort_dll(Node* head){
	int swapped, i; 
    	Node *max; 
  	Node *lastP=head; //last pointer going from the last node (next) of last node
  
    	do
    	{ 
        swapped = 0; 
        max = head; 
  
        while ((*max).next != lastP) 
        { 
           if((*max).data > (*((*max).next)).data) 
            {  
                int temp = (*max).data; 
    		(*max).data = (*((*max).next)).data; 
    		(*((*max).next)).data = temp;
                swapped = 1; 
            } 
            max = (*max).next; 
        } 
        lastP = max; 
    } while (swapped); 

}


void freeMemory(Node* head){

	Node* current=head;
	
	do {
		free((*((*current).prev)).next);
		(*current).prev=(*((*current).prev)).prev;
		free( (*((*((*current).prev)).next)).prev);

	} while (current!=(*current).prev);
	
	free((*current).next);
	free((*current).prev);

}





int main(){

int array[5] = {11,2,7,22,4};

	
Node* head;
//Question 1
 head = create_dll_from_array(array, 5); //size of array is 5
 //Question 2

print_dll(head);

//Question 3
//to insert 13 after the first occurence of 7
insert_after(head,7,13);
print_dll(head);

//To insert 29 after the first occurence of 21
insert_after(head,21,29);
print_dll(head);

//Question 4

head=delete_element(head,22);
print_dll(head);

head=delete_element(head,11);
print_dll(head);


//Question 5
sort_dll(head);
print_dll(head);


//Question 6
freeMemory(head);

}



