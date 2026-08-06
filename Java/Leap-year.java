//finding leap-year
import java.util.*;
public class Demo{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int year=sc.nextInt();
        if(year%400==0||year%4==0&&year!=0)
            System.out.println("Leap-Year");
        else
            System.out.println("Non leap-year");
    }
}
