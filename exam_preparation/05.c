/*Many bathrooms are covered with grids of square tiles. The figure below shows a grid of tiles (3 rows and 4 columns).

Your task is to write a program that will output the total number of squares in the grid of tiles. For a grid of tiles as shown above, the output should be 20.
Yes, you’ve read that right. The answer is 20, and not 12. As you can see, in addition to the 12 individual squares, there are 8 other squares that span more than one tile, as shown below:

Your program should ask for the dimensions of the grid (number of rows and number of columns). Your program should then output the total number of squares that can be found in the resulting grid.
To help you, here are a few more examples. A 2x2 grid has a total of 5 squares (4 individual squares and one large square). A grid has 5 squares (there are no larger squares aside from the individual ones). A grid has a total of 70 squares.*/


#include<stdio.h>

int main(){
    int rows;
    int cols;

    printf("provide the number of rows: ");
    scanf("%i", &rows);
    printf("provide the number of cols: ");
    scanf("%i", &cols);

    //individual tiles:
    int count=rows*cols;

    //inner squares larger than 2 in side
    int min_side=cols;
    if (rows<cols)
    {
        min_side==rows;
    }
    
    for (int side_length = 2; side_length <= min_side; side_length++) {
        int squares = (rows - side_length + 1) * (cols - side_length + 1);
            count += squares;
    }

    printf("number of squares: %i\n", count);
    return 0;
}