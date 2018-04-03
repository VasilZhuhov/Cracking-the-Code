void reverse(char* str) {
	char* end = str;
	char temp;
	while (*end != 0) {
		end++;
	}
	end--;
	while (str < end) {
		temp = *str;
		*str++ = *end;
		*end-- = temp;
	}
}