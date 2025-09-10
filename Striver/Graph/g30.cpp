#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
    set<string>st(wordList.begin(), wordList.end());
    queue<vector<string>> q;
    q.push({beginWord});
    vector<string>usedOnLevel;
    usedOnLevel.push_back(beginWord);
    int level=0;
    vector<vector<string>>ans;
    int mxl = 1e9;
    while(q.size()){
        vector<string>vec = q.front();
        q.pop();
        if(vec.size()>level){
            level++;
            for(auto it: usedOnLevel)st.erase(it);
            usedOnLevel.clear();
        }
        string word = vec.back();
        if(word==endWord){
            if(ans.size()==0)ans.push_back(vec), mxl=level;
            else if(ans[0].size()==vec.size())ans.push_back(vec);
        }
        if(level>mxl)break;
        for(int i=0; i<word.size(); i++){
            char original = word[i];
            for(char c='a'; c<='z'; c++){
                word[i]=c;
                if(st.count(word)){
                    vec.push_back(word);
                    q.push(vec);
                    usedOnLevel.push_back(word);
                    vec.pop_back();
                }
            }
            word[i]=original;
        }
    }
    return ans;
}      

int main(){

}