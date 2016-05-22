// A simple function to print reversed version of the given char array.

void ReverseString(char* word){
    // Iteration counter.
    int counter = 0;

    // Print the reversed string.
    for(counter = strlen(word) - 1; counter >= 0; counter--){
        printf("%c", word[counter] );
    }
}
