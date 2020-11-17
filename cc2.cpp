#include <bits/stdc++.h> 
using namespace std; 

void constructNewArraySumZero(int arr[], int N) 
{ 
	int newArr[N]; 

	for (int i = 0; i < N; i++) { 

		if (i % 2 == 0) { 

		newArr[i] = arr[i + 1]; 
		} 
			
		else { 

			newArr[i] = -arr[i - 1]; 
		} 
	} 

	for(int i = 0; i < N; i++) { 
		cout<< newArr[i]<<" "; 
	} 
} 

int main() 
{ 
	int arr[] = { 1, 2, 3, -5, -6, 8 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 

	constructNewArraySumZero(arr, N); 

	return 0; 
} 

