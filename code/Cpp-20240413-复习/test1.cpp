#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int sum = 0, count= 0; //�桢ż
    while(cin>>n)
    {
        if(n == 0) break;
       
            if(n %2 == 0) ++count;
            else sum += n;
        
    }
    cout<<count<<endl<<sum<<endl;
    return 0;
}
