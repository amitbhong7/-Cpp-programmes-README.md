#include<iostream>
using namespace std;

/*class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int length)
        {
            Size = length;
            Arr = new int[Size];
        }

        void Accept()
        {
            cout<<"Enter the elements of array\n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array are \n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }      
};

int main()
{
    ArrayX obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}*/


template <class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int);       
        void Accept();
      void Display();

 
};

template <class T>
ArrayX<T>::ArrayX(int ilenght)
{
    Size = ilenght;
    Arr = new T[Size];
}

template <class T>
void ArrayX<T>::Accept()
{
            cout<<"Enter the elements of array\n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

 template <class T>
 void  ArrayX<T>::Display()


        {
            cout<<"Elements of array are \n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }      
        

int main()
{
    ArrayX<int> obj(5);

    obj.Accept();
    obj.Display();

     ArrayX<double> obj1(5);

    obj1.Accept();
    obj1.Display();

    return 0;
}