#include<iostream>


using namespace std;

#define max_rows 7
#define max_cols 7


void printGrid(int rows, int cols, int grid[max_rows][max_cols]) {

    for (int i = 0; i< rows; i++ ) {

        for (int j=0; j<cols; j++) {

            cout<<grid[i][j]<<" ";
        }

        cout<<"\n";
    }

}

void setGridCellToZero(int rows, int cols, int grid[max_rows][max_cols]) {

    for (int i = 0; i< rows; i++ ) {

        for (int j=0; j<cols; j++) {

            grid[i][j] = 0;
        }
    }

    printGrid(rows, cols, grid);

}

int findPaths(int rows, int cols , int grid[max_rows][max_cols], int current_row, int current_col, int count) {

    int total_paths = 0;

    
    if (current_row >= rows || current_col >= cols || current_row < 0 || current_col < 0) {
        //cout<<"reached edge: row: "<<current_row<<"col: "<<current_col<<"\n";
        return 0;
    }


    if(grid[current_row][current_col] == 1) {
        //cout<<"Been there\n";
        return 0;
    }
    else  {
        count++;
    }

    if ((current_row == (max_rows-1)) && (current_col == (max_cols-1)) && (count == (max_rows*max_cols))) {
        //cout<<"reached last cell\n";
        return 1;  
    }

    grid[current_row][current_col] = 1;

    //cout<<"count is "<<count<<endl;
    //go left
    //cout<<"going left\n";
    total_paths += findPaths(rows, cols, grid, current_row, current_col-1, count); 
    //cout<<total_paths<<endl;

    //go right
    //cout<<"going right\n";
    total_paths += findPaths(rows, cols, grid, current_row, current_col+1, count);
    //cout<<total_paths<<endl;

    //go up
    //cout<<"Going up\n"; 
    total_paths += findPaths(rows, cols, grid, current_row-1, current_col, count);
    //cout<<total_paths<<endl;

    //gp down
    //cout<<"going down\n";
    total_paths += findPaths(rows, cols, grid, current_row+1, current_col, count);
    //cout<<total_paths<<endl;

    grid[current_row][current_col] = 0;
    count--;

    return total_paths;
}




int main() {



    int grid[max_rows][max_cols]; 
    
    setGridCellToZero(max_rows, max_cols, grid);

    int count = findPaths(max_rows, max_cols, grid,0,0,0);

    cout<<"count is "<<count<<endl;

    return 0;
}
