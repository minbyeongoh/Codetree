using System;

class divisor {
    int start, end, count = 0, div;
    void Input() {
        string a = Console.ReadLine();
        string[] b = a.Split(' ');
        start = int.Parse(b[0]);
        end = int.Parse(b[1]);
    }

    public void _divisor() {
        Input();
        for(int i=start; i<=end; i++) {
            div = 0;
            for(int j=1; j<=i; j++) {
                if(i%j==0) div++;
            }
            if(div==3) count++;
        }
        Console.WriteLine($"{count}");
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        divisor a = new divisor();
        a._divisor();
    }
}
