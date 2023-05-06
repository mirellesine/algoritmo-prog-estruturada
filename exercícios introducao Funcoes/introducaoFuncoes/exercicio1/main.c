//
//  main.c
//  exercicio1
//
//  Created by Mirelle Sine on 06/05/23.
//

#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(int argc, const char * argv[]) {
    int z;
    z = max(4, 3);
    printf("%d", z);
    
    
    return 0;
}
