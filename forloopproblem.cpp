#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int a=8,b=11,i;
    string arr[]={" ","one","two","three","four","five","six","seven","eight","nine"};
    //cin>>a>>b;
    for(i= a;i<=b;i++)
    {
        if(i>9)
        {
            if(i%2 ==0)
                cout<<"even\n";
            else {
                cout<<"odd\n";
            }   
        }
        else {
          cout<<arr[i]<<endl;
        }
    }
    return 0;

}