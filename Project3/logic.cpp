



bool logic(int* vector, int size) {
	if (size <= 0) {
		return false;
	}

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(vector + i) == *(vector + j)) {
				return true;
			}
		}
	}

	return false;
}