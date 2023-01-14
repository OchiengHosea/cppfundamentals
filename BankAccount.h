//
// Created by The Duke on 14/01/2023.
//
#pragma once
#ifndef FUNDAMENTALS_BANKACCOUNT_H
#define FUNDAMENTALS_BANKACCOUNT_H

#include <string>

class BankAccount {
public:
    BankAccount();
    ~BankAccount();

private:
    int BalanceInPennies;

public:
    std::string GetHolderName() { return "NotImplemented"; }
};


#endif //FUNDAMENTALS_BANKACCOUNT_H
