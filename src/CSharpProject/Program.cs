using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpProject
{
    class Program
    {
        [DllImport("FirstLibrarySH.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Add(int a, int b);

        static void Main(string[] args)
        {
            int a = Add(3, 5);
            int b = 3;
        }
    }
}
