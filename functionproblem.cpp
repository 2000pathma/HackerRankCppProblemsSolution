#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int gre;
    if(a>b && a>c && a>d)
    {
        gre = a;
    }
    else if(b>a && b>c && b>d)
    {
        gre = b;
    }
    else if(c>a && c>b && c>d)
    {
        gre = c;
    }
    else if(d>a && d>b && d>c)
    {
        gre = d;
    }
return gre;
}
int main() {
    int a=12, b=90, c=100, d=10;
    //cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans<<endl;
    return 0;
}