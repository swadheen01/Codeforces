#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll x;
    string s;
    while(cin >>x) {
        cin.ignore();
        getline(cin,s);
        string k = "";
        vector<string>v;
        for (ll i = 0; i < s.size(); i++) {
            if (s[i] != ' ' && s[i] != '+' && s[i] != '-') {
                k += s[i];
            }
            else if (s[i] == '+' || i == s.size() - 1 || s[i] == '-') {
                cout << k << endl;
                string number1 = "", number2 = "";
                bool got = false;
                for (int j = 0; j < k.size(); j++) {
                    if (!got && k[j] == 'x') {
                        got = true;
                    }
                    if (!got) {
                        number1 += k[j];
                    }
                    if (got) {
                        number2 += k[j];
                    }
                }
                if (got) {
                    int a = stoi(number1) , b = stoi(number2);
                    int c = a * (b - 1), d =  b - 1;
                    string l = to_string(c) + "x" + to_string(d);
                    v.push_back(l);
                    
                }
            }
        }
        //cout << v.size();
    }
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
