int parseQuantity(const char * text)
{
    //pierwszy znak jest nie jest cyfra
    if(text == nullptr || *text < '0' || *text > '9')
        return 0;
    long long int quty{0};
    const char *text_begin = text;

    //ustawienie wskaznika za ostatnia cyfre
    while(*text != 0 && *text >= '0' && *text <= '9')
        text++;

    //wyznaczenie liczby z cyfr
    while(*text_begin == '0')
        text_begin++;
    while(text - text_begin > 10)
        text--;

    long long int multi=1;
    while(--text >= text_begin)
    {
        quty+=multi*(*text -'0');
        multi*=10;
    }
    if(quty>2147483647)
        quty/=10;
    return static_cast<int>(quty);
}
