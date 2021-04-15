bool isValidDigit(const char digit)
{
    return (digit >= '0' && digit <= '9') ? true : false;
}

int parseQuantity(const char* in)
{
    if (!in)
    {
        return 0;
    }

    size_t index = 0;

    do
    {
        if (isValidDigit(in[index]) && index < 10)
        {
            index++;
        }
        else
        {
            break;
        }
    } while (in[index] != 0);

    uint64_t quantity = 0;
    uint64_t pow = 1;

    while (index > 0)
    {
        quantity += (uint64_t (in[index - 1] - '0')) * pow;
        pow *= 10;
        index--;
    }

    if (quantity > 2147483647u)
    {
        return 0;
    }

    return int(quantity);
}
