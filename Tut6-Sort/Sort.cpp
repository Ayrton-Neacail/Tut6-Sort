#include <iostream>
#include "Sort.h"
#include <string>
using namespace std;

Sort::Sort(int array1[],int NoElements){

	

		bool swapped = true; //bubble sort algorithm added

		int j = 0;

		int tmp;

		while (swapped) {

			swapped = false;

			j++;

			for (int i = 0; i < n - j; i++) {

				if (array1[i] > array1[i + 1]) {

					tmp = array1[i];

					array1[i] = array1[i + 1];

					array1[i + 1] = tmp;

					swapped = true;

				}

			}

		}

	}



}