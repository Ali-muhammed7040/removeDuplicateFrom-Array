// removeDuplicateFrom Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int array[50],n;
    cout << "Please define array size : ";
    cin >> n;
    cout << "please Add array numbers : ";
    for (int i = 0 ; i < n; i++)
    {
        cin>>array[i];
    }

    /// <summary>
    /// Removung Duplicates
    /// </summary>
   
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                while (j < n)
                {
                    array[j] = array[j + 1];
                    j++;
                }
                --n;
            }else {
                continue;
            }
        }
       
    }
    for (int d = 0; d < n; d++)
    {
        cout << "after duplication array is : " << array[d] << endl;

    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
