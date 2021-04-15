int parseQuantity(const char * c)
{
    // we can assume that none will create a different Unicode table that does not start with regular part of ASCII code.

    // to be clear - we parse count of something, so the number can be only 0 or higher, no place for 0123 or 00003
    // 0123 -> 123 and 00003 -> 3 because we don't need here these 0s.
    // oh, and there will be cases when string is such as long or more as max digits in OS int or even long long
    // but we cant do more than that
    int i = 0;
    while(*c > 47 && *c < 58)
    {
        i = i * 10 + (int)(*c - 48); // it wasnt meant to be fast ;)
        c++;
    }
    return i;
}
