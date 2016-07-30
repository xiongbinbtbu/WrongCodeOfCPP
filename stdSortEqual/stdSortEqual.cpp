#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct info
{
    int value;
    inline static bool cmp(const info &var1, const info &var2)
    {
        if(var1.value>=var2.value)
            return true;
        return false;
    }
} info;

typedef vector<info> infoVec;
int main()
{
    infoVec vec;
    int max = 30;
    for(int i=0;i<max;i++)
    {
        info tmp;
        tmp.value=1%10;
        vec.push_back(tmp);
    }
    std::sort(vec.begin(),vec.end(),info::cmp);
    return 0;
}

