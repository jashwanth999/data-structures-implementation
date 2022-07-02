#include<bits/stdc++.h>
using namespace std;

class TrieNode {

public:

	bool isWord;

	vector<TrieNode*>children;

	TrieNode() {

		isWord = false;

		children = vector<TrieNode*>(26, NULL);

	}

};

class Trie {

public:

	TrieNode* root;

	Trie() {

		root = new TrieNode();
	}

	void addWords(vector<string>&words) {

		for (auto x : words) {

			insert(x);
		}
	}

	void insert(string word) {

		TrieNode* curr = root;

		for (int i = 0; i < word.size(); i++) {

			int idx = word[i] - 'a';

			if (curr->children[idx] == NULL) {

				curr->children[idx] = new TrieNode();
			}

			curr = curr->children[idx];
		}

		curr->isWord = true;

	}

};




int main() {


	Trie obj;



	return 0;
}
