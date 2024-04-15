#include<bits/stdc++.h>
using namespace std;

int a[15];
int main()
{
	
	int n = 0;
	cin>>n;
	for(int i =0; i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> v(a,a+n);
	int x = 0, y = 0;
	cin>>x;
	cin >> y;
	v.insert(v.begin()+x-1,y);
	for(auto e:v)
	{
		cout<<e<<endl;
	}
	return 0;
}
