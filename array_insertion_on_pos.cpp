#include <iostream>
using namespace std;
int main()
{
	int i,n,pos,num,a[10];
	cout<<"enter the no. of element :";
	cin>>n;
	cout<<"enter element :\n";
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"enter the pos where the no to be inserted :";
	cin>>pos;
	cout<<"enter the no is to be inserted :";
	cin>>num;
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
		
	}
	n=n+1;
	a[pos]=num;
	for(i=0;i<n;i++)
	cout<<"a["<<i<<"] = "<<a[i]<<endl;
	return 0;
}