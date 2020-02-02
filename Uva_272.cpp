//https://onlinejudge.org/index.php?Itemid=8&option=com_onlinejudge&page=show_problem&problem=208
//Author Rahman

#include<iostream>

using namespace std;

int main(){

    char c;
    bool ax=1;

    while(scanf("%c",&c)!=EOF){
        if(c=='"'){
            if(ax) printf("``");
            else printf("''");

            ax=(!ax);
        }else printf("%c",c);
    }

    return 0;
}
