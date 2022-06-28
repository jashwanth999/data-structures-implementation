#include<bits/stdc++.h>
using namespace std;

class StackNode {


public:
	int val;

	StackNode* next;

	StackNode(int x) {

		val = x;

		next = NULL;
	}

};


StackNode*  push(StackNode* head , int val) {

	StackNode* newNode = new StackNode(val);

	newNode->next = head;

	head = newNode;

	cout << head->val << " is Pushed" << endl;

	return head;
}

int  pop(StackNode* &head) {

	if (!head) return 0;

	cout << head->val << " popped value" << endl;

	head = head->next;


	return 1;
}

int peek(StackNode* head) {


	if (!head) return INT_MIN;

	return head->val;
}

int isEmpty(StackNode* head)
{
	return !head;
}



int main() {


	StackNode* head = NULL;


	for (int i = 1; i <= 5; i++) {

		head = push(head, i);
	}

	while (!isEmpty(head)) {

		cout << "peak value " <<peek(head) << endl;

		pop(head);
	}

	return 0;
}