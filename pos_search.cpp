
#include <bits/stdc++.h>
using namespace std;

// A linked list Node
struct Node {
	int data;
	struct Node* next;
};

// Size of linked list
int size = 0;

Node* getNode(int data)
{
	Node* newNode = new Node();

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertPos(Node** current, int pos, int data)
{
	
	if (pos < 1 || pos > size + 1)
		cout << "Invalid position!" << endl;
	else {

		// Keep looping until the pos is zero
		while (pos--) {

			if (pos == 0) {

				Node* temp = getNode(data);

				
				temp->next = *current;

				*current = temp;
			}
			else
		
			current = &(*current)->next;
		}
		size++;
	}
}

// This function prints contents
// of the linked list
void printList(struct Node* head)
{
	while (head != NULL) {
		cout << " " << head->data;
		head = head->next;
	}
	cout << endl;
}


int main()
{
	// Creating the list 3->5->8->10
	Node* head = NULL;
	head = getNode(3);
	head->next = getNode(5);
	head->next->next = getNode(8);
	head->next->next->next = getNode(10);

	size = 4;


	printList(head);

	int data = 12, pos = 3;
	insertPos(&head, pos, data);
	
	printList(head);

	// front of the linked list
	data = 1, pos = 1;
	insertPos(&head, pos, data);
	
	printList(head);

	data = 15, pos = 7;
	insertPos(&head, pos, data);
	printList(head);

	return 0;
}
