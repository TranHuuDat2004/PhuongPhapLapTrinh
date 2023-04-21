#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=1;i<=n;i++)
	{cout<<"a["<<i<<"]";
	cin>>a[i];}
}
void xuat(int a[],int n)
{
	for(int i=1;i<=n;i++)
	cout<<a[i]<<endl;}
void sxvd(int a[],int n)
{
	for(int i=n/2;i>=1;i--)
	{
		int min;
		if(2*i+1<=n&&a[2*i]>a[2*i+1])
			min= 2*i+1;
		else min=2*i;
		int j=i;
		while(j<=n/2)
			if(a[j]>a[min])
			{	swap(a[j],a[min]);
				j=min;
				if(2*j+1<=n&&a[2*j]>a[2*j+1])
					min=2*j+1;
				else min=2*j;
			}
		else break;
	}
}
void heapsort(int a[],int n)
{
	sxvd(a,n);
	int k=n;
	while(k>1)
	{
		swap(a[1],a[k]);
		k--;
		sxvd(a,n);
	}
}
int main()
{
	int a[100];
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	cout<<"Day sau khi sap xep la: "<<endl;
	heapsort(a,n);
	xuat(a,n);}
