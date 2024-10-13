import java.util.ArrayList;
import java.util.Scanner; 
public class arraylist{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        ArrayList<Integer> list = new ArrayList<Integer>(10);
        list.add(12);
        list.add(14);
        list.add(24);
        list.add(34);
        list.add(44);
        list.add(54);
        list.add(64);
        list.add(74);
        list.add(84);
        list.add(94);
        list.add(104);
        list.add(114);
        list.add(124);
        //also can take input by using scanner and loops as 
        //list.add(sc.nextint()) inside the for loop 

        for(int i=0; i<5; i++){
            list.add(sc.nextInt()); 
        }
        System.out.println(list); //prints the list 
        //if you want to print the list by index
        for(int i=0; i<5; i++){
            System.out.println(list.get(i)); //get is a predefined method  
        } 
    }

    //now to display this: 
}
