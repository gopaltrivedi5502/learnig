#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the limit: ";
	cin>>n;
	int arr[n];
	cout<<"the fibonaci series is: ";
	arr[0]=1;
	arr[1]=1;
	cout<<arr[0]<<","<<arr[1]<<",";
	for(int i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<",";
	}
	
	return 0;
}
