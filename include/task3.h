



template<class T, int n>
T minArr(T (&a)[n])
{
  T min = a[0];
  for(int i = 0; i < n; ++i)
    if (a[i] < min)
      min = a[i];
  return min;
}
