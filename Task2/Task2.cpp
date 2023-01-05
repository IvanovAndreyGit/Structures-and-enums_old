//задание 2

#include <iostream>

struct person
{
    long bank_acc;
    std::string name;
    double balance;

};

void change_balance(person* p, double* summ)
{
    p->balance = *summ;
}

int main()
{
    person user;
    double new_summ = 0;
    std::cout << "Введите номер счета: ";
    std::cin >> user.bank_acc;
    std::cout << "Введите имя владельца: ";
    std::cin >> user.name;
    std::cout << "Введите баланс: ";
    std::cin >> user.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_summ;
    change_balance(&user, &new_summ);
    std::cout << "Ваш счет: " << user.name << ", " << user.bank_acc << ", " << user.balance << std::endl;

    return 0;
}


