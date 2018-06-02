#pragma once
#ifndef BIGNUM_H
#define BIGNUM_H

#include<iostream>
#include<vector>

using namespace std;

class BigNum {
public:
	int x, y;
};

BigNum operator +(const BigNum&left, const BigNum&right);
BigNum operator -(const BigNum&left, const BigNum&right);
BigNum operator *(const BigNum&left, const BigNum&right);
BigNum operator /(const BigNum&left, const BigNum&right);
BigNum operator %(const BigNum&left, const BigNum&right);
void displayAdd();
void displaySub();
void displayMul();
void displayDiv();
void displayMod();
#endif