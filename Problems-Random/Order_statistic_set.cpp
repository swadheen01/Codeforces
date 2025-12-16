/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 07 2024 12:49:12 AM
 */

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
pbds A;	// declaration
int main() {
	 
	ll q; cin>>q;
	while(q--)
	{
		char ch; cin>>ch;
		ll x; cin>>x;
		if(ch=='I')
		{
			A.insert(x);
		}
        
		else if(ch=='D')
		{
			A.erase(x);
		}
		else if(ch=='C')
		{

			cout<<A.order_of_key(x)<<"\n";
		}
        else if(ch=='K')
        {
            // cout << "A = ";
            // for (auto i : A)
            //     cout << i << " ";
            // cout << endl;
            if(x>A.size()){
                cout<<"invalid\n";
            }
            else cout<<*A.find_by_order(x-1)<<"\n";
        }
    }

}