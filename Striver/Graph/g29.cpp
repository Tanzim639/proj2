#include<bits/stdc++.h>
using namespace std;
#define ll long long

int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
    set<string>st(wordList.begin(), wordList.end());
    queue<pair<string,int>>q;
    q.push({startWord,1});
    st.erase(startWord);
    while(q.size()){
        string word = q.front().first;
        int steps = q.front().second;
        q.pop();
        if(word==targetWord)return steps;
        for(int i=0; i<word.size(); i++){
            string tmp = word;
            for(char ch='a'; ch<='z'; ch++){
                tmp[i] = ch;
                if(st.count(tmp)){
                    q.push({tmp,steps+1});
                    st.erase(tmp);
                }
            }
        }
    }
    return 0;
}

int main(){

}