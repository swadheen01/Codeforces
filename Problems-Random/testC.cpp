#include <bits/stdc++.h>
using namespace std;

// Solution By Larning Unique
// https://t.me/AllCompanyANDContestHelpAvailabl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int __missionCount__;
    cin >> __missionCount__;

    // Solution By Larning Unique
    for (int __cycle__ = 0; __cycle__ < __missionCount__; ++__cycle__)
    {
        int __unitCount__, __threshold__;
        cin >> __unitCount__ >> __threshold__;
        vector<int> __payloads__(__unitCount__);
        for (int __index__ = 0; __index__ < __unitCount__; ++__index__)
        {
            cin >> __payloads__[__index__];
        }

        vector<long long> __frequencyMap__(__unitCount__ + 1, 0);
        for (int __element__ : __payloads__)
        {
            ++__frequencyMap__[__element__];
        }

        vector<long long> __cumulativeSum__(__unitCount__ + 1, 0);
        for (int __i__ = 1; __i__ <= __unitCount__; ++__i__)
        {
            __cumulativeSum__[__i__] = __cumulativeSum__[__i__ - 1] + __frequencyMap__[__i__];
        }

        int __optimalValue__ = 1;
        for (int __divisor__ = __unitCount__; __divisor__ >= 1; --__divisor__)
        {
            long long __quadFactor__ = 4LL * __divisor__;
            long long __upperLimit__ = min((long long)__unitCount__, __quadFactor__ - 1);
            long long __smallTotal__ = (__upperLimit__ >= 1 ? __cumulativeSum__[__upperLimit__] : 0LL);

            long long __validSum__ = __frequencyMap__[__divisor__];
            long long __doubleFactor__ = 2LL * __divisor__;
            if (__doubleFactor__ <= __unitCount__)
                __validSum__ += __frequencyMap__[__doubleFactor__];
            __doubleFactor__ = 3LL * __divisor__;
            if (__doubleFactor__ <= __unitCount__)
                __validSum__ += __frequencyMap__[__doubleFactor__];

            long long __invalidCount__ = __smallTotal__ - __validSum__;
            if (__invalidCount__ <= __threshold__)
            {
                __optimalValue__ = __divisor__;
                break;
            }
        }

        // Solution By Larning Unique
        cout << __optimalValue__ << '\n';
    }

    // https://t.me/AllCompanyANDContestHelpAvailabl
    // Solution By Larning Unique
    return 0;
}