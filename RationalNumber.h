#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
using namespace std;
#include <iostream>
#include <string>

class RationalNumber
{
    public:
        RationalNumber();
        string numberString;
        bool setNumberString(string inputNumberString);
        string getNumberString();
        string addNumbersString(string numberAString, string numberBString);
        string divideNumbersString(string numberAString, string numberBString);
        bool areEqualNumbersString(string numberAString, string numberBString);

    protected:

    private:
        void NumDen(string inputNumberString, int& num, int& den);
        bool validNum(int num);
        bool validDen(int den);
};

#endif // RATIONALNUMBER_H
