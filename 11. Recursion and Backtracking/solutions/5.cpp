string crackHelper(string soFar, int maxLength) {
	if (login(soFar)) {
		return soFar;
	}
	if (soFar.size() == maxLength) {
		return "";
	}
	for (char c = 'a'; c <= 'z'; c++) {
		string password = crackHelper (soFar + c, maxLength);
		if (password != "") {
			return password;
		}
 		// Also check uppercase
 		char upperC = toupper(c);
 		password = crackHelper (soFar + upperC, maxLength);
		if (password != "") {
 			return password;
 		}
 	}
	return "";
}

string crack(int maxLength) {
	if (maxLength < 0) {
 		throw maxLength;
	}
 	return crackHelper("", maxLength);
}