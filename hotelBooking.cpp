#include<bits/stdc++.h>
using namespace std;
/*nt doubleRand() {
  return int(rand()) / (int(RAND_MAX) + 100);
}*/
int bftest(int celling,int flooring)
{
//between 3.0 and 3.5

int rnd = rand() % (flooring*10) + (celling*10);
return rnd / 10;
}
int main() {
    int room,booked;
  //srand(static_cast<unsigned int>(clock()));
  cin>>room>>booked;
    int n[booked];

  for (int i=0; i < booked; i++) {
    cin>>n[i];
  }
  if(room==booked)
    cout<<"too late"<<endl;
  else
  {
      again:
      int ran=bftest(1,room);

      for(int i=0;i<booked;)
      {

 if(ran==n[i])
 {

     goto again;
 }
 else
 {
     i++;
 }
  }
  cout<<ran<<endl;
}
}
/*
double bftest()
{
//between 3.0 and 3.5

double rnd = rand() % 30 + 35;
return rnd / 10;
}

*/
