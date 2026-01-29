#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. for loop
    for (int i = 1; i <= 5; i++)
    {
        cout << "Iteration " << i << " using for loop" << endl;
    }

    // nested for loop
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "Outer loop iteration " << i << ", Inner loop iteration " << j << endl;
        }
    }
    // hollow square pattern
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    // solid square pattern
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 2. while loop
    int count = 1;
    while (count <= 5)
    {
        cout << "Iteration " << count << " using while loop" << endl;
        count++;
    }

    // wrong pass check using while loop
    while(true){
        int password;
        cin>>password;
        if(password==1234){
            cout<<"Access Granted"<<endl;
            break;
        }
        else{
            cout<<"Wrong Password, Try Again!"<<endl;
        }
    }

    // 3. do-while loop
    int num = 1;
    do
    {
        cout << "Iteration " << num << " using do-while loop" << endl;
        num++;
    } while (num <= 5);

    return 0;
}