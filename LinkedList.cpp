#include<bits/stdc++.h>
using namespace std;

class TreeNode {


public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int x) {

		val = x;

		left = right = NULL;

	}

};


TreeNode* build(TreeNode* root , int val) {

	TreeNode* newNode = new TreeNode(val);


	if (!root) {

		root = newNode;

		return root;
	}


	if (val < root->val) root->left = build(root->left, val);

	else root->right = build(root->right, val);


	return root;

}

// Recursive traversals

void preorder(TreeNode* root) {

	if (!root) return;

	cout << root->val << ' ';

	preorder(root->left);

	preorder(root->right);


}


void inorder(TreeNode* root) {

	if (!root) return;

	inorder(root->left);

	cout << root->val << ' ';

	inorder(root->right);
}


void postorder(TreeNode* root) {

	if (!root) return;



	postorder(root->left);

	postorder(root->right);

	cout << root->val << ' ';


}


// Iterative traversals

void iterInorder(TreeNode* root) {

	stack<TreeNode*>st;

	while (!st.empty() || root) {


		while (root) {

			st.push(root);

			root = root->left;

		}

		root = st.top();

		st.pop();

		cout << root->val << ' ';

		root = root->right;

	}
}


void iterPreorder(TreeNode* root) {

	stack<TreeNode*>st;

	st.push(root);

	while (!st.empty() ) {


		TreeNode* temp = st.top();

		cout << temp->val << ' ';

		st.pop();

		if (temp->right) st.push(temp->right);

		if (temp->left) st.push(temp->left);



	}
}

void iterPostorder(TreeNode* root) {

	stack<TreeNode*>st;
	stack<int>out;

	st.push(root);

	while (!st.empty() ) {


		TreeNode* temp = st.top(); st.pop();

		out.push(temp->val);

		if (temp->left) st.push(temp->left);

		if (temp->right) st.push(temp->right);

	}

	while (!out.empty()) {

		cout << out.top() << ' ';

		out.pop();

	}
}




int main() {


	TreeNode* root = NULL;

	int arr[] = {3 , 1 , 2 , 4 , 5};

	for (int i = 0; i < 5; i++) {

		root = build(root, arr[i]);
	}


	iterPostorder(root);



	return 0;
}