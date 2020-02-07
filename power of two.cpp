bool is isPowerOfTwo(int n) {
        long int i=1;
        while(i<n)
        {
            i*=2;
        }
        return i==n;

    }
