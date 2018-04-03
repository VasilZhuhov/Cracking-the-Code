#include<string>
void remove(std::string str) {
	int len = str.length();
	int passed = 1;
	for (int i = 1; i < len; ++i) {
		int j = 0;
		for (j = 0; j < passed; ++j) {
			if (str[i] == str[j]) {
				break;
			}
		}
		if (j == passed) {
			str[passed] = str[i];
			++passed;
		}
		str[passed] = '0';
	}
}