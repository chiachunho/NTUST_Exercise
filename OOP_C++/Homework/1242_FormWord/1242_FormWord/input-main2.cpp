#include "Form.h"
//inputmain2.cpp

int main()
{
	Form form2;
	form2.SetInputWord("calculator");//設定Input
	form2.ProcessInputWord();//處理Input資訊
	form2.SetFileName("word.txt");//設定檔案名稱
	form2.Load_CompaerWord();//讀檔並且比較
	form2.PrintFoundWords();//印出符合的字
	system("pause");
	return 0;
}