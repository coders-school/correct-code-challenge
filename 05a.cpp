/**
 * Return parsing int from the const char *word.
 *
 * @param word const char* to be parsing
 * @return int of parsing word / 0 when word can't be parsed
 * / -1 when word is null / -2 when word is greater than max int size
 */
int parseQuantity(const char *word) {
    if (!word) {
        return -1; // word can't be null
    }
    if (*word < '0' || *word > '9') {
        return 0;
    }
    const char *wordPointerCopy = word;

    long int parsingResult = *wordPointerCopy - '0';
    // 2 147 483 647 -> max int size
    while (parsingResult <= 2147483647) {
        wordPointerCopy++;
        if (*wordPointerCopy >= '0' && *wordPointerCopy <= '9') {
            parsingResult *= 10;
            parsingResult += *wordPointerCopy - '0';
        } else {
            break;
        }
    }
    if (parsingResult > 2147483647) {
        return -2; // word can't be parsed (too much number)
    }
    return (int) parsingResult;
}
