#include<iostream>
#include<array>
using namespace std;
void right_rotate();
void left_rotate();
void right_rotate(int times);
int pop(int idx);
int find_transition(int value);

const array<int,5> arr1={0,1,2,3,4};

int main()
{
right_rotate();
cout<<"\n";
left_rotate();
cout<<"\n";
right_rotate(1);
cout<<"\n";
pop(1);
cout<<"\n";
find_transition(1);

}
void right_rotate()
{
array<int,5> arr2={};
for (int i=0;i<arr1.size();i++)
 {
    if (arr1[i]==arr1[(arr1.size())-1])
    arr2[0]=arr1[i];
    else
    arr2[i+1]=arr1[i];

 }
//  swap(arr1,arr2);
 //delete[] arr2;
 for (int i=0;i<arr2.size();i++)
 cout<<arr2[i];

}
void left_rotate()
{
    array<int,5> arr3={};
    int first_element=arr1[0];
    for(int i=0 ;i<arr1.size();i++)
    {
        if (arr1[i]==arr1[0])
        arr3[(arr3.size())-1]=first_element;
        else
        arr3[i-1]=arr1[i];
    }
for (int i=0 ;i<arr3.size();i++)
    cout<<arr3[i];

}
void right_rotate(int times)
{
    array<int,5>arr4={};
    for(int i=0 ;i<arr1.size();i++)
    {
        // if (times<arr1[arr1[i].])
        arr4[i]=arr1[i+times];
    }
    for(int i=0 ;i<arr4.size();i++)
    cout<<arr4[i];
    
}
int pop(int idx)
{
    array<int,4> arr5 ={};

    for(int i=idx ;i<arr1.size();i++)
    {
        arr5[i] = arr1[i+1];
        

    }
      
    cout<<arr1.at(idx)<<"\n";
    for(int i=0 ;i<arr5.size();i++)
    cout<<arr5[i];
return 1;
}
int find_transition(int value)
{
array<int,4> arr6={};
cout<<arr1.at(value)<<"\n";
for(int i=value ;i<arr1.size();i++)
{
    arr6[i]=arr1[i+1];
}
for(int i=0 ;i<arr6.size();i++)
    cout<<arr6[i];
return 1;}