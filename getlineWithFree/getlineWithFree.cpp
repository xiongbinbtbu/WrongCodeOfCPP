#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    string text = "README.md";
    FILE *fp = fopen(text.c_str(), "r");
    if (NULL == fp) 
    {
        cout<<"Can NOT open file: " << text;
        return false;
    }

    char *line_read = NULL;
    size_t line_read_len = 0;
    string line;
    while (getline(&line_read, &line_read_len, fp) != -1) {
        if (line_read!=NULL)
        {
             free(line_read);
             //line_read=NULL; //-------------(1)
        }
    }
    //free(line_read); //--------(2)
    //line_read = NULL; //----------(2)
    fclose(fp);
}
