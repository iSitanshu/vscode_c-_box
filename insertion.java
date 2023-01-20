public class insertion {
    public static void insertionsort(int arr[],int n){
        //13 4 6 2 9 5 
        for(int i=1;i<n;i++){
            int key,j;
            key=arr[i];
            j=i-1;
            while(key<arr[j] && j>=0){
                arr[j+1]=arr[j];    
                j--;
            }
            arr[j+1]=key;
        }
    }
public static void printmn(int arr[],int n){
    for(int i=0;i<n;i++){
        System.out.print(arr[i]+" ");
    }
    System.out.println();
}
    public static void main(String args[]){
        int arr[]={13,4,6,2,9,5};
        printmn(arr,6);
        insertionsort(arr,6);
        printmn(arr,6);
    }
}
