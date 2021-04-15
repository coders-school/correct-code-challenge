// lib function
// should work standalone, only core C++
// no UB, no exceptions
// context: online shop, frontend in browser, backend server
// text box with quantity of products
// content of textbox is send as a string
// function is called on the string
// parse a string and return int if possible
// parsing from left to right, stop on invalid character

// "123" -> 123 (int)
// "asd" -> 0
// "" -> 0
// "12b4" -> 12
// "a12" -> 0
// "-4" -> 0
// "+4" -> 0
// "3245783492057348905734290857349857340289" -> 0 or (preferred) parsing until possible
// "123.123" -> 123

// const char* not std::string
// INT_MAX

#include <iostream>

int parseQuantity(const char* str);

static int failed = 0;
static int total = 0;

void test(const char* input, int expected) {
    auto result = parseQuantity(input);
    if (result != expected) {
        failed++;
        std::cerr << "FAILED: \"" << input << "\" -> expected: " << expected << ", got " << result << '\n';
    }
    total++;
}

int main() {
    test("123", 123);
    test("asd", 0);
    test("", 0);
    test("12b4", 12);
    test("a12", 0);
    test("-4", 0);
    test("+4", 0);
    test("123.123", 123);
    test("123,123", 123);
    test("0", 0);
    test("2147483647", 2'147'483'647);
    test("002147483647", 2'147'483'647);
    test("0021474836471", 2'147'483'647);
    test("2147483647123", 2'147'483'647);
    test("2147483647000", 2'147'483'647);
    test("2147483648", 214'748'364);
    test("2147483640234525", 2'147'483'640);
    test("9876543210", 987'654'321);
    test("098765432109", 987'654'321);
    test("00000000000000000000000", 0);
    test("000000000000000000000001", 1);
    test("00000000000000000000000000000000000000098765432109", 987'654'321);
    test(" 123", 0);

    std::cout << "------------\n";
    std::cout << failed << "/" << total << " failed\n";
    std::cout << total - failed << "/" << total << " passed\n";

    if (failed == 0) {
        return 0;
    }
    return -1;
}