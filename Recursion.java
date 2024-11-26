import java.util.*;
public class Recursion{
  
    // public static void printDec(int n){
    //     if(n==1){
    //     System.out.println(1);
    //     return;}
    //     else {
    //     System.out.println(n+" "); 
    //     printDec(n-1);
    // }}

    // public static void inc_num(int n){
    //     if(n==1){
    //     System.out.println(n);
    //     return;}
    //     else {
    //     inc_num(n-1);
    //     System.out.println(n);}
    // }

    // public static int Fact(int n){
    //     if(n==1){
    //     return 1;}
    //     else{
    //     return (n+Fact(n-1));
    //     }}
    

    // public static int fibbo(int n){
    //     if(n==1 || n==0)
    //     return n;
    //     else{
    //         return fibbo(n-1)+fibbo(n-2);
    //     }}

    public static String sort(int arr[],int i){
        if(i==arr.length-1){
            return "true";
        }
        if(arr[i]>arr[i+1]){
            return "false";
        }
        return sort(arr,i+1);
    }

public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int arr[]={1,2,3,4,5};
    sort (arr,0);
}}