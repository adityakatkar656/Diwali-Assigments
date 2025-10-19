//fabbonachi number
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,next;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci series up to "<<n<<" terms: ";
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<a<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<b<<" ";
            continue;
        }
        next=a+b;
        a=b;
        b=next;
        cout<<next<<" ";
    }
    return 0;
}