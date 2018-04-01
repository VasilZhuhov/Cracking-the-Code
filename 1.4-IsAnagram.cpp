#include "string"
bool IsAnagram(std::string s1, std::string s2) {
	int len1 = s1.length();
	int len2 = s2.length();

	int  i = 0, j = len2 - 1;
	while (i < len1)
		if (s1[i] = s2[j]) {
			i++;
			j--;
		}
		else {
			return false;
		}
		return true;
}