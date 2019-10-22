#include "tree.4.h"
vector<int> AllSubtreeSizes(const vector<vector<int>>& enfants){
  vector<int> sum(enfants.size());
  for (int node = 0; node < enfants.size(); node ++){
    if (enfants[node].empty()){
      sum[node] = 1 ;
    }else{
        sum = AllSubtreeSizes(enfants);
    }
  }
  return sum;
}
