#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>
#include<cctype>

using namespace std;


int main()
{
    int v,k=0,temp;

    int a[5];

    while(k < 5)
    {
        cin >> v;

        a[k]=v;

        k=k+1;
    }

    for(int i=0 ; i < 5 ; i++)
    {
        for(int j=i+1 ; j < 5 ; j++)
        {
            if(a[i] > a[j])
            {
                temp=a[i];

                a[i]=a[j];

                a[j]=temp;
            }
        }
    }

    for(int g=0 ; g < 5 ; g++)
    {
        cout << a[g] << endl;
    }

}
