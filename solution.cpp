int parseQuantity(const char* str) {
    int maxInt = 2'147'483'647;
    if (sizeof(int) == 2) {
        maxInt = 32'767;
    }
    if (sizeof(int) == 8) {
        maxInt = 9'223'372'036'854'775'807;
    }

    int result = 0;
    for (int i = 0;; i++) {
        int value = str[i] - '0';
        if (value >= 0 && value <= 9 && result <= (maxInt - value) / 10) {  // overflow check
            result = 10 * result + value;
        } else {
            return result;
        }
    }
}
