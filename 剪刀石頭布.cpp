#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int num,play;

    string lis[]={"�ŤM","���Y","��"};

    char player;

    cout <<"�Ъ��a�X��(�Х��r��)�A���S�ŤM; R��ܥ��Y; P��ܥ� " << endl;

    //���q���H���X��
    unsigned seed = time(0);

    srand(seed);

    num=rand()%3+1;//�üƲ���1��3

    cin >> player ;

    //�P�_���a�X����
    if(player =='S' || player == 's')
    {
        play=1;//1��ܰŤM
    }
    else if (player =='R' || player == 'r')
    {
        play=2;//2��ܥ��Y
    }
    else if (player == 'P' || player == 'p')
    {
        play=3;//3��ܥ�
    }
    else
        cout << "��J���~�A�бq�s�}�l" << endl;

    //�P�_�q���X�����A�æL�X
    if (num == 1)//1��ܰŤM
    {
        cout << "�q���X" << lis[0] << endl;
    }
    else if (num == 2)//2��ܥ��Y
    {
        cout << "�q���X" << lis[1] << endl;
    }
    else//��ܥ�
        cout << "�q���X" << lis[2] << endl;

    //�P�_���G
    if( play == num )
    {
        cout << "����" << endl;
    }
    else if( play==1 && num==3 || play==2 && num==1 || play==3 && num==2)
    {
        cout << "WIN" << endl;
    }
    else
    {
        cout << "LOSE" << endl;
    }

}



