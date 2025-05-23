#include <vector>
#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Knyazev_MathTask.h"

using namespace cute;

void testUserInputEmpty()
{
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInputLetter()
{
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInputDigitLetterValue()
{
    string str = "5a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInputNegativeValue()
{
    string str = "-5";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}
void testCalculateS(){
    int a = 3, b = 5, expected = 15;
    int actual = CalcRectangleArea(a, b);
    ASSERT_EQUAL (expected, actual);
}

int main(){
    suite s;
    s.push_back(CUTE(testCalculateS));
    s.push_back(CUTE(testUserInputEmpty));
    s.push_back(CUTE(testUserInputLetter));
    s.push_back(CUTE(testUserInputDigitLetterValue));
    s.push_back(CUTE(testUserInputNegativeValue));

    ide_listener<> listener;
    makeRunner(listener)(s, "All tests");
    
    return 0;
}