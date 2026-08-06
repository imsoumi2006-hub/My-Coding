//finding greater number
import java.util.*;
public class Demo{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        if(a>b)
            System.out.println("A is greater");
        else if(b>a)
            System.out.println("B is greater than ");
        else
            System.out.println("A is equal to B");
    }
}
