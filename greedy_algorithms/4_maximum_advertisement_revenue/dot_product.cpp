#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long max_dot_product(vector<int>a, vector<int>b)
{
  long long result = 0;
  for (size_t i=0; i<a.size(), ++i)
  {
    result = result + ((long long)a[i]) * b[i];
  }
  return result;
}

int main()
{
  size_t n;
  cout<<"Enter the number of clicks: \n";
  cin>>n;
  vector<int>a(n), b(n);

  //Profit per-click
  for(size_t i=0; i<n; i++)
  {
    cin>>a[i];
  }

  //average number of clicks
  for(size_t i=0; i<n; i++)
  {
    cin>>b[i];
  }

  cout<<max_dot_product(a,b)<<endl;

  return 0;
}