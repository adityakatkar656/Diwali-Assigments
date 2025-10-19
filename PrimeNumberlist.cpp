//Prime number list up to n
#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Prime numbers up to "<<n<<" are: ";
    for(int num=2; num<=n; num++)
    {
        flag=0;
        for(int i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<num<<" ";
    }
    return 0;
}