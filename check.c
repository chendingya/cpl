#include <stdio.h>
#include <string.h>

int main(){
    char s[8];
    gets(s);
    int l=strlen(s);
    if(l==4){
        for(int i=0;i<l-1;i++){
            printf("%c.",s[i]);
        }
        printf("%c",s[l-1]);
    }
    if(l==5) {
        char k[4][10] = {0};
        int a[4] = {0};
        int t[5];
        for (int i = 0; i < l; i++) {
            t[i] = (int) s[i] - 48;
        }
        if (t[0] != 0) {
            int x = t[0] * 10 + t[1];
            if (x > 0 && x < 256) {
                k[0][0] = s[0];
                k[0][1] = s[1];
                k[0][2] = '.';
                k[0][3] = s[2];
                k[0][4] = '.';
                k[0][5] = s[3];
                k[0][6] = '.';
                k[0][7] = s[4];
                a[0] = x * 256 * 256 * 256 + t[2] * 256 * 256 + t[3] * 256 + t[4];
            }
        }
        if (t[1] != 0) {
            int x = t[1] * 10 + t[2];
            if (x > 0 && x < 256) {
                k[1][0] = s[0];
                k[1][1] = '.';
                k[1][2] = s[1];
                k[1][3] = s[2];
                k[1][4] = '.';
                k[1][5] = s[3];
                k[1][6] = '.';
                k[1][7] = s[4];
                a[1] = t[0] * 256 * 256 * 256 + x * 256 * 256 + t[3] * 256 + t[4];
            }
        }
        if (t[2] != 0) {
            int x = t[2] * 10 + t[3];
            if (x > 0 && x < 256) {
                k[2][0] = s[0];
                k[2][1] = '.';
                k[2][2] = s[1];
                k[2][3] = '.';
                k[2][4] = s[2];
                k[2][5] = s[3];
                k[2][6] = '.';
                k[2][7] = s[4];
                a[2] = t[0] * 256 * 256 * 256 + t[1] * 256 * 256 + x * 256 + t[4];
            }
        }
        if (t[3] != 0) {
            int x = t[3] * 10 + t[4];
            if (x > 0 && x < 256) {
                k[3][0] = s[0];
                k[3][1] = '.';
                k[3][2] = s[1];
                k[3][3] = '.';
                k[3][4] = s[2];
                k[3][5] = '.';
                k[3][6] = s[3];
                k[3][7] = s[4];
                a[3] = t[0] * 256 * 256 * 256 + t[1] * 256 * 256 + t[2] * 256 + x;
            }
        }
        int b[4];
        for(int i=0;i<4;i++){
            b[i]=-1;
        }
        for (int i = 0; i < 4; i++) {
            if(a[i]!=0){
                b[i] = a[i];
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (a[i] >= a[j]) {
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
        for (int i = 0; i < 4; i++) {
            if (b[i] == a[0]&&a[0]!=0) { b[i] = 0; }
            if (b[i] == a[1]&&a[1]!=0) { b[i] = 1; }
            if (b[i] == a[2]&&a[2]!=0) { b[i] = 2; }
            if (b[i] == a[3]&&a[3]!=0) { b[i] = 3; }
        }
        for (int i = 0; i < 3; i++) {
            int p = b[i];
            if (p != -1) {
                for (int j = 0; j < 8; j++) {
                    printf("%c", k[p][j]);
                }
                printf(",");
            }
        }
        int q=b[3];
        if(q!=-1){for (int j = 0; j < 8; j++) {
                printf("%c", k[q][j]);
            }
        }
    }
    if(l==6){
        char k[10][10] = {0};
        long long a[10] = {0};
        int t[6];
        for (int i = 0; i < l; i++) {
            t[i] = (int) s[i] - 48;
        }
        if (t[0] != 0) {
            long long x = t[0] * 100 + t[1]*10+t[2];
            if (x > 0 && x < 256) {
                k[0][0] = s[0];
                k[0][1] = s[1];
                k[0][2] = s[2];
                k[0][3] = '.';
                k[0][4] = s[3];
                k[0][5] = '.';
                k[0][6] = s[4];
                k[0][7] = '.';
                k[0][8] = s[5];
                a[0] = x * 256 * 256 * 256 + t[3] * 256 * 256 + t[4] * 256 + t[5];
            }
            else{a[0]=0;}
        }
        if (t[0] != 0&&t[2]!=0) {
            long long x = t[0] * 10 + t[1];
            long long y= t[2]*10 +t[3];
            if (x > 0 && x < 256&&y>0&&y<256) {
                k[1][0] = s[0];
                k[1][1] = s[1];
                k[1][2] = '.';
                k[1][3] = s[2];
                k[1][4] = s[3];
                k[1][5] = '.';
                k[1][6] = s[4];
                k[1][7] = '.';
                k[1][8] = s[5];
                a[1] = x * 256 * 256 * 256 + y * 256 * 256 + t[4] * 256 + t[5];
            }
            else{a[1]=0;}
        }
        if (t[0] != 0&&t[3]!=0) {
            long long x = t[0] * 10 + t[1];
            long long y = t[3]*10+t[4];
            if (x > 0 && x < 256&&y>0&&y<256){
                k[2][0] = s[0];
                k[2][1] = s[1];
                k[2][2] = '.';
                k[2][3] = s[2];
                k[2][4] = '.';
                k[2][5] = s[3];
                k[2][6] = s[4];
                k[2][7] = '.';
                k[2][8] = s[5];
                a[2] = x * 256 * 256 * 256 + t[2] * 256 * 256 + y * 256 + t[5];
            }
            else{a[2]=0;}
        }
        if (t[0] != 0&&t[4]!=0) {
            long long x = t[0] * 10 + t[1];
            long long y=t[4]*10 +t[5];
            if (x > 0 && x < 256&&y>0&&y<256) {
                k[3][0] = s[0];
                k[3][1] = s[1];
                k[3][2] = '.';
                k[3][3] = s[2];
                k[3][4] = '.';
                k[3][5] = s[3];
                k[3][6] = '.';
                k[3][7] = s[4];
                k[3][8] = s[5];
                a[3] = x * 256 * 256 * 256 + t[2] * 256 * 256 + t[3] * 256 + y;
            }
            else{a[3]=0;}
        }
        if (t[1] != 0) {
            long long x = t[1] * 100 + t[2]*10+t[3];
            if (x > 0 && x < 256) {
                k[4][0] = s[0];
                k[4][1] = '.';
                k[4][2] = s[1];
                k[4][3] = s[2];
                k[4][4] = s[3];
                k[4][5] = '.';
                k[4][6] = s[4];
                k[4][7] = '.';
                k[4][8] = s[5];
                a[4] = t[0] * 256 * 256 * 256 + x * 256 * 256 + t[4] * 256 + t[5];
            }
            else{a[4]=0;}
        }
        if (t[1] != 0&&t[3]!=0) {
            long long x = t[1] * 10 + t[2];
            long long y= t[3]*10+t[4];
            if (x > 0 && x < 256&&y>0&&y<256) {
                k[5][0] = s[0];
                k[5][1] = '.';
                k[5][2] = s[1];
                k[5][3] = s[2];
                k[5][4] = '.';
                k[5][5] = s[3];
                k[5][6] = s[4];
                k[5][7] = '.';
                k[5][8] = s[5];
                a[5] = t[0] * 256 * 256 * 256 + x * 256 * 256 + y * 256 + t[5];
            }
            else{a[5]=0;}
        }
        if (t[1] != 0&&t[4]!=0) {
            long long x = t[1] * 10 + t[2];
            long long y=t[4]*10+t[5];
            if (x > 0 && x < 256&&y>0&&y<256) {
                k[6][0] = s[0];
                k[6][1] = '.';
                k[6][2] = s[1];
                k[6][3] = s[2];
                k[6][4] = '.';
                k[6][5] = s[3];
                k[6][6] = '.';
                k[6][7] = s[4];
                k[6][8] = s[5];
                a[6] = t[0] * 256 * 256 * 256 + x * 256 * 256 + t[3] * 256 + y;
            }
            else{a[6]=0;}
        }
        if (t[2] != 0) {
            long long x = t[2] * 100 + t[3]*10+t[4];
            if (x > 0 && x < 256){
                k[7][0] = s[0];
                k[7][1] = '.';
                k[7][2] = s[1];
                k[7][3] = '.';
                k[7][4] = s[2];
                k[7][5] = s[3];
                k[7][6] = s[4];
                k[7][7] = '.';
                k[7][8] = s[5];
                a[7] = t[0] * 256 * 256 * 256 + t[1] * 256 * 256 + x * 256 + t[5];
            }
            else{a[7]=0;}
        }

        if (t[2] != 0&&t[4]!=0){
            long long x = t[2] * 10 + t[3];
            long long y = t[4] *10 +t[5];
            if (x > 0 && x < 256&&y>0&&y<256) {
                k[8][0] = s[0];
                k[8][1] = '.';
                k[8][2] = s[1];
                k[8][3] = '.';
                k[8][4] = s[2];
                k[8][5] = s[3];
                k[8][6] = '.';
                k[8][7] = s[4];
                k[8][8] = s[5];
                a[8] = t[0] * 256 * 256 * 256 + t[1] * 256 * 256 + x * 256 + y;
            }
            else{a[8]=0;}
        }
        if (t[3] != 0) {
            long long x = t[3] * 100 + t[4]*10+t[5];
            if (x > 0 && x < 256) {
                k[9][0] = s[0];
                k[9][1] = '.';
                k[9][2] = s[1];
                k[9][3] = '.';
                k[9][4] = s[2];
                k[9][5] = '.';
                k[9][6] = s[3];
                k[9][7] = s[4];
                k[9][8] = s[5];
                a[9] = t[0] * 256 * 256 * 256 + t[1] * 256 * 256 + t[2] * 256 + x;
            }
            else {a[9]=0;}
        }
        long long b[10];
        for (int i = 0; i < 10; i++) {
            b[i] = a[i];
        }
        for (int i = 0; i < 10; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (a[i] >= a[j]) {
                    long long temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
        int count=0;
        for(int i=0;i<10;i++){
            if(a[i]!=0){
                count++;
            }
        }
        int c[count];
        int e=0;
        for(int i=0;i<10;i++){
            if(a[i]!=0){
                for(int j=0;j<10;j++){
                    if(b[j]==a[i]){c[e]=j;e++;break;}
                }
            }
        }
        if(count==1){
            int p=c[0];
            for(int i=0;i<9;i++){
                printf("%c",k[p][i]);
            }
        }
        if(count>1){
            for(int i=0;i<count-1;i++){
                int p=c[i];
                for(int j=0;j<9;j++){
                    printf("%c",k[p][j]);
                }
                printf(",");
            }
            int q=c[count-1];
            for(int j=0;j<9;j++){
                printf("%c",k[q][j]);
            }
        }
    }
    return 0;
}

