

int the_arithmetic_mean_of_the_nonzero_elements_of_the_vector(int* vector, int size) {
	if (size <= 0) {
		return -1;
	}
	int arithmetic = 0;
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (*(vector + i) == 0) {
			arithmetic += i;
			count++;
		}
	}
	
	if (count == 0) {
		return -1;
	}
	else {
		return arithmetic / count;
	}
}