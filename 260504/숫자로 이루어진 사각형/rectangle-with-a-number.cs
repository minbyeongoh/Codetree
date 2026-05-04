using System;

public class Codetree
{  
    class NumRect {
        int n, tmp = 1;
        void NumIn() {
            n = int.Parse(Console.ReadLine());
        }
        void NumPrint() {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(tmp==10) tmp = 1;
                    Console.Write($"{tmp} ");
                    tmp++;
                }
                Console.WriteLine();
            }
        }
        public void Run() {
            NumIn();
            NumPrint();
        }
    }
    public static void Main()
    {
        // Please write your code here.
        NumRect a = new NumRect();
        a.Run();
    }
}
