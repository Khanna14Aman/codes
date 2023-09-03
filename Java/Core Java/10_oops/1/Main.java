class Employee{
    int id;
    String name;
    int salary;
    public void showDetails(){
        System.out.printf("Id is %d \n name is %s \n salary is %d\n",id,name,salary);
    }
    public int getSalary(){
        return salary;
    }
    public void changeName(String _name){
        name = _name;
    }
}


class Square{
    int side;
    public int findArea(){
        return side*side;
    }
    public int findParameter(){
        return 4*side;
    }
    public void setSide(int _side){
        side = _side;
    }
}

public class Main {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.id = 1;
        e1.name="Asdf";
        e1.salary = 2342342;
        e1.showDetails();
        System.out.println(e1.getSalary());
        e1.changeName("Nothing");
        e1.showDetails();

        Square sq = new Square();
        sq.setSide(5);
        System.out.println(sq.findArea());
        System.out.println(sq.findParameter());

    }
}
