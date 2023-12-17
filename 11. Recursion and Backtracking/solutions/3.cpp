bool canMakeSumHelper(int* v, int size, int target, int cur, int index) {
	if (index >= size) {
		return cur == target;
	}
	return canMakeSumHelper(v, target, cur + v[index], index + 1) ||
		   canMakeSumHelper(v, target, cur, index + 1);
}

bool canMakeSum(int* v, int size, int target) {
	return canMakeSumHelper(v, size, target, 0, 0);
}