#include <iostream>
using namespace std;
double add(double a, double b)
{
    return a + b;
}
double sub(double a, double b)
{
    return a - b;
}
double product(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}
int main()
{
    double a, b;

    char choice = 'y';
    while (choice == 'y')
    {
        int operation;

        cout << "\n===== CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. reminder\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> operation;
        
            if (operation == 6)
                
            {
                break;
            }
        

        cout << "enter first no. = ";
        cin >> a;

        cout << "enter second no. = ";
        cin >> b;

      if (operation == 1)
        {
            cout << "addition =" <<add(a, b)<<endl;
        }
        else if (operation == 2)
        {
            cout <<"subtract = " <<sub(a, b)<<endl;
        }
        else if (operation== 3)
        {
            cout << "product = "<<product(a, b)<<endl;
        }
        else if (operation== 4)
        {
            if (b == 0)
            {
                cout << "cannot divide by zero"<<endl;
            }
            else
            {
                cout<<"divide = " << divide(a, b)<<endl;
            }
        }
        else if (operation == 5)
        {
            cout <<"reminder = " <<rem(a, b)<<endl;
        }
        else
        {
            cout << "Invalid operator" << endl;
        }
        cout << "enter your choice y\n";//calculation end krne ke liye
        cin >> choice;
    }

    return 0;
}