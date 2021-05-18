bool rewrite_memories(int* begin, int* end, int* fake, unsigned int n) {
	if (end - begin == n - 1) {
		for (int i = 0; i < n; ++i) *(begin + i) = *(fake + i);
		return true;
	}
	else if (end - begin > n - 1) {
		for (int i = 0; i < n; ++i) *(begin + i) = *(fake + i);
		return false;
	}
	else for (int i = 0; i <= end - begin; ++i) *(begin + i) = *(fake + i);
	return false; 
}
