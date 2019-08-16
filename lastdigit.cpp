#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int t,a;
	long long int b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int d=1;
		while(b)
		{
			if(b%2)
			{
				d=(d*a)%10;
			}
			b=b/2;
			a=(a*a)%10;
		}
		cout<<d<<endl;
	}
	return 0;
}
