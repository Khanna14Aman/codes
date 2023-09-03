class Employee{
    private int id;
    private String name;
    public Employee(){
        id = 12;
        name = "default";
    }
    public Employee(String _name){
        id = 12;
        name = _name;
    }
    public Employee(int _id,String _name){
        name = _name;
        id = _id;
    }
    public void showDetails(){
        System.out.println(id);
        System.out.println(name);
    }
    public Employee(Employee obj){
        id = obj.id;
        name = obj.name;
    }
}

public class Main {
      public static void main(String[] args) {
        Employee obj1 = new Employee();
        obj1.showDetails();
        Employee obj2 =  new Employee(12,"sdfsdfdsf");
        obj2.showDetails();
        Employee obj3 = new Employee( "parameterized");
        obj3.showDetails();
        Employee obj4 = new Employee(obj1);
        obj4.showDetails();;
      }  
}
