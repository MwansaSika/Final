#pragma once
#ifndef BIGNUM_H
#define BIGNUM_H

#include<iostream>
#include<vector>

using namespace std;

class BigNum {
public:
	///<int members 
	int x, y;
};
///<declaring overloading operator+ arithmetic
BigNum operator +(const BigNum&left, const BigNum&right);
///<declaring overloading operator- arithmetic
BigNum operator -(const BigNum&left, const BigNum&right);
///<declaring overloading operator* arithmetic
BigNum operator *(const BigNum&left, const BigNum&right);
///<declaring overloading operator/ arithmetic
BigNum operator /(const BigNum&left, const BigNum&right);
///<declaring overloading operator% arithmetic
BigNum operator %(const BigNum&left, const BigNum&right);

///<declaring add function for display
void displayAdd();
///<declaring sub function for display
void displaySub();
///<declaring multiplication function for display
void displayMul();
///<declaring division function for display
void displayDiv();
///<declaring modulation function for display
void displayMod();
#endif