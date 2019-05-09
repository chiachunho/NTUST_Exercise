//FormWord-inputmain1.cpp

int main()
{
	Form form1;
	form1.SetInputWord("SWIMMING");//設定Input
	form1.ProcessInputWord();//處理Input資訊
	form1.SetFileName("word.txt");//設定檔案名稱
	form1.Load_CompaerWord();//讀檔並且比較
	form1.PrintFoundWords();//印出符合的字
	return 0;
}