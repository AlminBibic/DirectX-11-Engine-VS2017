#include "StringConverter.h"

std::wstring StringConverter::StringToWide(std::string str)
{
	std::wstring wind_string(str.begin(), str.end());
	return wind_string;
}