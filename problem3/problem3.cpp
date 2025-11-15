// problem 3.         leetcode 326   . Power of Three


#include<iostream>

using namespace std;

bool isPowerOfThree(int n)
{
    if (n == 1)return true;
    else if (n % 3 == 0 && n != 0)
        return isPowerOfThree(n / 3);
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfThree(n);
    return 0;
}