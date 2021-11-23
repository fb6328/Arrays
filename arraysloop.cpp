#include <iostream>
using namespace std;

int main()
{
    cout << "This simple program will ask a user to input five integer values\n\n";
    int nums[5]; //Declare an integer array of size five
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Input an integer value: "; // Ask user to input five values
        cin >> nums[i];                     //Assign the values to array nums[]
    }
    cout << "You enetered the following values: ";
    for (int x = 0; x < 5; x++)
    {
        cout << nums[x] << "\t"; // Output the five values entered by the user
        sum = sum + nums[x];
    }
    cout << "\n";
    cout << "The sum of the values entered is ";
    cout << sum << "\t and the size of the array is ";
    cout << sizeof(nums) << " bytes \n\n";
}