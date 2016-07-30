#include<iostream>
using namespace std;
int main()
{
    const int arraySize=256;
    char array[256]={0};
    int page=210841002;//210841002
    cout<<"Please input page:";
    //cin>>page;
    int pagesize=20;//20
    cout<<"Please input pagesize:";
    //cin>>pagesize;
    if(page<0)
    {
        cout<<"page is negative("<<page<<")!"<<endl;
        return -1;
    }
    cout<<"page*pagesize:"<<page*pagesize<<endl;
    int start = (page-1)*pagesize+1;
    cout<<"start:"<<start<<endl;
    if(start>=arraySize)
    {
        cout<<"start is too large("<<start<<")!"<<endl;
    }
    cout<<"array[start]:"<<array[start]<<endl;
    return 0;
}

