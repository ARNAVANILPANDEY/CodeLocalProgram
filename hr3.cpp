#include <bits/stdc++.h>
using namespace std;


int MinOperation(int arr[], int N, int K)
{
	
	int cntOpe = 0;

	
	for (int i = 0; i < N; i++) {

		
		if (K > arr[i]) {

			
			if ((K - arr[i]) % 2 == 0) {

				
				cntOpe += 2;
			}
			else {

				
				cntOpe += 1;
			}
		}

		
		else if (K < arr[i]) {

			
			if ((K - arr[i]) % 2 == 0) {

				
				cntOpe += 1;
			}
			else {

				
				cntOpe += 2;
			}
		}
	}

	return cntOpe;
}


int main()
{
	int arr[] = { 8, 7, 2, 1, 3 };
	int K = 5;
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << MinOperation(arr, N, K);

	return 0;
}

