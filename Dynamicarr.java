public class Dynamicarr {
    public static void main(String[] args) {
        
        //suppose you wanna print the array 
        int[][] arr = {
            {1,2,3,4},
            {5,6},
            {8,9,10}
        };

        for (int row = 0; row < arr.length; row++){
            for(int col = 0; col < arr[row].length; col++){
                System.out.print(arr[row][col]);
            }
            System.out.println();
        }

    }
}
