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
float z(float x, float y, float m, float c)
{
	if(m!=0)
	return(y-(m*x)-c);
	else
	return(y-c);

}
int main()
{
	float ax,ay,bx,by,m,c;
	int n;
	//cout<<"\n Enter ax";
	cin>>ax;
	//cout<<"\n Enter ay";
	cin>>ay;
	//cout<<"\n Enter bx";
	cin>>bx;
	//cout<<"\n Enter by";
	cin>>by;
	//cout<<"\n Enter n";
	cin>>n;
	float px[n], py[n];
	for(int i=0;i<n;++i)
	{
		//cout<<"\n Enter px\n"<<i;
		cin>>px[i];
		//cout<<"\n Enter py\n"<<i;
		cin>>py[i];
		

		if((by-ay)!=0 && (bx-ax)!=0)
		{
			c=ay+ax*((ay-by)/(bx-ax));
			m=(by-ay)/(bx-ax);
			if(m<0)
			{
				if(by>ay)
				{
					if( z(px[i],py[i],m,c)>0 )
					cout<<"RIGHT\n";

					else if( z(px[i],py[i],m,c)<0 )
					cout<<"LEFT\n";

					else if( z(px[i],py[i],m,c)==0 )
					{
						if(py[i]<by && py[i]>ay)
						cout<<"ON_SEGMENT\n";

						else
						cout<<"ON_LINE\n";
					}		
				}

				else
				{
					if( z(px[i],py[i],m,c)<0 )
					cout<<"RIGHT\n";

					else if( z(px[i],py[i],m,c)>0 )
					cout<<"LEFT\n";

					else if( z(px[i],py[i],m,c)==0 )
					{
						if(py[i]>by && py[i]<ay)
						cout<<"ON_SEGMENT\n";

						else
						cout<<"ON_LINE\n";
					}
				}

				
			}

			if(m>0)
			{
				if(by>ay)
				{
					if( z(px[i],py[i],m,c)>0 )
					cout<<"RIGHT\n";

					else if( z(px[i],py[i],m,c)<0 )
					cout<<"LEFT\n";

					else if( z(px[i],py[i],m,c)==0 )
					{
						if(py[i]<by && py[i]>ay)
						cout<<"ON_SEGMENT\n";

						else
						cout<<"ON_LINE\n";
					}		
				}

				else
				{
					if( z(px[i],py[i],m,c)<0 )
					cout<<"RIGHT\n";

					else if( z(px[i],py[i],m,c)>0 )
					cout<<"LEFT\n";

					else if( z(px[i],py[i],m,c)==0 )
					{
						if(py[i]>by && py[i]<ay)
						cout<<"ON_SEGMENT\n";

						else
						cout<<"ON_LINE\n";
					}
				}

				
			}

		
	
	
		}

		else if((by-ay)==0 && (bx-ax)!=0)
		{
			c=ay+ax*((ay-by)/(bx-ax));
			m=(by-ay)/(bx-ax);
			if(bx>ax)
			{
				if(z(px[i],py[i],m,c)>0)
				cout<<"LEFT\n";

				else if(z(px[i],py[i],m,c)<0)
				cout<<"RIGHT\n";

				else if(z(px[i],py[i],m,c)==0)
				{
					if(px[i]<bx && px[i]>ax)
					cout<<"ON_SEGMENT\n";

					else
					cout<<"ON_LINE\n";
				}
			}

			else
			{
				if(z(px[i],py[i],m,c)<0)
				cout<<"LEFT\n";

				else if(z(px[i],py[i],m,c)>0)
				cout<<"RIGHT\n";

				else if(z(px[i],py[i],m,c)==0)
				{
					if(px[i]>bx && px[i]<ax)
					cout<<"ON_SEGMENT\n";

					else
					cout<<"ON_LINE\n";
				}
			}
		}

		else if(bx==ax)
		{
			if(by>ay)
			{
				if(px[i]>ax)
				cout<<"RIGHT\n";

				else if(px[i]<ax)
				cout<<"LEFT\n";

				else if(px[i]==ax)
				{
					if(py[i]<by && py[i]>ay)
					cout<<"ON_SEGMENT\n";
					else
					cout<<"ON_LINE\n";
				}
			}

			else
			{
				if(px[i]<ax)
				cout<<"RIGHT\n";

				else if(px[i]>ax)
				cout<<"LEFT\n";

				else if(px[i]==ax)
				{
					if(py[i]>by && py[i]<ay)
					cout<<"ON_SEGMENT\n";
					else
					cout<<"ON_LINE\n";
				}
			}

		}


	
	
	
	}
	


}	



