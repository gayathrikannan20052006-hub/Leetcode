int totalNumbers(int* digits, int n) {
    int frequencies[10] = {0};
    int result = 0;
    bool numbers[3000] = {false};
    for (int i = 0; i < n; ++i) {
        ++frequencies[digits[i]];
    }
    for (int i = 0; i < 10; ++i) {
        if (frequencies[i] > 0 && i != 0) {
            --frequencies[i];
            for (int j = 0; j < 10; ++j) {
                if (frequencies[j] > 0) {
                    --frequencies[j];
                    for (int z = 0; z < 10; ++z) {
                        if (frequencies[z] > 0 && (z % 2 == 0)) {
                            const int sum = (i << 8) + (j << 4) + z;
                            if (numbers[sum] == false) {
                                ++result;
                                numbers[sum] = true;
                            }
                        }
                    }
                    ++frequencies[j];
                }
            }
            ++frequencies[i];
        }
    }
    return result;
}
