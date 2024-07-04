// Java Program to Demonstrate Working of 
// Comparator Interface

// Importing required classes 
import java.io.*;
import java.lang.*;
import java.util.*;

// Class 1
// A class to represent a Student
class Student {

	// Attributes of a student
	int rollno;
	String name, address;

	// Constructor
	public Student(int rollno, String name, String address)
	{

		// This keyword refers to current instance itself
		this.rollno = rollno;
		this.name = name;
		this.address = address;
	}

	// Method of Student class
	// To print student details in main()
	public String toString()
	{

		// Returning attributes of Student
		return this.rollno + " " + this.name + " "
			+ this.address;
	}
}

// Class 2
// Helper class implementing Comparator interface
class Sortbyroll implements Comparator<Student> {

	// Method
	// Sorting in ascending order of roll number
	public int compare(Student a, Student b)
	{

		return a.rollno - b.rollno;
	}
}

// Class 3
// Helper class implementing Comparator interface
class Sortbyname implements Comparator<Student> {

	// Method
	// Sorting in ascending order of name
	public int compare(Student a, Student b)
	{

		return a.name.compareTo(b.name);
	}
}

// Class 4
// Main class
class GFG {

	// Main driver method
	public static void main(String[] args)
	{

		// Creating an empty ArrayList of Student type
		ArrayList<Student> ar = new ArrayList<Student>();

		// Adding entries in above List
		// using add() method
		ar.add(new Student(111, "Mayank", "london"));
		ar.add(new Student(131, "Anshul", "nyc"));
		ar.add(new Student(121, "Solanki", "jaipur"));
		ar.add(new Student(101, "Aggarwal", "Hongkong"));

		// Display message on console for better readability
		System.out.println("Unsorted");

		// Iterating over entries to print them
		for (int i = 0; i < ar.size(); i++)
			System.out.println(ar.get(i));

		// Sorting student entries by roll number
		Collections.sort(ar, new Sortbyroll());

		// Display message on console for better readability
		System.out.println("\nSorted by rollno");

		// Again iterating over entries to print them
		for (int i = 0; i < ar.size(); i++)
			System.out.println(ar.get(i));

		// Sorting student entries by name
		Collections.sort(ar, new Sortbyname());

		// Display message on console for better readability
		System.out.println("\nSorted by name");

		// // Again iterating over entries to print them
		for (int i = 0; i < ar.size(); i++)
			System.out.println(ar.get(i));
	}
}




// Here we are sorting map in descending order of their value field

// import java.util.ArrayList;
// import java.util.Collections;
// import java.util.Comparator;
// import java.util.HashMap;
// import java.util.List;
// import java.util.Map;
// import java.util.Map.Entry;

// class Tester {
    
// 	public static List<String> sortSales(Map<String, Integer> sales) {
// 		List<Entry<String, Integer>> list = new ArrayList<>(sales.entrySet());

//         Collections.sort(list, new Comparator<Entry<String, Integer>>() {
//             public int compare(Entry<String, Integer> o1, Entry<String, Integer> o2) {
//                 return o2.getValue()-(o1.getValue()); // Descending order
//             }
//         });
// 		List<String>ans = new ArrayList<>();
// 		for(Entry<String,Integer> obj:list){
// 			ans.add(obj.getKey());
// 		}
// 		return ans;
// 	}

// 	public static void main(String args[]) {
// 	    Map<String, Integer> sales = new HashMap<String, Integer>();
// 		sales.put("Mathew", 50);
// 		sales.put("Lisa", 722);
// 		sales.put("Courtney", 45);
// 		sales.put("David", 49);
// 		sales.put("Paul", 49);
		
// 		List<String> employees = sortSales(sales);
		
// 		System.out.println("Employees in the decreasing order of their sales\n=====================================");
// 		for (String employeeName : employees) {
// 			System.out.println(employeeName);
// 		}
// 	}

// }