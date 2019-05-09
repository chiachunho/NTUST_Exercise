#include "HotDogStand.h"

//test HotDogStand Class
int main(void)
{
	HotDogStand stand1("Stand1", 0);
	HotDogStand stand2("Stand2", 100);
	HotDogStand stand3("Stand3");
	stand1.justSold();
	stand2.justSold();
	stand3.justSold();
	stand1.print();
	stand2.print();
	stand3.print();
	std::cout << "Total Sold : " << HotDogStand::allStandsoldAmount() << std::endl;
	return 0;
}


//test HotDogStand Class

//#include <vector>
//#include <string>
//void catStringInt(std::string &str, int num)
//{
//	if (num == 0)
//	{
//		str += '0';
//		return;
//	}
//	while (num > 0)
//	{
//		str += (num % 10) + '0';
//		num /= 10;
//	}
//}
//
//int main(void)
//{
//	std::vector<HotDogStand> vecHotDogStand;
//	for (int i = 0; i < 100; ++i)
//	{
//		std::string name = "Stand";
//		catStringInt(name, i);
//		vecHotDogStand.push_back(HotDogStand(name, i));
//	}
//	vecHotDogStand[99].justSold();
//	vecHotDogStand[99].print();
//	std::cout << "Total Sold : " << HotDogStand::allStandsoldAmount() << std::endl;
//	return 0;
//}