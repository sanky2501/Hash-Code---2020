
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


int getScore(library l , vector<book> books)
  {
      vector<int> ids = l.bookid;
      int score;

      for(int i=0; i<ids.size(); ++i)
      {
          for(int j = 0; j<books.size(); ++j)
          {
              if(ids[i] == books[j].id)
              {
                score+=books[j].score;

              }
          }
      }

      return score;
  }

void output()
{
    cout<<l;        //no of libraries go for signup
    cout<<sort_library<<" "<<;// first lib id and no of books
    cout<<;     //first lib order of books
    cout<<;     //2nd lib id and no of books
    cout<<;     //2nd lib order of books

}
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
