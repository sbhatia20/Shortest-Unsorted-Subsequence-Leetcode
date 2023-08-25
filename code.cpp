//Approach that solves problem in O(NLogN) time 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int findUnsortedSubarray(vector<int>& nums) {

    int n=nums.size();
    if(n==1)
    {return 0;}
    vector<int> original=nums;
    sort(nums.begin(),nums.end());
    int ans=0;
    int i=0;
    int j=n-1;
    while(i<j) 
    {
    if(original[i]==nums[i] && original[j]==nums[j])
    {i++;
    j--;}
      
    else if(original[i]==nums[i] && original[j]!=nums[j])
    {i++;}

    else if(original[i]!=nums[i] && original[j]==nums[j])
    {j--;}
     
    else
    {ans=j-i+1;
    break;}}
    return ans;
    }
int main()
{
    return 0;
}
