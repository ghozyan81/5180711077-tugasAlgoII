#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace::std;
main()
/*{
//ascending bubble sort
    int NumList[8]={5,23,45,34,25,22,2,9};
    int temp;
    cout<<"data sebelum diurut : \n";
    for(int d=0;d<8;d++)
    {
        cout<<","<<NumList[d];
    }
    cout<<endl<<endl;
    for(int i=0;i<7;i++)
        for(int c=0;c<7;c++)
        if(NumList[c]>=NumList[c+1])
    {
        temp=NumList[c];
        NumList[c]=NumList[c+1];
        NumList[c+1]=temp;
    }
cout<<"Data setelah diurutkan : \n";
for(int a=0;a<8;a++)
    cout<<NumList[a]<<endl;
}*/

{
//Descending shell sort
    int array[5];
    int length=5;
    int i,j,d;
    int tmp, flag;
    for(i=0;i<length;i++)
    {
        cout<<"masukan nomor :";cin>>array[i];
    }
    d=length;
    flag=1;
    while(flag||(d>1))
    {
        flag=0;
        d=(d+1)/2;
        for(i=0;i<(length-d);i++)
        {
            if(array[i+d]>array[i])
            {
                tmp=array[i+d];
                array[i+d]=array[i];
                array[i]=tmp;
                flag=1;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
}
