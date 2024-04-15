#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	map <string,int> mp;
	string name;
	int age;
	for(int i = 0; i < n; i++)
	{
		cin>>name>>age;
		mp.insert(make_pair(name,age));
	}
	for(auto& m :mp)
	{
		cout<<m.first<<":"<<m.second<<endl;
	}
	
	return 0;
 } 
