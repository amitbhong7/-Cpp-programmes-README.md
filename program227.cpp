#include<iostream>

using namespace std;

void display(int iNo)
{
int idigit=0;
while (iNo!=0)
{
    idigit=iNo%16;//Hexa decimal
    cout<<idigit;
    iNo=iNo/16;
}
cout<<"\n";
}
int main()
{

int ino=0;
cout<<"Enter number"<<"\n";
cin>>ino;

display(ino);

    return 0;

}
/*
    0       0
    1       1
    2       2
    3       3
    4       4
    5       5
    6       6
    7       7
    8       8
    9       9
    10      A
    11      B
    12      C
    13      D
    14      E
    15      F

----------------------------------------------------------------------------------------------------------
    Base    2       2       2       2       2       2       2       2       2       2       2       2
    Power   11      10      9       8       7       6       5       4       3       2       1       0
    Value  2048    1024     512     256     128      64      32     16      8       4       2       1
----------------------------------------------------------------------------------------------------------
*/

/*
Decimal No :        98
Binary :            (0    1   1   0)       (0   0   1   0)
Hexadecimal               6                      2

                                   0X62

Decimal No :        967
Binary :            (0   0  1   1)   (1   1   0   0)   (0   1   1   1)    
Hexadecimal               3                  C                7
                                0X3C7



*/