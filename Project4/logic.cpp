


bool logic(int* vector, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(vector + i) == *(vector + j)) {
				return false;
			}
		}
	}

	return true;
}