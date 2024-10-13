public class linearSearch {
    public static void main(String[] args) {
        int arr[] = {5,6,9,1,2,3,5,4}; 
        int target = 99; 
        int ans = linearSearchmeth(arr, target); 
        if(ans == 1) System.out.println("element found");
        else System.out.println("ellement not found ");
    }

   static  int linearSearchmeth(int arr[], int target)
    {
         
        for(int i = 0; i<arr.length ; i++)
        {

            if(target == arr[i])
            {
                return i;  //return itself breaks the loop and no break is required
                
            }
        }
        
        return -1; 

        
         
        
    }
}
