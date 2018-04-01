#include "string"
bool isDuplicated(std::string str) {
	bool result = false;
	bool controlArray[256];
	for (int i = 0; i < str.length(); i++) {
		int val = str[i];
		if (controlArray[val] == true) {
			result = true;
			break;
		}

		controlArray[val] = true;
	}
	return result;

}