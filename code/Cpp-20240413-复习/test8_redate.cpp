#include<iostream>
#include<string>
using namespace std;

string my_to_string(int y, int m , int d)
{
	string s, sy, sm, sd;
	sy = to_string(y);
	sm = to_string(m);
	sd = to_string(d);
	s.insert(s.size(),sy);
	if(m < 10) s.push_back('0');
	s += sm;
	//s.insert(s.size(),sm);
	if(d < 10) s.push_back('0');
	s += sd;
	//s.insert(s.size(),sd);
	return s;
}
// is_reword 函数：检查字符串是否是回文
bool is_reword(string& s) {
    return s == string(s.rbegin(), s.rend());
}

// is_reword1 函数：检查字符串是否是 "ABABBABA" 形式的回文
bool is_reword1(string& s) {
    return s.length() == 8 && s[0] == s[1] && s[2] == s[3] && s[4] == s[5] && s[6] == s[7]
        && s[0] == s[6] && s[1] == s[7] && s[2] == s[4] && s[3] == s[5];
}
/*bool is_reword(string& s)
{
	for(int left = 0, right = s.size() - 1; right >= left;)
	{
		if(s[right--] == s[left++]) return true;	
	}
	return false;	
}
//ABABBABA 
bool is_reword1(string& s)
{
	if(s[0] == s[2] || s[1] == s[3] || s[0] != s[1])  return true;
	return false;	
}*/

void func()
{
	int flag = 0, reword1 = 0, reword2 = 0;
	for(int year = 2020; year <= 3000; year++)
		for(int month = 1; month <= 12; month++)
			for(int day = 1; day <= 31; day++)
			{
				if(month ==1 || month == 3 || month == 5 || month == 7
					|| month == 8 || month == 10 || month == 12 );
				else if(month == 2)
				{
					if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
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
					if(day > 30) break;	
				}
				if(year == 2020 && month == 2 && day == 3) flag = 1; 
				if(flag == 1)
				{
					if(reword1 == 0 || reword2 == 0) 	//都没找到 
					 {
					 	string s = my_to_string(year,month,day);	//转为相应字符串 
						 if(reword1 == 0 && is_reword(s))
						{
							cout << s << endl;
							reword1 = 1;
							if(reword2 == 0 && is_reword1(s))
							{
								cout << s << endl;
								//printf("%d%02d%02d",year, month, day); 
								reword2 = 1;
							}
						}
					 }
				}
			} 	
} 



int main()
{
	func();
	//test1();
	return 0;
}
