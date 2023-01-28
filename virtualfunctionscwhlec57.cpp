#include<iostream>
using namespace std;
class CWH
{
  protected:
  string title;
  float rating;
  public:
  CWH(string s, float r)
  {
     title=s;//c++ mein hum direct aisa kar sakte hain string ke saath.
     rating=r;
  }
  virtual void display()//or void virtual display()
  {
  }
};
class CWHvideo:public CWH
{
    protected:
    float videolength;
    public:
    CWHvideo(string s, float r, float vidlen ): CWH(s,r)
    {
        videolength=vidlen;
    }
    void display()
    {
        cout<<"The title of this video is "<<title<<endl;
        cout<<"The ratings of this video is "<<rating<<endl;
        cout<<"The length of this video is "<<videolength<<endl;
    }
};
class CWHText:public CWH
{
    protected:
    int wordcount;
    public:
    CWHText(string s, float r, int wc): CWH(s,r)
    {
      wordcount=wc;
    }
    void display()
    {
        cout<<"The title of this video is "<<title<<endl;
        cout<<"The ratings of this video is "<<rating<<endl;
        cout<<"The number of words in this video is "<<wordcount<<endl;
    }
};
int main(){
    
    CWHvideo vid("Linked list",4.4,9.56);
    CWHText text("Linked list",4.5,564);
    CWH *ptr[2];
    ptr[0]=&vid;
    ptr[1]=&text;
    ptr[0]->display();
    ptr[1]->display();


    
    return 0;
}