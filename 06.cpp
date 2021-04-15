namespace {
    int parse(const char*);
    bool isNumber(const char);
    bool isInRange(const long long);
    int toInt(const char);
    int toInt(const long long);
}

int parseQuantity(const char* str) {
    if (!str) {
        return 0;
    }
    return parse(str);
}

namespace {
    int parse(const char* str) {
        long long result = 0;
        int index = -1;
        while (str[++index]) {
            if (!isNumber(str[index])) {
                return toInt(result);
            }
            result *= 10;
            result += toInt(str[index]);
            if (!isInRange(result)) {
                return 0;
            }
        }
        return toInt(result);
    }

    bool isNumber(const char character) {
        return (character >= '0' && character <= '9');
    }

    bool isInRange(const long long result) {
        return (static_cast<long long>(static_cast<int>(result)) == result);
    }

    int toInt(const char character) {
        return static_cast<int>(character - '0');
    }

    int toInt(const long long value) {
        return static_cast<int>(value);
    }
}
