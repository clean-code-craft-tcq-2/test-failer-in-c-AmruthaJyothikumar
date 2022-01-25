#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    int spacecount;
    char str[100];
    int i = 0, j = 0, k=0;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    assert(result == 25);  
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            sprintf(str,"%d | %s | %s\n",i * 5 + j, majorColor[i], minorColor[i]);
            for(k=0; str[k] != '|'; k++){
                spacecount++;
                break;
                }
        }
    }
    assert(spacecount == 2);
    printf("All is well (maybe!)\n");
    return 0;
}
