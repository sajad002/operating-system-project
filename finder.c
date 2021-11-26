#include<stdio.h>
char outPutImpWord[1000];
int  words_P_L[100][2];
void finder(char mother[], char oEncoder[]){
    int i=0;
    for(; mother[i]<'0' || mother[i]>'9';i++);
    for(int j=0; j<100;j++){
        for(int k=0; k<2;k++){
            words_P_L[j][k]=0;
        }
    }
    int k = 0;
    for(;mother[i]!='#';i++){
        for (;  mother[i]!=' '; i++)
        {
            words_P_L[k][0]=(words_P_L[k][0])*10+(mother[i]-'0');
        }
        i++;
        for (; mother[i]!='$'; i++)
        {
            words_P_L[k][1]=(words_P_L[k][1])*10+(mother[i]-'0');
        }
        k++;        
    }
    words_P_L[k][0]=-1;
    k=0;
    for(i=0;words_P_L[i][0]!=-1;i++){
        for(int j = 0; words_P_L[i][1]>j;j++){
            outPutImpWord[k]=oEncoder[(words_P_L[i][0])+j];
            k++;
        }
        outPutImpWord[k]='#';
        k++;
    }
}

int main(){
    
    char testmot[]="sgskldjghssldkjghdsgdgdgjghdglflkgjfbghdsfdadhgdbdlskjhgbdglhdsbg"
    "#"
    "1 3$4 4$45 7$"
    "###"
    "the person who shot the victim was $he lives in $  and has a blue $'";
    char testenc[]="sgskldjghssldkjghdsgdgdgjghdglflkgjfbghdsfdadhgdbdlskjhgbdglhdsbg";

    finder(testmot, testenc);
    printf("\n\n%s\n\n",outPutImpWord);
    return 0;

}