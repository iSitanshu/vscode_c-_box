public class constructor {
    public static void main(String args[]){
        Student s3=new Student();
        Student s1=new Student("Sitanshu");
        Student s2=new Student(123);
    }
}

public class Student{
    String name;
    int roll;

    Student(){
        System.out.println("constructor is called");
    }
    Student (String name){//constructor
        this.name=name;
    }
    Student (int roll){
        this.roll=roll;
    }
}