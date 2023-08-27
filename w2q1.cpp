#include<iostream>
#include<string>
using namespace std;
int main()
{
    int key=4;
    string t;
    t="helloworld";

    int rows=(t.size()/key)+1 ;
    char text[rows][key];
    for(int i=0,ind=0;i<rows,ind<t.size();i++)
    {
        for(int j=0;j<key;j++)
        {
            text[i][j]=t[ind];
            ind++;
        }
    }

    for(int i=0,ind=0;i<rows;i++)
    {
        for(int j=0;j<key;j++)
        {
            cout<<text[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dec<<endl;

    string enc="";
    for(int j=0,ind=0;j<key;j++)
    {
        for(int i=0;i<rows;i++)
        {
            char c=text[i][j];
            if((c>=65 && c<=90) || (c>=97 && c<=122))
            {
                enc+=c;
            }
        }
    }
    cout<<"Encrypted code is : "<<enc<<endl;

    string dec="";
    for(int i=0,ind=0;i<rows;i++)
    {
        for(int j=0;j<key;j++)
        {
            char c=text[i][j];
            if((c>=65 && c<=90) || (c>=97 && c<=122))
            {
                dec+=c;
            }
        }
    }
    cout<<"Decrypted code is : "<<dec<<endl;
}
