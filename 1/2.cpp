#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        int stars = i;
        if (i > n)
            stars = (2 * n) - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {

        int start;
        i % 2 == 0 ? start = 0 : start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {

        int start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        start--;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }
}
void pattern14(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }
}
void pattern15(int n)
{

    for (int i = n; i >= 1; i--)
    {
        char start = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start;
        }
        start++;
        cout << endl;
    }
}
void pattern17(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        char start = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        start -= 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << start;
            start--;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{

    for (int i = 1; i <= n; i++)
    {

        char start = 'A' + (n - i);
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }
}

void pattern19Part1(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern19Part2(int n)
{

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    pattern19Part1(n);
    pattern19Part2(n);
}

void pattern20(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        int stars = i;
        if (i > n)
            stars = (2 * n) - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        int space = 2 * (n - i);
        if (i > n)
            space = (i - n) * 2;

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        int stars = i;
        if (i > n)
            stars = (2 * n) - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        int space = 2 * (n - i);
        if (i > n)
            space = (i - n) * 2;

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pattern21(n);
    return 0;
}