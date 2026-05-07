
#include "../src/isogram.h"
#include "vendor/unity.h"
#include <stdlib.h>

bool is_isogram(const char phase[]){

    int freq[255] = {0}
    int i = 0;

    while (phase[i] != '\0'){
        freq[i] ++;
        i++
    }

    int max = 0;
    for (int j = 0; j < 255; j++){
        if (freq[j] != 0){
            if (max == 0) max = freq[j];
            else if (freq[j] != max) return false;)
        }
    }
    return true;

}


void setUp(){}

void tearDown(){}

// this is a unit test
void test_empty_string(void) { 
    TEST_ASSERT_TRUE(is_isogram("")); 
}

// this is a unit test
void test_short_isograms(void) {
    TEST_ASSERT_TRUE(is_isogram("abc"));
    TEST_ASSERT_TRUE(is_isogram("opq"));
}

void test_short_non_isograms(void) {
    TEST_ASSERT_FALSE(is_isogram("abca"));
    TEST_ASSERT_FALSE(is_isogram("opqp"));
}


int main(void) {
    UnityBegin("isIsogram");

    RUN_TEST(test_empty_string);
    RUN_TEST(test_short_isograms);
    RUN_TEST(test_short_non_isograms);

    UnityEnd();
    return 0;
}
