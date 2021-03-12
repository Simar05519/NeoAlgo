/* Problem statement: 
You are given a string, you have to replace all the occurrences of "pi" int the string into 3.14.
Example :
string : api
Output : a3.14 */
#include <bits/stdc++.h>
using namespace std;
void replacepi(char a[], int i)
{
    if (a[i] == '\0' or a[i + 1] == '\0')
    {
        return;
    }

    if (a[i] == 'p' and a[i + 1] == 'i')
    {
        //Shifting the replacement of 3.14
        int j = i + 2;
        //taking j to the end of the string
        while (a[j] != '\0')
        {
            j++;
        }

        while (j >= i + 2)
        {
            a[j + 2] = a[j];
            j--;
        }

        a[i] = '3';
        a[i + 1] = '.';
        a[i + 2] = '1';
        a[i + 3] = '4';
        replacepi(a, i + 4);
    }
    //Go to the next position
    else
    {
        replacepi(a, i + 1);
    }
}

int main()
{
    char a[1000];
    cin >> a;
    replacepi(a, 0);
    cout << a << endl;
    return 0;
}
/* 
Example 1:
Input : xpighpilmpipi
Output: x3.14gh3.14lm3.143.14

Example 2:
Input : abcpipikjpilk
Output: abc3.143.14kj3.14lk

Time Complexity :O(n) */