int parseQuantity(const char* text) {
    if (text[0] < 48 || text[0] > 57)
        return 0;

    if (text[0] == '\0')
        return 0;

    const int arraySize = (65535 / sizeof(int)) / 4;
    char parsed[arraySize] = {'\0'};
    int i = 0, j = 0;
    while (!(text[i] < 48 || text[i] > 57) && i < arraySize - 1) {
        parsed[j++] = text[i];
        i++;
    }
    parsed[arraySize - 1] = '\0';

    int digitCount = 0;
    for (int i = 0; i < arraySize - 2; i++) {
        if (parsed[i])
            digitCount++;
    }

    long long int extractedNumber = 0;
    int extractedDigit = 0;
    long long int k = 1;
    for (int i = digitCount - 1; i >= 0; i--) {
        extractedDigit = (int)(parsed[i]) - 48;
        extractedNumber += extractedDigit * k;
        k *= 10;
    }

    long long int maximumValue = 1;
    ;
    for (int i = 1; i < 8 * sizeof(int); i++) {
        maximumValue *= 2;
    }
    long long int maximumIntValue = maximumValue - 1;

    while (extractedNumber > maximumIntValue) {
        extractedNumber /= 10;
    }
    int quantity = extractedNumber;
    return quantity;
}