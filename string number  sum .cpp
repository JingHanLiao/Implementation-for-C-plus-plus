#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    int cont;

    cin >> cont;

    while(cont--)
    {
        int a,b,sz1,sz2,carry=0,sum;

        string n1,n2,temp;

        cin >> n1 >> n2;

        sz1=n1.size();

        sz2=n2.size();

        if(sz1 < sz2)//�����������ܦ��Q�[�Ƥ���n��
        {
            temp=n2;

            n2=n1;

            n1=temp;
        }

        sz1=n1.size();

        sz2=n2.size();

        while( sz1 > 0 )//���q�Ӧ�ƧP�_
        {
            a=n1[sz1-1]-48;//�r������

            if(sz2 > 0)//b�٦��Ʀr�S�Q�[
            {
                b=n2[sz2-1]-48;
            }
            else
            {
                b=0;//b�Q�[���F
            }

            sum=a+b+carry;

            if(sum >= 10)
            {
                n1[sz1-1]=sum % 10+'0';//�i�쪺�Ӧ��(�����r��)

                carry=1;//�i���
            }
            else if(sum < 10)
            {
                n1[sz1-1]=sum+'0';//�S�i�쪺�Ӧ��

                carry=0;//�i���
            }

            sz1--;//�~�򩹫�P�_

            sz2--;
        }

        if(carry == 1)//�p�G�̫᪺��Ʀ��i��N�n+1
        {
            n1='1'+n1;
        }

        cout << n1 << endl;

        sum=0;

        carry=0;
    }
}

