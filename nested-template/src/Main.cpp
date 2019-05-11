#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <type_traits>

using namespace std;

template<template<class...> class... T>
class A
{
};

int main()
{
	cout << "hi" << endl;

	A<vector, map, set> a;

	cout << &a << endl;

	return 0;
}
