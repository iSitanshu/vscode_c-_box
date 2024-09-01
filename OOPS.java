public class OOPS{
    public static void main(String args[]){
        Pen p1=new Pen();//Constructor 
        // p1.color="Yellow";
        p1.setColor("YELLOW");
        System.out.println(p1.getColor());
        // p1.tip=50;
        p1.setTip(1000);
        System.out.println(p1.getTip());
    }
}
class Pen {
    private String color;
    private int tip;
    String getColor(){
        return this.color;
    }
    int getTip(){
        return this.tip;
    }
    void setColor(String newColor){
        color=newColor;
    }
    void setTip(int newTip){
        tip=newTip;
    }
}

// class Bankaccount{
//     public String username;
//     private String password;
//     public void Setpassword(String pass){
//         password=pass;
//     }
change the variable 