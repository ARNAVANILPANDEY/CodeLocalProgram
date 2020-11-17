/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main()
{
	int t,x,c,count=0;
	cin>>t>>x;
	for(int i=1;i<=x;++i)
	{
		c=0;
		for(int j=1;j<=i;++j)
		{
			if(i%j==0)
			{
				++c;
				
			}
		}
		if(c==4)
		{
			++count;
			cout<<i<<"\n";
		}
		
	}
	cout<<count;
}
