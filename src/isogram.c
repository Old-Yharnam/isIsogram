#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>


bool is_isogram(const char phase[]){

    int freq[255] = {0};
    int i = 0;

    while (phase[i] != '\0'){
        freq[i] ++;
        i++;
    }

    int max = 0;
    for (int j = 0; j < 255; j++){
        if (freq[j] != 0){
            if (max == 0) max = freq[j];
            else if (freq[j] != max) return false;
        }
    }
    return true;

}
