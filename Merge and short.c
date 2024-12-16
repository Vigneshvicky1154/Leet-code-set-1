void mergeAndSort(int* a, int m, int* b, int n, int* c)
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < n; j++)
    {
        c[m + j] = b[j];
    }
    int l = m + n;
    int temp;
    for (i = 0; i < l; i++)
     {
        for (j = i+1; j < l; j++) 
         {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}
