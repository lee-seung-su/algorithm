#include <string.h>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
	
	clock_t start, end;
	start = clock();
	for (int i = 0; i < 10; i++) {
		int max = 1024*1024*64;
		int* src = (int*)malloc(max);
		int* dst = (int*)malloc(max);
		start = clock();
		memcpy(dst, src, max);
		
		//cout << end << endl;
		end = clock();
		cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
		free(src); free(dst);
	}
	end = clock();


	

}