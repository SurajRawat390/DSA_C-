// Leetcode 76 

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

string min_window(string s, string t){

    // Store the frequency of the t string...
    unordered_map<char,int>m;
    for(char ch:t){
        m[ch]++;
    }

    int left = 0;
    int count = t.size();

    int min_len = INT_MAX;
    int start = 0;

    for(int right = 0;right <s.size();right++){
        if(m[s[right]] > 0){
            count --;
        }
        m[s[right]]--;

        while(count == 0){
            if(right - left + 1 < min_len){
                min_len = right-left+1;
                start = left;
            }

            m[s[left]]++;

            if(m[s[left]] > 0){
                count++;
            }
            left++;
        }

    }
    if(min_len == INT_MAX){
        return"";



    }
    return s.substr(start,min_len);
}
int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    string ans = min_window(s,t);
    cout<<ans;
    return 0;
}