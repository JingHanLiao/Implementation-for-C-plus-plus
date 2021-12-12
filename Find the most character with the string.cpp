#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    while(cin)
    {
        char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        int con[26]={0};

        int n=0,sz,cont,maxnum=0,index=-1,z=0,flag=0;

        char maxchar,rechar[26];

        string st;

        getline(cin , st);

        sz=st.size();

        while( n < sz)
        {
            if (islower(st[n]))
            {
                st[n]=st[n]-32;
            }

            n=n+1;
        }

        for(int i=0 ; i < sz ; i++)
        {
            cont=0;

            for(int j=0 ; j < sz ; j++)
            {
                if(st[i] == st[j])
                {
                    cont=cont+1;
                }

            }

            for(int k=0 ; k < 26 ; k++)
            {
                if(st[i] == ch[k])
                {
                    con[k]=cont;
                }
            }
        }

        for(int y=0 ; y < 26 ; y++)
        {
            if(con[y] > maxnum)
            {
                maxnum=con[y];

                maxchar=ch[y];

                index=y;
            }

        }

        for(int m=0 ; m < 26 ; m++)
        {
            if(maxnum == con[m])
            {
               rechar[z]=ch[m];

               z=z+1;

               flag=flag+1;
            }

        }

        if(flag >= 2)
        {
            cout << rechar[0] << endl;
        }
        else
        {
            cout << maxchar << ' ' << maxnum << endl;
        }

    }

}
