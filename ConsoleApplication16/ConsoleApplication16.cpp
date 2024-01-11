#include<iostream>
#include<string>
using namespace std;

void merge(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{

    arr3[size3];
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i];
    }
    for (int i = 0; i < size3; i++) {
        for (int j = 0; j < size3 - 1; j++)
        {
            if (arr3[j] > arr3[j + 1])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << endl;
    }
}
void common_element(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
                cout << "THE COMMON ELEMENTS ARE:" << arr2[j] << endl;
        }
    }
}
bool check(string& palindrome)
{
    int i = 0, j = palindrome.length() - 1;
    while (i < j) {
        while (!isalnum(palindrome[i]))
            i++;
        while (!isalnum(palindrome[j]))
            j--;
        if (tolower(palindrome[i]) != tolower(palindrome[j]))
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    int a, b;
    a = 5;
    b = 7;
    int arr1[5] = { 12,6,4,18,2 };
    int arr2[7] = { 9,15,3,12,6,21,18 };
    int arr3[12];
    merge(arr1, arr2, arr3, 5, 7, 12);
    common_element(arr1, arr2, a, b);
    string palindrome;
    cout << "Enter a String" << endl;
    getline(cin, palindrome);
    if (check(palindrome))
    {
        cout << "STRING IS PALINDROME" << endl;
    }
    else
    {
        cout << "STRING IS NOT PALINDROME" << endl;
    }
    return 0;
}
