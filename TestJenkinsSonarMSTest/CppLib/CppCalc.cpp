#include "stdafx.h"
#include "CppCalc.h"

void foo(int unused) {}

double CppCalc::add(double a, double b) { return a + b; }
double CppCalc::sub(double a, double b) { return a - b; }
double CppCalc::mul(double a, double b) { return a * b; }
double CppCalc::div(double a, double b) { return a / b; }

CppCalc::CppCalc(){ }
CppCalc::~CppCalc() { }
