#ifndef BANK_H
#define BANK_H

#include <string>

std::string integerToMoney(int number);
void showBalance(int totalBalance);
void deposit(int& totalBalance);
void withdraw(int& totalBalance);
void mainMenu();

#endif BANK_H