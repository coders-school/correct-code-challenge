int parseQuantity(const char * input)
{
    if(!input){
        return 0;
    }

    int output = 0;
    int i = 0;
    while(input[i] != '\0'){
        int temp =  static_cast<int>(input[i]);
        if(temp < 49 || temp > 57){
            if(i == 0){
                return 0;
            }
            else{
                return output;
            }
        }
        else{
            if(output >= static_cast<int>(1e9)){
                return 0;
            }
            output *= 10;
            output += temp - 48;
        }

        ++i;
    }

    return output;
}
