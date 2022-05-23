#include <iostream>
#include <string>

bool IsPalindrome(std::string str);

int main()
{
	std::string input;

	std::cout << "This is a Palindrome checker." << std::endl;
	std::cout << "Type a string of letters below:" << std::endl;
	std::cin >> input;

	std::cout << IsPalindrome(input) << std::endl;

	return 0;
}

bool IsPalindrome(std::string str)
{
	std::string temp;
	temp = str;

	std::reverse(temp.begin(), temp.end());
	if (temp == str)
	{
		return true;
	}
	else
	{
		return false;
	}
}
