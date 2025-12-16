/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on 30 CURRENT_TIME
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define print(vec)        \
    for (auto e : vec)    \
        cout << e << " "; \
    cout << endl
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T, typename R>
using ordered_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void sir()
{
    // ----- ordered_set EXAMPLE -----
    ordered_set<int> os;

    os.insert(10);
    os.insert(5);
    os.insert(30);
    os.insert(20);

    cout << "ordered_set elements (sorted): ";
    for (auto x : os)
        cout << x << " ";
    cout << endl;

    // 1) find_by_order(k): returns iterator to k-th smallest element (0-indexed)
    cout << "0-th smallest = " << *os.find_by_order(0) << endl; // 5
    cout << "2-nd smallest = " << *os.find_by_order(2) << endl; // 20

    // 2) order_of_key(x): count of elements strictly < x
    cout << "Elements < 20 = " << os.order_of_key(20) << endl; // 2
    cout << "Elements < 25 = " << os.order_of_key(25) << endl; // 3

    // ----- ordered_map EXAMPLE -----
    ordered_map<int, string> om;
    om[10] = "ten";
    om[5] = "five";
    om[20] = "twenty";

    cout << "\nordered_map elements (sorted by key):\n";
    for (auto &p : om)
        cout << p.first << " -> " << p.second << endl;

    // find_by_order(k): returns iterator to k-th key
    auto it = om.find_by_order(1); // 1st key
    cout << "\n1st key in ordered_map = " << it->first
         << " -> " << it->second << endl;

    // order_of_key(x): number of keys strictly < x
    cout << "Keys < 20 = " << om.order_of_key(20) << endl; // 2
}

int main()
{
    ALLAHU_AKBAR
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}