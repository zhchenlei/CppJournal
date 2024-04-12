/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == ' ' && s[i+1] != ' ' || s[i] != ' ')  cout << s[i]; 
	}
	return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(cin >> s) 
	{
		cout << s << ' ';
	}
	return 0;
}
