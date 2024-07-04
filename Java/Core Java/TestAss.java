import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
	
class Tester {

    public static Map<Character, Integer> findOccurrences(String input) {
        Map<Character,Integer>ans = new HashMap<>();
		for(Character obj:input.toCharArray()){
			if(ans.containsKey(obj)){
				ans.put(obj,ans.get(obj)+1);
			}
			else{
				ans.put(obj,1);
			}
		}
        return ans;
	}
	
	public static void main(String args[]) {
		
		String input = "data structures";
		Map<Character, Integer> occurrenceMap = findOccurrences(input);
		
		System.out.println("Occurrences of characters\n=======================");
		for (Entry<Character, Integer> entry : occurrenceMap.entrySet()) {
			System.out.println(entry.getKey()+" -- "+entry.getValue());
		}
		
	}

}