int parseQuantity(const char * text)
{
    if(text == nullptr)
    {
        return 0;
    }

    std::size_t length{std::strlen(text)};

    if(length == 0)
    {
        return 0;
    }
    else
    {
        static constexpr int asciiNumGap{48};
        int val{0};
        bool isNegative{false};
        for(int i{0}; i < length; ++i)
        {
            if(i == 0 && text[i] == '-')
            {
                isNegative = true;
                continue;
            }
            switch(text[i])
            {
                case '0': case '1': case '2': case '3': case '4':
                case '5': case '6': case '7': case '8': case '9':
                    val *= 10;
                    if(isNegative)
                    {
                        val -= static_cast<int>(text[i]) - asciiNumGap;
                    }
                    else
                    {
                        val += static_cast<int>(text[i]) - asciiNumGap;
                    }

                    break;
                default:
                    return val;
            }
        }
        return val;
    }
}
