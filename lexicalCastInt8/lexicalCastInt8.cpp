#include<iostream>
#include<stdint.h>
#include "boost/lexical_cast.hpp"
#include "boost/numeric/conversion/cast.hpp"
#include "boost/numeric/conversion/converter_policies.hpp"
using boost::lexical_cast;
using boost::numeric_cast;
using namespace std;
int main()
{
    string str = "12";
    try
    {
        int8_t num = lexical_cast<int8_t>(str.c_str());
        cout<<num<<endl;
    }
    catch(const boost::bad_lexical_cast &e )
    {
        std::cerr << e.what() << endl;
    } 

    int8_t num = numeric_cast<int8_t>(lexical_cast<int>(str.c_str()));
    cout<<"numeric_cast:"<<(int)num<<endl;
    
    return 0;
}

