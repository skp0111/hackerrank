import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)
    {
        String a;
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        try{
        for(int i=0; i<=n; i++)
        {
            a=sc.next();
            for(int j=0; j<a.length(); j++)
            {
                if(j%2==0)
                System.out.print(a.charAt(j));
            }
            System.out.print(" ");
             for(int j=0; j<a.length(); j++)
            {
                if(j%2==1)
                System.out.print(a.charAt(j));
            }
            System.out.println();
        }
         sc.close();
        }
        catch (Exception e){
        return;
    }
}
}
