#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // struct tm
#include <conio.h> // getch();kbhit();
#include <Windows.h> // Sleep();

struct closet {
   int id;
   char color[50], size[50], aspect[50];
};

struct closet s[20];
int count = 0;
// Function to add a new shirt in closet
void createShirt() {
   printf("Enter the details of the shirt: \n");
   printf("ID: ");
   scanf("%d", &s[count].id);
   printf("Color: ");
   scanf("%s", s[count].color);
   printf("Size: ");
   scanf("%s", s[count].size);
   printf("Aspect: ");
   scanf("%s", s[count].aspect);
   count++;
   printf("Shirt added successfully.\n\n");
   
   getch();
   system("cls");
}

// Function to search for a shirt in closet
void readShirt() {
   int id, i;
   printf("Enter the ID of the shirt: ");
   scanf("%d", &id);
   for (i = 0; i < count; i++) {
      if (s[i].id == id) {
        printf("ID: %d\n", s[i].id);
        printf("Color: %s\n", s[i].color);
        printf("Size: %s\n", s[i].size);
        printf("Aspect: %s\n", s[i].aspect);
         		 
		getch();
   		system("cls");
        return;
      }
   }
   printf("Shirt not found.\n\n");
   
   getch();
   system("cls");
}

// Function to update a shirt in closet
void updateShirt() {
   int id, i;
   printf("Enter the ID of the shirt: ");
   scanf("%d", &id);
   for (i = 0; i < count; i++) {
      if (s[i].id == id) {
         printf("Enter the new details of the shirt: \n");
         printf("ID: ");
         scanf("%d", &s[i].id);
         printf("Color: ");
   		 scanf("%s", s[count].color);
   		 printf("Size: ");
   		 scanf("%s", s[count].size);
   		 printf("Aspect: ");
   		 scanf("%s", s[count].aspect);
         printf("Shirt updated successfully.\n\n");
            
		 getch();
   		 system("cls");
         return;
      }
   }
   printf("Shirt not found.\n\n");
   
   getch();
   system("cls");
}

// Function to delete a shirt in closet
void deleteShirt() {
   int id, i, j;
   printf("Enter the ID of the shirt: ");
   scanf("%d", &id);
   for (i = 0; i < count; i++) {
      if (s[i].id == id) {
         for (j = i; j < count - 1; j++) {
            s[j] = s[j+1];
         }
         count--;
         printf("Shirt deleted successfully.\n\n");
            
		getch();
   		system("cls");
         return;
      }
   }
   printf("Shirt not found.\n\n");
   
   getch();
   system("cls");
}

//Structure to enable keys
int key () {
    int varKey;
    while (1) {
        if (kbhit()) {
            varKey = getch();
            return varKey;
        }
    }
}

int main() {
	
//Structure to use Time.h
struct tm *now;
time_t seconds;
time(&seconds);
now = localtime(&seconds);
   
int i, c, close = 0, line = 0;system("cls");
   
//Loading
for(i=0;i<5;i++){
	printf("\n\n\t/ / / / / / LOADING / / / / / /");
	Sleep(100);
	system("cls");
	printf("\n\n\t| | | | | | LOADING | | | | | |");
	Sleep(100);
	system("cls");
	printf("\n\n\t\\ \\ \\ \\ \\ \\ LOADING \\ \\ \\ \\ \\ \\ ");
	Sleep(100);
	system("cls");
	printf("\n\n\t- - - - - - LOADING - - - - - -");
	Sleep(100);
	system("cls");
}
	
do {  
      printf("\t\t\t\t\t %d:%d %d/%d/%d \n\n", now->tm_hour, now->tm_min, now->tm_mday, now->tm_mon+1, now->tm_year+1900);
      printf("1 ~> Create a new shirt \n"
       "2    Read a shirt \n"
	   "3    Update a shirt \n"
	   "4    Delete a shirt \n"
	   "5    Exit \n");

	// Conditional for use of keys
	while (1) {
	    if (kbhit()) { system("cls"); c = key();
	        
	        //Press down
	        if (c == 80) {
	            line++;
	            if (line > 4)
	                line = 0;
	        }
	        // Press up
	        if (c == 72) {
	            line--;
	            if (line < 0)
	                line = 4;
	        }
	        //Press enter
	        if (c == 13)  {
	        	if (line == 0) {
	                createShirt();
	            } else if (line == 1) {
	                readShirt();
	            } else if (line == 2) {
	                updateShirt();
	            } else if (line == 3) {
	                deleteShirt();
	            } else if (line == 4) {system("cls");
	                
	                	// Loading
	                	for(i=0;i<5;i++){
							printf("\n\n\t/ / / / / / CLOSING PROGRAM / / / / / /");
							Sleep(100);
							system("cls");
							printf("\n\n\t| | | | | | CLOSING PROGRAM | | | | | |");
							Sleep(100);
							system("cls");
							printf("\n\n\t\\ \\ \\ \\ \\ \\ CLOSING PROGRAM \\ \\ \\ \\ \\ \\ ");
							Sleep(100);
							system("cls");
							printf("\n\n\t- - - - - - CLOSING PROGRAM - - - - - -");
							Sleep(100);
							system("cls");
							}
	                exit(0);
	            }    
	        }
	        
	        // Arrow positions
	        if (line == 0) {
	        	printf("\t\t\t\t\t %d:%d %d/%d/%d \n\n", now->tm_hour, now->tm_min, now->tm_mday, now->tm_mon+1, now->tm_year+1900);
	            printf("1 ~> Create a new shirt \n"
			       "2    Read a shirt \n"
				   "3    Update a shirt \n"
				   "4    Delete a shirt \n"
				   "5    Exit \n");
	        }
	        if (line == 1) {
	        	printf("\t\t\t\t\t %d:%d %d/%d/%d \n\n", now->tm_hour, now->tm_min, now->tm_mday, now->tm_mon+1, now->tm_year+1900);
	            printf("1    Create a new shirt \n"
			       "2 ~> Read a shirt \n"
				   "3    Update a shirt \n"
				   "4    Delete a shirt \n"
				   "5    Exit \n");
	        }
	        if (line == 2) {
	        	printf("\t\t\t\t\t %d:%d %d/%d/%d \n\n", now->tm_hour, now->tm_min, now->tm_mday, now->tm_mon+1, now->tm_year+1900);
	            printf("1    Create a new shirt \n"
			       "2    Read a shirt \n"
				   "3 ~> Update a shirt \n"
				   "4    Delete a shirt \n"
				   "5    Exit \n");
	        }
	        if (line == 3) {
	        	printf("\t\t\t\t\t %d:%d %d/%d/%d \n\n", now->tm_hour, now->tm_min, now->tm_mday, now->tm_mon+1, now->tm_year+1900);
	            printf("1    Create a new shirt \n"
			       "2    Read a shirt \n"
				   "3    Update a shirt \n"
				   "4 ~> Delete a shirt \n"
				   "5    Exit \n");
			}
			if (line == 4) {
				printf("\t\t\t\t\t %d:%d %d/%d/%d \n\n", now->tm_hour, now->tm_min, now->tm_mday, now->tm_mon+1, now->tm_year+1900);
	            printf("1    Create a new shirt \n"
			       "2    Read a shirt \n"
				   "3    Update a shirt \n"
				   "4    Delete a shirt \n"
				   "5 ~> Exit \n");
			}
	    }
	}

	}while (close == 0);
 }
 
//by Kintiz :)
