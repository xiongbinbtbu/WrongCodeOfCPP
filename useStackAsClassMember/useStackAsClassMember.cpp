#include<iostream>
#include<vector>
using namespace std;

class Object
{
    public:
        Object()
        {
        }
        ~Object() {}

        static void add(int& i,vector<int>& vec)
        {
            vec.push_back(i);
        }

        void PrintMember()
        {
            cout<<"============PrintMember====================="<<endl;
            for(size_t num=0;num<m_vec->size();num++)
            {
                cout<<"m_vec["<<num<<"]:"<<(*m_vec)[num]<<" adress of m_vec["<<num<<"]:"<<&((*m_vec)[num])<<endl;
            }
        }

        void Init(vector<int>* vec)
        {
            m_vec = vec;
        }
    private:
        vector<int>* m_vec;
};

void OperationVec(Object* o)
{
    int num =9;
    vector<int> vec(6,103);
    cout<<"============Initialization====================="<<endl;
    for(size_t i=0;i<vec.size();i++)
    {
        cout<<"vec["<<i<<"]:"<<vec[i]<<" adress of m_vec["<<i<<"]:"<<&vec[i]<<endl;
    }
    o = new Object();
    Object::add(num,vec);
    cout<<"============Object::add====================="<<endl;
    for(size_t i=0;i<vec.size();i++)
    {
        cout<<"vec["<<i<<"]:"<<vec[i]<<" adress of m_vec["<<i<<"]:"<<&vec[i]<<endl;
    }
    o->Init(&vec);
}

int main()
{
    Object* o = NULL;
    OperationVec(o);
    o->PrintMember();
    delete o;
    o=NULL;
    return 0;
}
