#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "utils.h"

#define N 5

int arr[N];

struct person {
	struct person *married;
	struct person *preference_list[N];
	int search_index;
};

struct person *marrige_list[2][N];

void person_begin(struct person *p, struct person pair[]){
	shuffle(arr, N);

	for(int i = 0; i < N; i++){
		p->preference_list[i] = &pair[arr[i]];
	}

	p->search_index = 0;
	p->married = NULL;
}

int marry(struct person *m, struct person *w){
	static int index = 0;

	if(m == NULL || w == NULL){
		return -1;
	}

	m->married = w;
	w->married = m;

	marrige_list[index][0] = m;
	marrige_list[index][1] = w;

	return 0;
}

int gs_algorithm(struct person *m, struct person *w, int size){
	int n_m = size;
	while(n_m > 0){
		struct person pretendent = m[0];
		struct person *target = pretendent.preference_list[pretendent.search_index];
		
		if(target->married == NULL){
			if(marry(&pretendent,target)!=0){
				return -1;
			}
			n_m--;
			continue;
		}
		else if(terget->married)
	}

	return 0;
}

int main(){
	struct person m[N];
	struct person w[N];
	
	for (int i = 0; i < N; i++) {
        arr[i] = i;
    }

	for(int i = 0; i < N; i++){
		person_begin(&m[i],w);
	}

	for(int i = 0; i < N; i++){
		person_begin(&w[i],m);
	}

	if(gs_algorithm(m,w,N)!=0){
		return -1;
	}

	// for(int i = 0; i < N; i++){
	// 	for(int j = 0; j < N; j++){
	// 		printf("w%d: %p\n",i,&w[i]);
	// 		printf("m[%d].preff[%d]: %p\n",i,j,m[1].preference_list[i]);
	// 	}
	// }
	
	return 0;
}