#include<bits/stdc++.h>
using namespace std;

void tower(int n, char source, char target, char aux)
{
    if(n==0) return ;

    tower(n-1, source, aux, target);
    cout<<n<<" Moves from "<<source<<" to "<<target<<endl;
    tower(n-1, aux, target, source);
}
int main()
{
    int n; cin>>n;
    tower(n,'A','C','B');
    return 0;
}