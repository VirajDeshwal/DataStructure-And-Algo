#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

using namespace std;
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
  //Value so far
  double value = 0.0;
  
  // Filled so far
  double filled = 0.0;

  int num_items = weights.size();
  double values_by_weight [ num_items];


      //Double loop for value  per unit weight
      for(int i=0; i<num_items; ++i)
      {
        values_by_weight = (double) values.at(i) / weights.at(i);
      }

      if(num_items) > 1
      {
        //Insertion sorting
        for(int i=1; i< num_items; ++i)
        {
          double key = values_by_weight[i];
          int wtkey = weights.at(i);

          int j = i-1;
          while(j>=0 && values_by_wt[j] > key)
          {
            weights.at(j+1) = weights.at(j);
            values_by_wt[j+1] = values_by_wt[j];
            j--;
          }

          weights.at(j+1) = wtkey;
          values_by_wt[j+1]  = key;
        }
      }

        int i = num_items - 1;
        while(filled < capacity && i>=0)  // check condition for filling
        {
          // while there is room in the bag, put the max mount
		      // given by the smaller of capacity - filled and weight of ith item.
		      // this is the greedy choice using the sortedness.

          double min = capacity - filled - weights.at(i) > 0 ? weights.at(i) : capacity-filled;
          filled +=min;
          value += min*values_by_wt[i];
          --i;
        }
        return value;
      }

int main()
{
  int n;
  int capacity;
  cout<<"How many values/weights: \n";
  cin>>n;
  cout<<"What is the total capacity: \n";
  cin>>capacity;
  vector<int> values(n);
  vector<int> weights(n);

  for(int i=0; i<n; i++)
  {
    cin>> values[i] >> weights[i];
  }
  
  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout<<"The optimal value is: "<<optimal_value<<endl;
  return 0;





}