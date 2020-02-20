
#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

class book
{
public:
  int id;
  int score;
  int isScanned;

  book()
  {

  }
  book(int id , int score)
  {
    this.id = id;
    this.score = score;
    isScanned = 0;
  }

  




};

class library
{
public:

  int m,n,t;
  vector<int> bookid;
  int pri;
  int score;


  library()
  {
    score=0;
  }

  library(int n, int t, int m, vector<int> ids )
  {
    this.m = m;
    this.n = n;
    this.t = t;
    bookid = ids;
    score=0;

  }
};



int main()
{
  int B,L,D;

  cin>>B>>L>>D;

  vector<book> books;

  for(int i=0; i<B; ++i)
  {
    int s;
    cin>>s;
    books.push_back(new book(i,s));
  }

  vector<library> librarys;
  vector<int> ids;
  for(int i=0; i<L; ++i)
  {
    int N,T,M;

    cin>>N>>T>>M;

    for(int j=0; j<N; ++j)
    {
      int id;
      cin>>id;

      ids.push_back(id);
    }

    librarys.push_back(new library(N,T,M,ids));

  }



}
