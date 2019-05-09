//test HotDogStand Class

#include <vector>
#include <string>
void catStringInt(std::string &str, int num)
{
	if (num == 0)
	{
		str += '0';
		return;
	}
	while (num > 0)
	{
		str += (num % 10) + '0';
		num /= 10;
	}
}

int main(void)
{
	std::vector<HotDogStand> vecHotDogStand;
	for (int i = 0; i < 100; ++i)
	{
		std::string name = "Stand";
		catStringInt(name, i);
		vecHotDogStand.push_back(HotDogStand(name, i));
	}
	vecHotDogStand[99].justSold();
	vecHotDogStand[99].print();
	std::cout << "Total Sold : " << HotDogStand::allStandsoldAmount() << std::endl;
	return 0;
}