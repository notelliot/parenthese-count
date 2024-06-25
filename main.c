#include <stdio.h>
#include <stdbool.h>

int get_count(char par[], int size){
    int count = 0;
    bool start = true;


    for(int i = 0; i < size; i++){
	switch(start){
	case 1:
	    if(par[i] == '('){
		start = false;
	    }
	    break;
	case 0:
	    if(par[i] == ')'){
		start = true;
		count++;
	    }
	    break;
	}
    }

    return count;
}

int main(){
    char par[] = "(()";
    int size = sizeof(par)/sizeof(par[0]);
    //printf("%d", size);
    printf("%d", get_count(par, size));

    return 0;
}
