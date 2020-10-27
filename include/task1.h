#pragma once

template<typename T>
bool Less(T a, T b)
{
	if (a < b)
		return true;
	return false;
}

template<>
bool Less<char*>(char* a, char* b)
{
	unsigned int i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] == b[i])
		{
			++i;
			continue;
		}
		if (a[i] < b[i]) return true;
		return false;
	}
}