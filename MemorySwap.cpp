//#include <stdio.h>
#include <iostream>
#include <tchar.h>

using std::cout;

int _tmain(int argc, _TCHAR* argv[])
{
	int ARRAY_DATA[] = {100, 200};              //Array data
	unsigned char *Mem_Loc = (byte*)ARRAY_DATA; //Memory location of the array data
	int sizeD = sizeof(ARRAY_DATA[0]);          //data type size of the array data

	cout << "Before swap: " << ARRAY_DATA[0]<<", "<<ARRAY_DATA[1]<<"\n";
	//printf("Before swap: %d, %d \n", ARRAY_DATA[0],ARRAY_DATA[1]); //--> This is comand for C

	unsigned char* temp = new unsigned char[sizeD]; //temporary variable to perform swap
	//unsigned char* temp = (unsigned char*) malloc(sizeD);          //--> This is comand for C

	//Memory Swap------------------------------------------------------------------------------
	memcpy(temp, Mem_Loc + 0 * sizeD, sizeD);
        memcpy(Mem_Loc + 0 * sizeD, Mem_Loc + 1 * sizeD, sizeD);
	memcpy(Mem_Loc + 1 * sizeD, temp, sizeD);
	//-----------------------------------------------------------------------------------------

	delete [] temp; //memory clean up for the temporary variable (prevent memory leak)
	//free(temp);   //--> This is comand for C

	cout << "After swap: " << ARRAY_DATA[0]<<", "<<ARRAY_DATA[1]<<"\n";
	//printf("After swap: %d, %d \n", ARRAY_DATA[0],ARRAY_DATA[1]);  //--> This is comand for C

	return 0;
}
