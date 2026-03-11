//1-4.cpp
#include <iostream>
#include <string>

int main(void)
{
	{
		const std::string s = "a string";
		std::count << s << std::endl;
		{
			const std::string s = "another string";
			std::count << s << std::endl; }}
	return 0;
}
