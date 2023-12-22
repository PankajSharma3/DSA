//INSERTION IN THE ARRAY
#include <iostream>
using namespace std;
int main()
{
int a[]={2,4,16,32};
int b=sizeof(a)/sizeof(int);
int c,d;
cin>>c>>d;
for(int i=b-1;i>=c;i--)
{
   a[i+1]=a[i];
}
a[c]=d;
for(int i=0;i<5;i++)
{
cout<<a[i]<<endl;
}
}
