// Student ID: B10615043
// Date: April 14, 2018
// Last Update: April 14, 2018
// Problem statement: This C++ header to declare class Form.
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype> // islower

using namespace std;

class Form
{
private:
	string input;							//輸入的字
	string fileName;						//檔案名稱
	int info[127] = { 0 };					//Record input letter info
	vector <string> found;					//array to save found word

public:
	void SetInputWord(string inputWord);	//設定Input
	void ProcessInputWord();				//處理Input 的資訊
	void SetFileName(string fileName);		//設定檔案名稱
	void Load_CompaerWord();				//讀檔並且比較
	void PrintFoundWords();					//印出符合的字
};