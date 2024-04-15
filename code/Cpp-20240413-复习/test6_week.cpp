#include<bits/stdc++.h>
using namespace std;

int main()
{
	int day = 6, days = 0;
	for(int i =0; i < 22; i++)
	{
		days = (days%7) * 20 % 7;
	}
	day = (day + days) % 7 +1;
	cout << day<<endl;
	return 0;
 } 
