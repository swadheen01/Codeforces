#include<iostream>
#include<vector>
using namespace std;

int count(const vector<int> nums){
    int c = 0;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i != j && nums[i]*2 == nums[j]){
                c++;
                break;
            }
            
        }
    } return c;
}

int main(){
    while(true){
        vector<int>nums;
        int n;
        while (cin >> n && n != -1) {
            if (n == 0) break;
            nums.push_back(n);
        }
        if (n == -1) break;
        cout<<count(nums)<<endl;
    }
    return 0;

}
