#include iostream
#include vector
#include algorithm
using namespace std;
typedef pairint, int P;
vectorP arr;
int ans=0;
int num;
bool compare(P a, P b){
  if(a.second == b.second){
    return a.first b.first;
  }
  else{
    return a.second  b.second;
  }
}
int main() {
  cinnum;
  for (int i=0; inum; i++){
    int n,l;
    cinnl;
    arr.push_back({n,l});
  }
  sort(arr.begin(), arr.end(),compare);
  int copy_end= arr[0].second;
  for (int i=1; inum; i++){
    if (copy_end = arr[i].first){
      ans++;
      copy_end=arr[i].second;
    }
  }
  coutans+1endl;

  
}