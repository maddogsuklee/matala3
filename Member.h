# include <iostream>
//# include "Member.cpp"
#include <vector>
# pragma once

struct Member{
      std::vector<Member> arr;
       std::vector<Member> arr2;
    int Followers;
    int Following;
    int kov;
    int id;
    std::string name;
    static int numofmembers;
    Member(): Followers(0),Following(0),kov(8){
        id= numofmembers;
        numofmembers++;

    }
  //  ~Member() { delete arr[]; arr = nullptr;}
 void follow(Member& s);
 void unfollow(Member& s);
 int numFollowers();
    int  numFollowing();
   static int count();
};

int Member::numofmembers=0;

    



