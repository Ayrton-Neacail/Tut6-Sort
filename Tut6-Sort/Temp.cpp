#include <iostream>
#include <string>

using namespace std;


template<typename a> // to declare the template

void Sortlate(a array1[], int elements){
	bool swapped = true;

	int j = 0;

	int tmp;
	                                                   // bubble sort algorithm to sort the array elements
	while (swapped) {

		swapped = false;

		j++;

		for (int i = 0; i < elements - j; i++) {

			if (array1[i] < array1[i + 1]) {

				tmp = array1[i];

				array1[i] = array1[i + 1];

				array1[i + 1] = tmp;

				swapped = true;

			}

		}

	}



}

int main(){

	int array1[10] = { 1, 2, 1, 2, 5, 4, 5, 8, 9, 4 };

	Sortlate(array1, 10);
	for (int i = 0; i < 10; i++){
	
		cout << array1[i] << " "<< endl; //testing array of integers

	}

	float array2[10] = {10.0,10.1,10.2,10.3,10.4,12.5,14.6,14.2,14.25,14.233};

	Sortlate(array2, 10);

	for (int i = 0; i < 10; i++){
	
		cout << array2[i] << " " << endl;  // testing array of floats
	
	}






	return 0;

}