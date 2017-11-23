using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;

namespace Problem_25___1000_digit_Fibonacci_number
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Diagnostics.Stopwatch s = new System.Diagnostics.Stopwatch();
            s.Start();
            int i = 0;
            int cont = 2;
            BigInteger limite = BigInteger.Pow(10, 999);
            BigInteger[] fb = new BigInteger[3];
            fb[0] = 1;
            fb[2] = 1;
            while (fb[i] <= limite)
            {
                i = (i + 1) % 3;
                cont++;
                fb[i] = fb[(i + 1) % 3] + fb[(i + 2) % 3];
            }
            Console.WriteLine(s.Elapsed);
            s.Stop();
            Console.WriteLine(cont);
            Console.ReadKey();
        }
    }
}
