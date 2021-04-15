//jesli FALSE to liczba
bool isNAN(const char& c)
{
    return  (c < 48 || c > 57);
}

int parseQuantity(const char *text)
{
    int len=0,digit=0;
    const char *temp = text;
    const int max_int =  2147483647;

    //sprawdzam czy nie jest puste
    if((text != nullptr) && (text[0] =='\0'))
        return digit;

    //sprawdzam czy pierwszy znak to 0 lub Nie-liczba
    //nie ma z zalozeniach ale zakladam ze jak
    //pierszy znak '0' to zwaracam tez 0
    else if ((text[0]) == 48)
        return digit;

    else if (isNAN(text[0]))
        return digit;

    //jesli pierwszy znak jest liczba
    //parsuje do pierwsego wystapieinia znaku nie bedacego liczba
    else
    {
        while(*text != '\0')
        {
            if(isNAN(*text))
                break;
            ++len;
            ++text;
        }

    //tworze dynamicznie tablice i zapisuje len znakow z pierwotnego char *
    //nowa tablice wykorzystam do konwersji znakow z tablcy na int

        char *newChar= new char[len];
        for(int i=0; i < len; ++i)
        {
            newChar[i]= temp[i];
        }

    //towrze wyjsciowy digit
        for(int j=0; j < len; ++j)
        {
            digit = (digit * 10) + (newChar[j] - '0');
            if(digit < 0)
            {
                digit = -1;
                break;
            }

        }
        delete [] newChar;
    }

    if(digit > max_int || digit < 0)
        digit =0;

    return digit;
}
