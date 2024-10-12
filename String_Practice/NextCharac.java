import java.util.*;

class Testj {
    public static void main(String[] args) {
        String str = "Hello World";
        System.out.println(nextCharacter(str));
    }

    public static String nextCharacter(String str) {
        

        char[] strChar = str.toLowerCase().toCharArray();
        StringBuilder sb = new StringBuilder();

        for (char ch : strChar) {
            if (Character.isLetter(ch)) {
                int aIndex = (int)'a';
                System.out.println("A-- Index"+" "+aIndex +" \t Coming Character index"+" "+((int)ch));
                int index = ch - 'a';
                
                System.out.println("Index is:-------------------"+index +" \t Character is"+((char) ('a'+index+1)));
                if (index == 25) {   // If 'z', append 'a'
                    sb.append('a');
                } else {
                    sb.append((char)('a'+index+1)); 
                }
            } else {
                sb.append(ch); // Append non-letter characters Like: Space
            }
        }

        return sb.toString();
    }
}
