

import  java.util.Scanner; 
public class TwoDArray { //class does not start with numeric 
    public static void main(String[] args){
        Scanner in = new Scanner(System.in); 
        int[][] arr = new int[3][2]; 
        System.out.println(arr.length); // This will give number of rows, which is 3
        
        for (int r =0; r<3; r++)
        {
            for(int c = 0; c<2; c++)
            {
                arr[r][c] = in.nextInt(); 
            }
        }
    }

}
