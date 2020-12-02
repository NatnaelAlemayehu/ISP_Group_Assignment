#include <stdio.h>
#include <stdlib.h>

int main(){
    int elevator_capacity = 10;
    int people_waiting = 12;
    int users[10];
    int floors_chosen[10];   
    int max_floor = 8;
    int min_floor = 2;
    int max_floor_chosen;
    srand(time(0));
    for (int i = 0; i < 10;  i++){
        users[i] = i+1;
        printf("User %d entered", users[i]);
        floors_chosen[i] = (rand() % ( max_floor- min_floor + 1)) + min_floor;        
    }
    printf("Elevator capacity reached");

    for (int i = 0; i < 10;  i++){        
        printf("User %d pressed floor %d", users[i], floors_chosen[i]);             
    }
    
    max_floor_chosen=max(floors_chosen, 10);
    for (int i = 0; i < max_floor_chosen;  i++){        
        printf("Elevator is now on %d floor", i+1);
        
        for (int j = 0; j < 10;  j++){        
            if(floors_chosen[j] == i+1){
                floors_chosen[j] = 0;
                printf("User %d has arrived at floor %d", users[j], i+1);
            }             
        }
        sleep(1);
    }


    
    
}

max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}