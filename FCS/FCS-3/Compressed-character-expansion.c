#include <stdio.h>
#include<string.h>
char a[105];
int main() {
    int n = 0;
    scanf("%s", a);
    n = strlen(a);

    int i = 0;
    long long int count = 0;

    while (i < n) {
        // { - }:
        if (a[i] == '{') {
            // { { }:
            if (a[i] == '{' && a[i + 1] == '{' && a[i + 2]== '}') {
                //{ { }  { 2 }:
                if (i + 5 < n) {
                    if (a[i + 3] == '{' && a[i + 5]== '}' && a[i + 4] != '{' && a[i + 4] != '}') {
                        count = (int) a[i + 4] - 48;
                        for (int j = 0; j < count; j++) {
                            printf("{");
                        }
                        i = i + 6;
                    }else {
                        if (a[i + 3] == '{' && (a[i + 4] != '{' && a[i + 4] != '}') && (a[i + 5] != '{' && a[i + 5] != '}') && a[i + 6] == '}') {
                            count = ((int) a[i + 4] - 48) * 10 + ((int) a[i + 5] - 48);
                            for (int j = 0; j < count; j++) {
                                printf("%c", a[i + 1]);
                            }
                            i = i + 7;
                        } else {
                            if (a[i + 3] == '{' && a[i + 5] == '}' && (a[i + 4] == '{' || a[i + 4] == '}')) {
                                // i + 5 < n && a[i + 3] == '{' && a[i + 5]== '}' && (a[i + 4] == '{' || a[i + 4] == '}')
                                printf("{");
                                i = i + 3;
                            } else if (a[i + 3] != '{') {
                                printf("{");
                                i = i + 3;
                            }
                        }
                    }
                } else {
                    // { { }  i + 3 < n :
                    printf("{");
                    i = i + 3;
                }
            }else if (a[i] == '{' && a[i + 1] != '{' && a[i + 1] != '}') {
                printf("%c", a[i + 1]);
                i = i + 3;
            }
            //{ } }:
            if (a[i] == '{' && a[i + 1] == '}' && a[i + 2]== '}') {
                //{ } }  { 2 }:
                if (i + 5 < n) {
                    if (a[i + 3] == '{' && a[i + 5] == '}' && a[i + 4] != '{' && a[i + 4] != '}') {
                        count = (int) a[i + 4] - 48;
                        for (int j = 0; j < count; j++) {
                            printf("}");
                        }
                        i = i + 6;
                    } else {
                        if (a[i + 3] == '{' && (a[i + 4] != '{' && a[i + 4] != '}') && (a[i + 5] != '{' && a[i + 5] != '}') && a[i + 6] == '}') {
                            count = ((int) a[i + 4] - 48) * 10 + ((int) a[i + 5] - 48);
                            for (int j = 0; j < count; j++) {
                                printf("%c", a[i + 1]);
                            }
                            i = i + 7;
                        }else {
                            if (a[i + 3] == '{' && a[i + 5] == '}' && (a[i + 4] == '{' || a[i + 4] == '}')) {
                                // i + 5 < n && a[i + 3] == '{' && a[i + 5]== '}' && (a[i + 4] == '{' || a[i + 4] == '}')
                                printf("}");
                                i = i + 3;
                            } else if (a[i + 3] != '{') {
                                printf("}");
                                i = i + 3;
                            }
                        }
                    }
                } else {
                    // { } }  i + 3 < n :
                    printf("}");
                    i = i + 3;
                }
            }else if (a[i] == '}' && a[i + 1] != '{' && a[i + 1] != '}') {
                printf("%c", a[i + 1]);
                i = i + 3;
            }

        }else if (a[i] != '{') { // a[i] != {
            if (a[i + 1] == '{' && (a[i + 2] != '{' && a[i + 2] != '}') && a[i + 3] == '}') {
                count = (int)a[i + 2] - 48;
                for (int j = 0; j < count; j++) {
                    printf("%c", a[i]);
                }
                i = i + 4;
            } else {
                if (a[i + 1] != '{' ){
                    printf("%c", a[i]);
                    i++;
                }
                if (a[i + 1] == '{') {
                    if ((a[i + 2] != '{' && a[i + 2] != '}') && (a[i + 3] != '{' && a[i + 3] != '}')) {
                        count = ((int)a[i + 2] - 48) * 10 + ((int)a[i + 3] - 48);
                        for (int j = 0; j < count; j++) {
                            printf("%c", a[i]);
                        }
                        i = i + 5;
                    }else if ((a[i + 2] == '{' || a[i + 2] == '}')){
                        printf("%c", a[i]);
                        i = i + 1;
                    }
                }

            }

        }
    }



}