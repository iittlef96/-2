#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha;
	std::cout << "Какое задание вы хотите проверить ? 1, 2, 3, 4, 5, 6, 7 ";
	std::cin >> zadacha;
	//задание1
	int num;
	int num2;
	int num3;
	int count = 0;
	//задание2
	int num2_1;
	int num2_2;
	int num2_3;
	int count2 = 0;
	//задание3
	int num3_1 = 1;
	int newNum = 0;
	int mult = 1;
	int digit;
	//задание4
	int A;
	int B = 1;
	//задание5
	 int sum5 = 0;
	int num5_1;
	//задание6
	int num6;
	//задание7
	int num7_1;
	int num7_2;

	if (zadacha == 1)
	{
		for (int i = 100; i < 1000; i++)
		{
			num = i % 10;
			num2 = (i / 10) % 10;
			num3 = i / 100;
			if (num == num2 || num == num3 || num2 == num3)
			{
				std::cout << i << "\n";
				count++;
			}


		}
		std::cout << "Количество " << count << "\n";
	}
	else if (zadacha == 2)
	{
		for (int i = 100; i < 1000; i++)
		{
			num2_1 = i % 10;
			num2_2 = (i / 10) % 10;
			num2_3 = i / 100;
			if (num2_1 != num2_2 && num2_1 != num2_3 && num2_2 != num2_3)
			{
				std::cout << i << "\n";
				count2++;
			}


		}
		std::cout << "Количество " << count2 << "\n";
	}
	else if (zadacha == 3)
	{
		std::cout << "Введите число";
		std::cin >> num3_1;
		while (num3_1 != 0) {
			 digit = num3_1 % 10;
			if (digit != 3 && digit != 6) {
				newNum += digit * mult;
				mult *= 10;
			}
			num3_1 /= 10;
		}


		std::cout << "Число без 3 и 6: " << newNum;
	}
	else if (zadacha == 4)
	{
		std::cout << "Введите число А";
		std::cin >> A;
			for (int B = 1; B <= A; B++)
			{
				if (A % (B * B) == 0 && A % (B * B * B) != 0) 
				{
					std::cout << B << " ";
				}
			}
		

	}
	else if (zadacha == 5)
	{
		std::cout << "Введите целое число: ";
		std::cin >> num5_1;
		while (num5_1 > 0) {
			sum5 += num5_1 % 10;
			num5_1 /= 10;
		}

		if (sum5 * sum5 * sum5 == num5_1 * num5_1) {
			std::cout << "Куб суммы цифр числа равен " << num5_1 * num5_1 << std::endl;
		}
		else {
			std::cout << "Куб суммы цифр числа не равен " << num5_1 * num5_1 << std::endl;
		}
	}
	else if (zadacha == 6)
	{
		std::cout << "Введите целое число: ";
		std::cin >> num6;
		std::cout << "Все целые числа, на которое число " << num6 << " делится без остатка: ";

		for (int i = 1; i <= num6; i++) {
			if (num6 % i == 0) {
				std::cout << i << " ";
			}
		}
	}
	else if (zadacha == 7)
	{
		std::cout << "Введите два целых числа: ";
		std::cin >> num7_1>> num7_2;
		std::cout << "Все целые числа, на которые число " << num7_1 <<" и " << num7_2 << " делятся без остатка: ";
		if (num7_1 > num7_2)
		{
			for (int i = 1; i <= num7_1; i++) {
				if (num7_1 % i == 0 && num7_2 % i == 0) {
					std::cout << i << " ";
				}
			}
		}
		else if (num7_1 < num7_2)
		{
			for (int i = 1; i <= num7_1; i++) {
				if (num7_1 % i == 0 && num7_2 % i == 0 ) {
					std::cout << i << " ";
				}
			}

		}
		else
		{
			for (int i = 1; i <= num7_1; i++) {
				if (num7_1 % i == 0 && num7_2 % i == 0) {
					std::cout << i << " ";
				}
			}
		}
	}
	else
	{
		std::cout << "Только 7 задания)";
	}

	return 0;
}