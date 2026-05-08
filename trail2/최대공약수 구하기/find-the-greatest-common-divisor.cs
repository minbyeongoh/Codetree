using System;

public class CommonDiv {
    int n, m, div;
    void ReadDiv() {
        var inputs = Console.ReadLine().Split();
        n = int.Parse(inputs[0]);
        m = int.Parse(inputs[1]);
    }
    void FindDiv() {
        div = 1;
        for(int i = 2; i <= n || i <= m; i++) {
            if(n % i == 0 && m % i == 0) {
                div = i;
            }
        }
        Console.WriteLine(div);
    }
    public void Run() {
        ReadDiv();
        FindDiv();
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        CommonDiv go = new CommonDiv();
        go.Run();
    }
}
