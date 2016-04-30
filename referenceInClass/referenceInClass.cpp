#include<iostream>
#include<vector>
using namespace std;

class Object
{
public:
    Object(int i,vector<int> vec):m_int(i),m_vec(vec)
    {
        PrintMember();
    }
    ~Object() {}

    void PrintMember()
    {
        cout<<"m_int="<<m_int<<" adress of m_int:"<<&m_int<<endl;
        for(size_t i=0;i<m_vec.size();i++)
        {
            cout<<"m_vec["<<i<<"]:"<<m_vec[i]<<" adress of m_vec["<<i<<"]:"<<&m_vec[i]<<endl;
        }
    }
private:
    const int& m_int;
    const vector<int>& m_vec;
};

int main()
{
    int  num =9;
    cout<<"num="<<num<<" adress of num:"<<&num<<endl;
    vector<int> vec(6,103);
    for(size_t i=0;i<vec.size();i++)
    {
        cout<<"vec["<<i<<"]:"<<vec[i]<<" adress of m_vec["<<i<<"]:"<<&vec[i]<<endl;
    }
    Object* o = new Object(num,vec);
    char* str = new char[256];
    o->PrintMember();
    delete o;
    delete str;
    return 0;
}
