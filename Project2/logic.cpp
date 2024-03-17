

int arithmetic_mean_withoutt_aking_into_account_the_min_and_max_values_of_the_vector
(int* vector, int size) {
	for (int i = 0; i < size; i++) {
		if (*(vector + i) <= 0) {
			return -1;
		}
	}
	int min = 2147483647;
	int max = -1;
	int arithmetic = 0;
	int count = 0;

	for (int j = 0; j < size; j++) {
		if (*(vector + j) > max) {
			max = *(vector + j);
		}
	}
	for (int k = 0; k < size; k++) {
		if (*(vector + k) < min) {
			min = *(vector + k);
		}
	}

	for (int l = 0; l < size; l++) {
		if (*(vector + l) != min && *(vector + l) != max) {
			arithmetic += *(vector + l);
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