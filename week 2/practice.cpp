#include <iostream>
#include<string>

int main()
 //1-3
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	}
	{
		const std::string s = "anoter string";
		std::cout << s << std::endl;
	}

//1-4
	{
		{
			const std::string s = "a string";
			std::cout << s << std::endl;
			{
				const std::string s = "another string";
				std::cout << s << std::endl; };}
		
	}
//1-5
	{
		{
			std::string s = "a string";
			{
				std::string x = s + ", really";
				std::cout << s << std::endl;
				std::cout << x << std::endl;
			}
			
		}
		
	}
//1-6
	{
		std::cout << "What is your name? ";
		std::string name;
		std::cin >> name;
		std::cout << "Hello," << name << std::endl << "And what is yours? ";
		std::cin >> name;
		std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
		
	}
	return 0;
}
