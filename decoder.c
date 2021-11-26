#include<stdio.h>

char output[1000];

void decoder(char mother[]){


    for(int i=0; mother[i]!=NULL; i++){

        mother[i] = mother[i]+3;
        if(mother[i] > 'Z' && mother[i] < 'a'){
            switch (mother[i])
            {
            case 91:
                mother[i]='A';
                break;
            case 92:
                mother[i]='B';
                break;
            case 93:
                mother[i]='C';
                break;
            }  
        }else if (mother[i] > 'z')
        {
            switch (mother[i])
            {
                case 123:
                    mother[i]='a';
                    break;
                case 124:
                    mother[i]='b';
                    break;
                case 125:
                    mother[i]='c';
                    break;
            }
        }
        output[i]=mother[i];
    }
}

int main(){
    char test[]="sgskldjghssldkjghdsgdgdgjghdglflkgjfbghdsfdadhgdbdlskjhgbdglhdsbg";
    decoder(test);
    printf("upper cases alphabet :\nABCDEFGHIJKLMNOPQRSTUVWXYZ\n%s\n",output);
    char test2[]="abcdefghijklmnopqrs";
    decoder(test2);
    printf("lower cases alphabet :\nabcdefghijklmnopqrstuvwxyz\n%s\n",output);
    return 0;
}