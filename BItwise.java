      import java.util.*;
class oddeven{
    // public static void check(int n){
    //     int bitmask=1;
    //     if((n & bitmask)==0)
    //     System.out.println(0);
    //     else 
    //     System.out.println(1);
    // }
    // public static void checki(int n,int i){
    //     if((n & (1<<i))==0)
    //     System.out.println("0");
    //     else
    //     System.out.println("1");
    // }
    // public static void setbit(int n,int i){
    //     int mul=~(1<<i);
    //     System.out.println((n & mul));
    // }
    // public static int clearibit(int n,int i){
    //     int mul=((~0)<<i);
    //     return (n & mul);
    // }
    public static int rangebit(int n,int i,int j){
        int mul=((~0)<<j | ~((~0)<<i));
        return (n & mul);
        //return statement
    }
    public static void main(String args[])
    {
        System.out.println(rangebit(15,2,7));
    }
}
