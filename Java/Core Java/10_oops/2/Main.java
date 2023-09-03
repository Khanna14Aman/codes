class Employee{
    private int id;
    private String name;
    public void setName(String _name){
        name = _name;
    }
    public void setId(int _id){
        this.id = _id;
    }
    private int getId(){ 
        return id;
    }
    public String getName(){
        System.out.println(this.getId());
        return this.name;
    }
}

public class Main {
public static void main(String[] args) {
    Employee obj = new Employee();
    obj.setId(23);    
    obj.setName("sdfsdfsdfsdf");
    // System.out.println(obj.getId());
    System.out.println(obj.getName());
}    
}
