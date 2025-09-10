#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	set<string>sett;
	sort(s.begin(), s.end());
	sett.insert(s);
	while(next_permutation(s.begin(),s.end())){
		sett.insert(s);
	}
	cout << sett.size() << endl;
	for(auto it: sett) cout << it << endl;
	
}