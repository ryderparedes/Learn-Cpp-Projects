#include "bank.h"
#include <iostream>
#include <string>

std::string integerToMoney(int number)
{
    int dollars { number / 100 };
    int cents { number % 100 };

    std::string moneyEquivalent { '$' + std::to_string(dollars) + "." };

    if (cents < 9)
    {
        moneyEquivalent.append('0' + std::to_string(cents));
    }
    else
    {
        moneyEquivalent.append(std::to_string(cents));
    }


    return moneyEquivalent;
}

void showBalance(int totalBalance)
{
    std::cout << "Balance: " << integerToMoney(totalBalance) << '\n';
}

void deposit(int& totalBalance)
{
    std::cout << "Deposit Amount: $";
    std::string depositAmount { };
    std::cin >> depositAmount;

    for (int i = 0; i < depositAmount.size(); i++) {
        if (depositAmount[i] == '.') {
            depositAmount.erase(i,1);
        }
    }

    totalBalance += std::stoi(depositAmount);
}

void withdraw(int& totalBalance)
{
    std::cout << "Withdraw Amount: $";
    std::string withdrawAmount { };
    std::cin >> withdrawAmount;

    for (int i = 0; i < withdrawAmount.size(); i++) {
        if (withdrawAmount[i] == '.') {
            withdrawAmount.erase(i,1);
        }
    }

    totalBalance -= std::stoi(withdrawAmount);
}


void mainMenu()
{
    int balance { 0 };

    while (true)
    {
        std::cout << "1. Show Balance" << '\n';
        std::cout << "2. Deposit" << '\n';
        std::cout << "3. Withdraw" << '\n';
        std::cout << "4. Exit" << '\n';
        std::cout << "=> ";
        int option {};
        std::cin >> option;

        switch (option)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            default:
                std::exit(0);
        }
    }
}