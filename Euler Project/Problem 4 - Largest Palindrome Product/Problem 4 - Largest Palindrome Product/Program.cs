using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_4___Largest_Palindrome_Product
{
    class Program
    {
        static void Main(string[] args)
        {
            //OK! (Y)
            int prod;
            int M_pal = 0;
            for (int i = 100; i <= 999; i++)
            {
                for (int j = 100; j <= 999; j++)
                {
                    prod = i * j;
                    if (prod == reverse(prod))
                    {
                        if (M_pal < prod)
                        {
                            M_pal = prod;
                        }

                    }
                }

            }
            Console.WriteLine(M_pal);
            Console.ReadKey();
        }
        static int reverse(int x)
        {
            int num = x;
            int nextdigit;
            string a = "";
            do
            {
                nextdigit = num % 10;
                a += nextdigit;
                num = num / 10;
            } while (num > 0);

            return Convert.ToInt32(a);

        }
    }
}
