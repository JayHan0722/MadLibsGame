//Authors: Jaehyun Han
#include <iostream>
#include <string>
using namespace std;

int main()
{
        string Silly_Word;
        string Noun_1;
        int Number;
        std::string Verb;
        string Noun_2;
        string Emotion;

        cout<<"Type in a silly word: ";
        cin>>Silly_Word;

        cout<<"Type in a noun: ";
        cin>>Noun_1;

        cout<<"Type in a number: ";
        cin>>Number;

        cout<<"Type in a verb: ";
        cin>>Verb;

        cout<<"Type in a noun: ";
        cin>>Noun_2;

        cout<<"Type in a emotion: ";
        cin>>Emotion;

        cout<< "There was boy named " << Silly_Word;
        cout<< "He had a strong " << Noun_1 << " and when he was "<< Number;
        cout<< "he " << Verb << " with " << Noun_2 << " for fun.";
        cout<< "It made him " << Emotion << " to be included.";


  return 0;
}
