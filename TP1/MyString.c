#include "MyString.h"
#include <string.h>

// void * MyString_memcpy_ascend (void * target, void const * source, size_t n);
// void * MyString_memcpy (void * target, void const * source, size_t n);
// void * MyString_memcpy_descend (void * target, void const * source, size_t n);
// void * MyString_memmove (void * target, void const * source, size_t n);
// void * MyString_memchr (void const * block, int value, size_t n);
char * MyString_strpbrk (char const string[], char const accept[]){
    for(size_t k = 0; string[k] != '\0';k++){
    if(MyString_strchr(accept, string[k])!=NULL){
      return (char *) string + k;
    }
  }
  return NULL;
}
// int    MyString_memcmp (void const * block1, void const * block2, size_t n);
// void * MyString_memset (void * block, int value, size_t n);
size_t MyString_strlen (char const string[]){
    size_t longuer = 0;
    while(string[longuer]!='\0'){
    longuer++;
  }
  return longuer;
}

char * MyString_strchr (char const string[], int character){
    if(character=='\0') return (char *) string + MyString_strlen(string);
    for(size_t k =0; string[k] != '\0'; k++){
        if(string[k] == character){
            return (char *) string + k;
        }
    }
    return NULL;
}
char * MyString_strrchr (char const string[], int character){
    if(character=='\0'){
        return (char *) string + MyString_strlen(string);
    }
    for(size_t k = MyString_strlen(string)-1; string[k] != '\0'; k--){
        if(string[k] == character){
            return (char *) string + k;
        }
  }
  return NULL;
}

// int    MyString_compareChar (char char1, char char2); 
// size_t MyString_commonPrefixLength (char const string1[],
//                                     char const string2[]);
// size_t MyString_commonPrefixLengthUpTo (char const string1[], 
//                                         char const string2[], 
//                                         size_t max_length); 

// int    MyString_strcmp (char const string1[], char const string2[]);
// int    MyString_strncmp (char const string1[], char const string2[], size_t n);
// char * MyString_strstr (char const string[], char const substring[]);
// char * MyString_strcpy (char target[], char const source[]);
// char * MyString_strncpy (char target[], char const source[], size_t n);
// char * MyString_strcat (char target[], char const source[]);
// char * MyString_strncat (char target[], char const source[], size_t n);
// size_t MyString_strspn (char const string[], char const accept[]);
// size_t MyString_strcspn (char const string[], char const reject[]);
// char * MyString_strdup (char const string []);
// char * MyString_strndup (char const string [], size_t n);

// char * MyString_trim (char const string[], char const blanks[]);

// #endif

