#ifndef _KNYAZEV_MATHTASK_H_
#define _KNYAZEV_MATHTASK_H_

#include <iostream>
#include <string>
using namespace std;

//функция контроля вводимых данных
bool UserInput(string input) {
	//если строка пустая - ввод некорректен
	if (input.empty()) return false;
	//попытаться
	try {
		size_t pos;
		int number = stoi(input);

		if (pos != input.size()){
			return false;
		}

		string numStr = to_string(number);

		if (input != numStr){
			return false;
		}
}
	catch (...) //если возникла ошибка в блоке try
	{ return false; }
	return true;
}
//метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
	return NumberA * NumberB + 10 ;
}
#endif