// Leetcode : Q : 15 : permutation in string


#include<iostream>
#include<vector>
using namespace std;

bool is_freq_same(int f1[], int f2[]){
    for(int i = 0;i<26;i++){
        if(f1[i] != f2[i]){
            return false;
        }
    }
    return true;
}

bool check_inclusion(string s1,string s2){

    // Store the freq. of string 1  in the first array.
    int f1[26] = {0};
    for(int i = 0;i<s1.size();i++){
        f1[s1[i] - 'a']++;  // So that we can start from the index 0 a/c to the alphabates.
    }

    int win_size = s1.size();

    for(int i = 0;i<s2.size();i++){
        int win_idx = 0;
        int idx = i;
        int win_freq[26] = {0};

        while(win_idx < win_size && idx <s2.size()){
            win_freq[s2[idx] - 'a']++;
            win_idx++;idx++;

        }

        if(is_freq_same(f1,win_freq)){
            return true;
        }
    }
    return false;


}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout<<check_inclusion(s1,s2);
    return 0;
}