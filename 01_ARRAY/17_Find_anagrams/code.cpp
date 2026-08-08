// Leetcode : q :438 : Find all anagrams in a string

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool is_freq_same(int f1[], int f2[]){
    for(int i = 0;i<26;i++){
        if(f1[i] != f2[i]){
            return false;
        }
    }
    return true;
}

vector<int>find_anagrams(string s, string p){


    vector<int>ans;
    // Store the frequency of second string (p)....
    int f1[26] = {0};
    for(int i = 0;i<p.size();i++){
        f1[p[i] - 'a']++;
    }

    int win_size = p.size();

    for(int i = 0;i<s.size();i++){
        int win_idx = 0;int idx = i;
        int f2[26] = {0};

        while(win_idx < win_size && idx < s.size()){
            f2[s[idx] - 'a']++;
            win_idx++;
            idx++;
        }

        if(is_freq_same(f1,f2)){
            ans.push_back(i);  // retutn the index of the anagrams
        }
    }
    return ans;

}
int main()
{
    string s = "cbaebabacd";
    string p = "abc";

    vector<int>ans = find_anagrams(s,p);
    for(int x:ans){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;

}