import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner input=new Scanner(System.in);
        int i=0,n=0;
        String str;
        
        n = input. nextInt();


        for(i=0;i<n;i++)
        {
            String left=null;
            String right=null;
            str=input.next();
          for(int j=0;j<str.length();j++)
          {
            if(j==0)
                left=Character.toString(str.charAt(0));
            else if(j%2==0)
                left=left+str.charAt(j);
            else if(j==1) 
                right=Character.toString(str.charAt(j));
            else
                right=right+str.charAt(j);

          }

          str=left+" "+right;
          System.out.println(str);
        }


        
    }
}
