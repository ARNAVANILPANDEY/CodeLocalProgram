#include <bits/stdc++.h> 
using namespace std; 

struct TrieNode { 
	TrieNode* child[256]; 

	TrieNode() 
	{ 
		child[0] = child[1] = NULL; 
	} 
}; 

void insertTrie(TrieNode* root, 
				string str) 
{ 

	int M = str.length(); 

	for (int i = 0; i < M; 
		i++) { 

		if (!root->child[str[i]]) { 

			root->child[str[i]] 
				= new TrieNode(); 
		} 

		root = root->child[str[i]]; 
	} 
} 

int findStrLen(TrieNode* root, string str) 
{ 

	int M = str.length(); 

	int len = 0; 

	for (int i = 0; i < M; i++) { 

		if (root->child[str[i]]) { 

			len++; 

			root= root->child[str[i]]; 
		} 
		else { 
			return len; 
		} 
	} 
	return len; 
} 

void findMaxLenPair(vector<string>& arr, 
					int N) 
{ 
	int idx = -1; 

	int len = 0; 

	TrieNode* root = new TrieNode(); 

	insertTrie(root, arr[0]); 

	for (int i = 1; i < N; i++) { 

		int temp = findStrLen(root, arr[i]); 

		if (temp > len) { 

			len = temp; 

			idx = i; 
		} 

		insertTrie(root, arr[i]); 
	} 

	for (int i = 0; i < N; i++) { 

		int M = arr[i].length(); 

		if (i != idx && M >= len) { 

			for (int j = 0; j < len; 
				j++) { 

				if (arr[i][j] 
					!= arr[idx][j]) { 
					break; 
				} 
			} 

			cout << "(" << arr[i] << ", "
				<< arr[idx] << ")"; 
			return; 
		} 
	} 
} 

int main() 
{ 
	vector<string> arr 
		= { "ASDFGHJKL", 
			"ASDF", "ASDFERTYUIOP" }; 

	int N = arr.size(); 
	findMaxLenPair(arr, N); 
} 

