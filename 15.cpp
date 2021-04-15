int parseQuantity(const char* text)
{
    if(text[0] < '0' || text[0] > '9' || strlen(text) < 1)
        return 0;

    int digits = 0;

    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] >= '0' && text[i] <= '9')
            digits = 10 * digits + int(text[i]) - 48;
    }

    return digits;
}
