#include<bits/stdc++.h>
using namespace std;

#define max 100

class Stack {


public:
	int arr[max], top = -1;

	void  push(int val) {

		top++;

		if (top >= max) {

			cout << "Stack Overflow";
			return;
		}

		arr[top] = val;

		cout << arr[top] << " is pushed" << endl;

	}

	void  pop() {

		if (top < 0) {

			cout << "Stack is empty";
			return;
		}

		cout << arr[top] << " is popped" << endl;

		top--;


	}

	int peek() {

		return arr[top];
	}

	int isEmpty() {

		return top < 0;
	}

};




int main() {


	Stack obj;


	for (int i = 1; i <= 5; i++) {

		obj.push(i);
	}

	while (!obj.isEmpty()) {

		cout << "peak value " << obj.peek() << endl;

		obj.pop();
	}


	return 0;
}