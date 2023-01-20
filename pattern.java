import java.util.*;
public class pattern{
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
        for(int i=n-1;i>=0;i--){
            System.out.println(" ");
        }
        for(int i=0;i<n;i++){
            System.out.print("#");
        }
        System.out.println("\n");
    }   
}
