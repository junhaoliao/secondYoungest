#include <iostream>
#include <limits>
using namespace std;

int main() {
    int count =100;
    int ages[count];
    for(int i=0;i<count;i++){
        ages[i]=120;
    }
    ages[2]=1;
    ages[3]=6;
    ages[6]=101;
    ages[50]=100;
    ages[100]=99;
    int youngest=numeric_limits<int>::max() ;
    int secondYoungest=numeric_limits<int>::max() ;

    for(unsigned i = 0; i<count;i++){
        if(ages[i]<youngest){
            secondYoungest = youngest;
            youngest = ages[i];
        }else if(ages[i]<secondYoungest){
            secondYoungest = ages[i];
        }
    }

    printf("%d",secondYoungest);
    return 0;
}