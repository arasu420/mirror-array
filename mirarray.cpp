#include <iostream>
#include <string>
using namespace std;
int main()
{
int n,i,count=0;
cout<<"enter the size of the array"<<endl;
cin>>n;
int a[n],b[n];
cout<<"enter the 1st array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    cout<<a[i];
}
cout<<"\nenter the 2nd array"<<endl;
for(i=0;i<n;i++)
{
    cin>>b[i];
}
for(i=0;i<n;i++)
{
    cout<<b[i];
}
for(i=0;i<n;i++)
{
    if(a[i]==b[n-i-1])
    {
        ++count;
       
    }
}
if(n==count)
{
    cout<<"\nits mirror image";
}
else
{
    cout<<"\nits not a mirror image";
}
return 0;
}
