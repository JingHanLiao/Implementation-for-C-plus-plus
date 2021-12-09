#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<cmath>

using namespace std;

//input 一個number 則可以得到number*number的矩陣裡面的菱形

int main()
{
    int num;

    cin >> num;

    if(num%2!=0)//判斷積數
    {
        num=(num/2)+1;//分上下部分
    }

    //上半部
    for(int i=1 ; i<=num ; i++)
    {

      for(int j=0 ; j < num-i ; j++)
      {
          cout << "x" ;
      }
      for(int k=1 ; k <= 2*i-1;k++)
      {
          cout << "o" ;
      }

      for(int z=0 ; z < num-i ; z++)
      {
          cout << "x" ;
      }

      cout << endl;
    }

    //下半部
    for(int a=num-1 ; a > 0 ; a--)
    {

        for(int g=0 ; g < num-a ; g++)
        {
            cout << "x" ;
        }

        for(int r=1 ; r <= 2*a-1 ; r++)
        {
            cout <<"o";
        }

        for(int h=0 ; h < num-a ; h++)
        {
            cout << "x" ;
        }

        cout << endl ;
    }
}
