#include<bits/stdc++.h>
using namespace std;

int main()
{
	int flag = 0, cnt = 0;
	for(int year = 2014; year <= 3000; year++)
	for(int month = 1; month <= 12; month++)
		for(int day = 1; day <= 31; day++)
		{
			if(month == 1 || month == 3 || month == 5 || month == 7 
				|| month == 8 || month == 10 || month == 12);
			else if(month == 2)
			{
				if((year % 4 == 0 && year % 100 != 0)
					|| year % 400 == 0)
				{
					if(day > 29) break;		
				}
				else
				{
					if(day > 28) break;
				}
			}
			else 
			{
				if(day >30) break;
			}
			if(year == 2014 && month == 11 && day == 9)
			{
				flag = 1;
			}
			if(flag == 1) cnt++; 
			if(cnt == 1001)
			{
				//cout<<year<<"-"<<month<<"-"<<day<<endl; 
				printf("%d-%02d-%02d",year,month,day);
				break;
			 } 
		}
		
}


