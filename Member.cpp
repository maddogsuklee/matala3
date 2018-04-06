# include <iostream>
# include "Member.h"
# pragma once


void Member::follow(Member& s){
    bool b=false;
   for (auto it=arr.begin(); it!=arr.end();it++){
  Member x=*it;
  if (x.id==s.id)
  b=true;
   
 }
 if (b==false){
    Following++;
    s.Followers++;
    arr.push_back(s);
 }
}    
void Member::unfollow(Member& s){
    bool b=false;
      for (auto it=arr2.begin(); it!=arr2.end();it++){
  Member x=*it;
  if (x.id==s.id)
  b=true;
      }
      if (b==false){
       Following--;
    s.Followers--;
     arr2.push_back(s);
      }
}

int Member::numFollowers(){
    return  Followers;
 }
 
  int  Member::numFollowing(){
      return Following;
  }
  
  int Member::count(){
      return  Member::numofmembers;
      
  }