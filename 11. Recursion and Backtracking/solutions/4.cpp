string longestCommonSubsequence(string s1, string s2) {
	if (s1.length() == 0 || s2.length() == 0) {
		return "";
 	} else if (s1[0] == s2[0]) {
 		return s1[0] + longestCommonSubsequence(s1.substr(1), 
 							s2.substr(1));
 	} else {
 		string choice1 = longestCommonSubsequence(s1, s2.substr(1));
		string choice2 = longestCommonSubsequence(s1.substr(1), s2);
		if (choice1.length() >= choice2.length()) {
			return choice1;
		} else {
			return choice2;
		}
	}
}