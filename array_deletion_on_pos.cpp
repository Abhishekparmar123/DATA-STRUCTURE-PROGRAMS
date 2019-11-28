#include <iostream>
using namespace std;
int main()
{	int i,n,pos,a[10];
    cout<<"enter the no of element : ";
    cin>>n;
    cout<<"enter element :\n";
    for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"enter the pos from which no delete : ";
	cin>>pos;
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	cout<<"display array after deletion : \n";
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cout<<a[i]<<endl;
	}
    return 0;
}