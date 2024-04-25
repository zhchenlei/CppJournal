#include<bits/stdc++.h>
using namespace std;

bool IsContinuous(vector<int>& n) 
{
    int count0 = 0;
    sort(n.begin(),n.end());
    auto it = n.begin();
    while(it != n.end())  
    {
        if(*it == 0)  
            ++count0;   //2
        else
        {
            if(*it + 1  != *(it+1))
            {
                if(count0 != 0)
                {
                    --count0;
                }
                else return false;
            }
        }
        ++it;
    }
    return true;      
}
int main()
{
    vector<int> n({6,0,2,0,4});
    cout<<"  "<<IsContinuous(n)<<endl;
    return 0;
}