#include<iostream>
using namespace std;
int main()
{
	int i,f=1,n;
	cout<<"Enter the positiv and int value of n : ";
	cin>>n;
	if(n<0)
	{
		cout<<"not exist factorial of this number : ";
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	}
	cout<<"factorial"<<n; 
	cout<<" = " <<f<<endl;
	return 0;
}
