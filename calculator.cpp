#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

<<<<<<< HEAD
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
=======
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
>>>>>>> e0ea21b (add a multiplication operation)
}
void check_pass (string password)
{
    string valid_pass = "qwerty123";
    if (password == valid_pass) {
        cout << "Доступ разрешен." << endl;
    } else {
        cout << "Неверный пароль!" << endl;
    }
}

int main()
{    
    string user_pass;
    cout << "Введите пароль: ";
    getline (cin, user_pass);
    check_pass (user_pass);
    return 0;
}