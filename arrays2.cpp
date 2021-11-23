#include<iostream>
using namespace std;

int main()
{
int nums[5];//Declare an integer array of size five
cout<<"Enter enter five integers "<<endl; // Ask user to input five numbers
cin>>nums[0];//Capture first number
cin>>nums[1];//Capture second number
cin>>nums[2];//Capture third number
cin>>nums[3];//Capture fourth number
cin>>nums[4];//Capture fifth number
cout<<"The five values/integers entered are:  ";
cout<<nums[0];cout<<" ";//Print the five entered values on the screen
cout<<nums[1];cout<<" ";
cout<<nums[2];cout<<" ";
cout<<nums[3];cout<<" ";
cout<<nums[4]<<endl;

}