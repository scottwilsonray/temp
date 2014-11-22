#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {

//Start
//hello

	// Configuration Parameter 1:
		char blobTableFilename[] = "example.txt";
		
	// Configuration Parameter 2:
		int num_numericalFeatures = 5;
		
	// Configuration Parameter 3:
		int num_logicalFeatures = 6;
		
	// Configuration Parameter 4:
		int num_logicalFeatureBins = 3;
	
	// Configuration Parameter 5:
		int n, i, j, k, num_blobs;
		char c;	
	 
	// Task 1:
		FILE *file = fopen(blobTableFilename, "r");
	
	// Task 2:
		fscanf(file, "%i", &num_blobs);
		// Task 2 Print:	
			printf("number of blobs = %i\n\n", num_blobs);
	
	// Task 3:
		float numericalFeatures[num_blobs][num_numericalFeatures];
		
	// Task 4:
		char logicalFeatures[num_logicalFeatureBins][num_logicalFeatures][num_blobs];
		
	// Loop 1:
		// Loop 1, Task 1:
			for(n =1; n <= num_blobs; n++ ){
	
		// Loop 1.1:	
			// Loop 1.1, Task 1:
				for(i = 0; i < num_numericalFeatures; i++){
					fscanf(file, "%f", &numericalFeatures[n][i]);}
				//Loop 1.1, Task 1 Print:
					for(i = 0; i < num_numericalFeatures; i++){
						printf("numerical feature number %d = %f\n", numericalFeatures[n][i], i + 1);}
	
		// Loop 1.2:
			// Loop 1.2, Task 1:
				for( k = 0; k < num_logicalFeatureBins; k++){
		
				// Loop 1.2.1:
					// Loop 1.2.1, Task 1:
						for(j = 0; j < num_logicalFeatures +1; j++){
					// Loop 1.2.1, Task 2:
							c = fgetc(file);
							printf("%c", c);
							if(c != '\n'){
							logicalFeatures[k][j][n] = c;}}}
							
				// Loop 1.2, Task 1 Print:
					printf("\n\n");
					for( k = 0; k < num_logicalFeatureBins; k++){
						// Loop 1.2.1, Task 1 Print:
							for(j = 1; j < num_logicalFeatures +1; j++){
								printf("%c", logicalFeatures[k][j][n]);}
								printf("\n");}}

// Stop
	fclose(file);}


	
	
