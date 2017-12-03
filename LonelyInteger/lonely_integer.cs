using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {
    static int lonelyinteger(int[] a) {
        bool found = false;

        for (int i = 0; i < a.Length; i++) {
            for (int j = 0; j < a.Length; j++) {
                if (i != j && a[i] == a[j]) found = true;
            }
            
            if (!found) return a[i];
            found = false;
        }
        return 0;
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] a_temp = Console.ReadLine().Split(' ');
        int[] a = Array.ConvertAll(a_temp,Int32.Parse);
        int result = lonelyinteger(a);
        Console.WriteLine(result);
    }
}
