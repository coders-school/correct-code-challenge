int parseQuantity(const char *pars) {
    char parsed[10];
    if(pars[0] < 48 || pars[0] > 57) {
        return 0;
    } else {
        int i = 0;
        int j = 0;
        while(pars[i] != '\0' && j < 10) {
            if(pars[i] >= 48 && pars[i] <= 57) {
                parsed[j++] = pars[i];
            }
            i++;
        }
        while(j < 10) {
            parsed[j++] = '\0';
        }
        if(atoi(parsed) < 0) {
            int j = 9;
            while(j < 10 && parsed[j] != '\0') {
                parsed[j++] = '\0';
            }

        }
    }
    return atoi(parsed);
}
