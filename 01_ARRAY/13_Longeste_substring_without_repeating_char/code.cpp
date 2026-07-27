// Leetcode : q : 3 : Longest substring without repeating character

#include<iostream>
#include<vector>
using namespace std;

int length(string s){
    int left = 0;
    int max_len = 0;

    vector<int>lastind(256,-1);

    for(int right = 0;right < s.size();right++){
        if(lastind[s[right]] != -1){ 
            left = max(left,lastind[s[right]] + 1);
        }
    lastind[s[right]] = right;

    max_len = max(max_len,right-left+1);
    }
    return max_len;

}
int main()
{
    string s = "abcabcaa";
    return 0;
}