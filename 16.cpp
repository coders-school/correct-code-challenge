int parseQuantity(const char *data)
{
    constexpr int maxInt = 2147483647;
    unsigned long long result = 0;
    int resultSign = 1; //positive
    auto dataPtr = data;

    if (dataPtr == nullptr)
    {
        return 0;
    }

    if (dataPtr[0] == '-')
    {
        resultSign = -1;
        ++dataPtr;
    }

    bool oneTime = true;
    for (char c = *dataPtr; c; c = *++dataPtr)
    {
        auto cInteger = static_cast<unsigned>(c);

        if (c == '\0' || cInteger > 57 || cInteger < 48)
        {
            break;
        }

        if (oneTime)
        {
            result = static_cast<unsigned long long>(c) - 48;
            oneTime = false;
        }
        else
        {
            result *= 10;
            result += static_cast<unsigned long long>(c) - 48;

            if (result > maxInt)
            {
                return 0;
            }
        }
    }

    result *= resultSign;

    if (result)
    {
        return static_cast<int>(result);
    }

    return 0;
}
