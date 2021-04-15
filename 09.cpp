int parseQuantity(const char* array){

    // checking if pointer is nullptr or string is empty
	if(!array || array[0] == '\0'){
		return 0;
	}

	// determining size of non-empty string
	const char* s;
	for (s = array; *s; ++s);
	unsigned array_size = (s - array);


	// calculating value of prefix-number
	auto exit_value{0u};
    for(auto i = 0u; i < array_size; ++i){
        if(static_cast<int>(array[i]) - 48 < 0 || static_cast<int>(array[i]) - 48 > 9){
          break;
        }
        else{
            //numbers that have more than 9 digits are out of integer
            if(exit_value >= static_cast<int>(1e9)){
                return 0;
            }
            exit_value = (exit_value * 10 + array[i] - 48);
        }
    }

	return exit_value;
}
