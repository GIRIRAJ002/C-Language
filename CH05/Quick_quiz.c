// Quick Quiz: Write a program with three functions
// 1. Good morning function which prints “good morning”.
// 2. Good afternoon function which prints “good afternoon”.
// 3. Good night function which prints “good night”.
// main() should call all of these in order 1→2→3
#include<stdio.h>

void GM(); // function prototype
void GM(){  // Function definition
    printf("Good morning\n");
}

void GA(); // function prototype
void GA(){  // Function definition
    printf("Good Afternoon\n");
}

void GN(); // function prototype
void GN(){  // Function definition
    printf("Good Night\n");
}

int main(){
    GM();
    GA();
    GN();
    return 0;
}