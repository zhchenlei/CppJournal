#include<iostream>
using namespace std;

int main()
{
	int h = 0 , m = 0, s = 0;
	long long n = 0;
	cin >> n;
	n = n / 1000; //ms->s
	n = n %  (60*60*24); //ÌìµÄÃëÊı
	
	h = n / 3600;
	n = n % 3600;
	m = n / 60;
	s =  n % 60;
	printf("%02d:%02d:%02d",h,m,s); 
	return 0;
}
