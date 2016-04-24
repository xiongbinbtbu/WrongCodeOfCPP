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
        for(int num=0;num<m_vec.size();num++)
        {
            cout<<"m_vec["<<num<<"]:"<<m_vec[num]<<" adress of m_vec["<<num<<"]:"<<&m_vec[num]<<endl;
        }
    }
private:
    const int& m_int;
    const vector<int>& m_vec;
};

int main()
{
    int num =9;
    cout<<"num="<<num<<" adress of num:"<<&num<<endl;
    vector<int> vec(6,103);
    for(int num=0;num<vec.size();num++)
    {
        cout<<"vec["<<num<<"]:"<<vec[num]<<" adress of m_vec["<<num<<"]:"<<&vec[num]<<endl;
    }
    Object* o = new Object(num,vec);
    char* str = new char[256];
    o->PrintMember();
    delete o;
    delete str;
    return 0;
}
