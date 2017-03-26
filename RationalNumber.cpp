#include "RationalNumber.h"
#include <iostream>
#include <string>


RationalNumber::RationalNumber()
{
    //ctor
}

bool RationalNumber::setNumberString(string inputNumberString)
{
    bool res = true;
    numberString = inputNumberString;
    return res;
}

string RationalNumber::getNumberString()
{
    return numberString;
}
string RationalNumber::addNumbersString(string numberAString, string numberBString);
string RationalNumber::divideNumbersString(string numberAString, string numberBString);
bool RationalNumber::areEqualNumbersString(string numberAString, string numberBString);



void RationalNumber::NumDen(string inputNumberString, int& num, int& den)
{
    string numString = inputNumberString.substr(inputNumberString.find("/") + 1);
    string denString = inputNumberString.substr(inputNumberString.find("/") + 1);
}
bool RationalNumber::validNum(int num);
bool RationalNumber::validDen(int den);

