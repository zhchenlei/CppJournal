#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
set<int> s;
int n = 0;
cin >> n;
for(int i =0;i<n; i++)
{
	int tmp = 0;
	cin >> tmp;
	s.insert(tmp);
}
auto it = s.begin();
while(it!=s.end())
{
	cout<<*it<<" ";
	it++;
}	
return 0;
}
