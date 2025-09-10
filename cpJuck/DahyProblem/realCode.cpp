#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1000010;
vector<vector<ll>>unqPrmFacts(N);
vector<bool>isPrime(N, true);
void sieve(){
    isPrime[1]=false;
    for(ll i=2; i<N; i++){
        if(isPrime[i]){
            unqPrmFacts[i].push_back(i);
            for(ll j=i+i; j<N; j+=i){
                isPrime[j]=false;
                unqPrmFacts[j].push_back(i);
            }
        }
    }
}

ll ansFunc(vector<ll>&v){
    ll ans=0;
    ll n = v.size();
    set<ll>currSet, currAllSet;
    ll leftPtr=0;
    for(ll i=0; i<n; i++){
        currSet.clear();
        currSet = {unqPrmFacts[v[i]].begin(), unqPrmFacts[v[i]].end()};
        // for(auto it: currSet){
        //     cout<<it<<"  ";
        // }cout<<endl;
        // for(auto it: unqPrmFacts[v[i]]){
        //     cout<<it<<"  ";
        // }cout<<endl;
        bool notOkay=false;
        for(auto it: unqPrmFacts[v[i]]){
            if(currAllSet.count(it)){
                // currAllSet.insert(it);
                notOkay=true;
            }else{
                currAllSet.insert(it);
            }
        }
        // for(auto it: currAllSet){
        //     cout<<it<<"  ";
        // }cout<<endl;
        if(notOkay){
            while(leftPtr<i){
                // cout<<"yo"<<endl;
                bool done=true;
                for(auto it: unqPrmFacts[v[leftPtr]]){
                    if(!currSet.count(it) )
                    currAllSet.erase(it);
                }
                // for(auto it: currSet){
                //     cout<<it<<"  ";
                // }cout<<endl;
                // for(auto it: currAllSet){
                //     cout<<it<<"  ";
                // }cout<<endl;
                for(auto it: currSet){
                    if(currAllSet.count(it)){
                        // cout<<"ehd"<<endl;
                        done=false;
                        break;
                    }
                }
                if(done){
                    break;
                }
                // cout<<"yo"<<endl;
                leftPtr++;
            }
        }
        // if(i-leftPtr+1==5){
        //     cout<<i<<"  "<<leftPtr<<endl;
        // }
        // cout<<"lftptr " << leftPtr<< endl;
        ans=max(ans,i-leftPtr+1LL);
    }
    return ans;
}

int main(){
    sieve();

    // for(ll i=0; i<=100; i++){
    //     cout<<i<<" -->  ";
    //     for(auto it: unqPrmFacts[i]){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<ll>v = {2,3,4,5,7,14,16,17};
    // vector<ll>v = {2,4,8,3,6,7,13,19};

    ll ans=ansFunc(v);
    cout<<ans<<endl;
    
}