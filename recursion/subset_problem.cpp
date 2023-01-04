#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> subsets;
void generate(vector<int> &v, int i, vector<int> nums){
        // base case
        if(i==nums.size()){
                subsets.push_back(v);
                return;
        }

        // ith element not in subset
        generate(v, i+1, nums);

        // ith element in subset
        v.push_back(nums[i]);
        generate(v, i+1, nums);
        v.pop_back();


}

int main()
{
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++){
                cin>> nums[i];
        }

        vector<int>empty;

        generate(empty, 0, nums);
        for(auto subset:subsets){
         for(auto it: subset){
                cout<<it<<" ";
         }
         cout<<endl;       
        }



    return 0;
}

