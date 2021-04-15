// Sprawdzane przy użyciu OnlineGDB w wersji C++ 14

constexpr long INT_MAX = 2'147'483'647;
constexpr int ORDER_OF_MAGNITUDE_FACTOR = 10;

int parseQuantity(const char* text);
bool isNumber(char c);
int calcLength(const char* text);
bool mayOverflow(long value);

bool isNumber(char c)
{
    return (c >= 48 && c <= 57);
}

int calcLength(const char* text)
{
    int length = 0;

    while (text[length] != '\0')
    {
        ++length;
    }

    return length;
}

bool mayOverflow(long value)
{
    return value > INT_MAX;
}

int parseQuantity(const char* text)
{
    int orderOfMagnitude = 1;
    int total = 0;

    for (int i = calcLength(text) - 1; i >= 0;
        --i, orderOfMagnitude *= ORDER_OF_MAGNITUDE_FACTOR)
    {
        if (!isNumber(text[i]))
        {
            return 0;
        }

        // Convert char number to integer number: '9' -> 9 etc...
        int numberFromText = (int)text[i] - (int)'0';

        if (mayOverflow((long)orderOfMagnitude * (long)numberFromText))
        {
            return 0;
        }

        int temp = orderOfMagnitude * numberFromText;

        if (mayOverflow( (long)total + (long)temp))
        {
            return 0;
        }

        total += temp;
    }

    return total;
}