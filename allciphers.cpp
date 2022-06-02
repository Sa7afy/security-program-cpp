// Program Name:  All_Ciphers.cpp
// Program Description: 10 cipher ways
// Last Modification Date: 29/3/2022
// Yousef Abdalla Attia Email :yabdalla463@gmail.com

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int choose;


//take a,b,c for cipher0
int a,b,c;
void input_0(){

    cout<<"Enter three parameters a, b and c, ((a * c )% 26 must = 1)"<<endl;
    cin>>a>>b>>c;
    if ((a*c) % 26 != 1){
        cout<<"wrong"<<endl;
        input_0();
    }

}

void encrypt_0(){
        //characters

        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
            input_0();
            string str;
            cout<<"Plain text: ";
            getline(cin >> ws, str);
            string str1="";

            //make characters lower

            for (int i =0;i<sizeof(str);i++){
                str[i]=tolower(str[i]);
            }
    //swap charactes

    for(int i = 0; i < str.length(); i++){
        // check space
        if (str[i] == 32){
            str1 += " ";
        }
        else{
            for (int j = 0; j < sizeof(alpha); j++){

                if (str[i] == alpha[j]){
                    int cipher =((a*j)+b) % 26;
                    str1 += alpha[cipher];}
                    }


}
    }
    cout<<"Cipher text: "<<str1<<endl;
}

void decryption_0(){

        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
            input_0();
            string str;
            cout<<"Cipher text: ";
            getline(cin >> ws, str);
            string str1="";



            for (int i =0;i<sizeof(str);i++){
                str[i]=tolower(str[i]);
            }
        //swap characters
    for(int i = 0; i < str.length(); i++){
        // check space
        if (str[i] == 32){
            str1 += " ";
        }
        else{
            for (int j = 0; j < sizeof(alpha); j++){

                if (str[i] == alpha[j]){
                    int cipher =(c*(j-b)%26);
                    if (cipher<0){
                        cipher+=26;
                    }

                    str1 += alpha[cipher];}
                    }


}
    }
    cout<<"Plain text :"<<str1<<endl;
}



void encrypt_1(){
        //inputs
        int shift;
        string str;

        cout<<"enter number of shifts: "<<endl;
        cin>>shift;

        if(shift>26){
            shift%=26;
        }
        if(shift<-26){
            shift%=26;
        }

        cout<<"Plain text : ";
        getline(cin >> ws, str);
        cout<<endl;

        //make text lower
        for (int i =0;i<sizeof(str);i++){
            str[i]=tolower(str[i]);
        }

        //cipher text by changing values
        for(int i = 0;i<sizeof(str);i++){
            int k =str[i];
            int sum = k+shift;

            if (sum>122){
                sum-=26;
            }
            if (sum<97){
                sum+=26;
            }


            str[i]= char(sum);
        }

        cout<<"Cipher text: "<<str<<endl;

}

void decryption_1(){
        //inputs
        int shift;
        string str;

        cout<<"enter number of shifts: "<<endl;
        cin>>shift;

        if(shift>26){
            shift%=26;
        }
        if(shift<-26){
            shift%=26;
        }

        cout<<"Cipher text: "<<endl;
        getline(cin >> ws, str);
        cout<<endl;

        //make characters lower
        for (int i =0;i<sizeof(str);i++){
            str[i]=tolower(str[i]);
        }

        //change characters values
        for(int i = 0;i<sizeof(str);i++){
            int k =str[i];
            int sum = k-shift;

            if (sum>122){
                sum-=26;
            }
            if (sum<97){
                sum+=26;
            }

            str[i]= char(sum);
        }

        cout<< "Plain text : "<<str<<endl;

}



void encrypt_2(){

        //original alpha
        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

        //cipher alpha
        char cipher[26]= {'z','y','x','w','v','u','t',
                            's','r','q','p','o','n','m','l','k'
                            ,'j','i','h','g','f','e','d','c','b','a'};


        string str;

        cout<<"Plain text : ";
        getline(cin >> ws, str);
        cout<<endl;

        //make characters lower
        for (int i =0;i<sizeof(str);i++){
            str[i]=tolower(str[i]);
        }

        //swap characters
        for(int i = 0;i<sizeof(str);i++){
             if (str[i]=='a'){
                str[i]=cipher[0];
             }
              else if (str[i]=='b'){
                str[i]=cipher[1];
             }
             else if (str[i]=='c'){
                str[i]=cipher[2];
             }
             else if (str[i]=='d'){
                str[i]=cipher[3];
             }
             else if (str[i]=='e'){
                str[i]=cipher[4];
             }

             else if (str[i]=='f'){
                str[i]=cipher[5];
             }

             else if (str[i]=='g'){
                str[i]=cipher[6];
             }

             else if (str[i]=='h'){
                str[i]=cipher[7];
             }

              else if (str[i]=='i'){
                str[i]=cipher[8];
             }

             else if (str[i]=='j'){
                str[i]=cipher[9];
             }

             else if (str[i]=='k'){
                str[i]=cipher[10];
             }

              else if (str[i]=='l'){
                str[i]=cipher[11];
             }


             else if (str[i]=='m'){
                str[i]=cipher[12];
             }


              else if (str[i]=='n'){
                str[i]=cipher[13];
             }

             else if (str[i]=='o'){
                str[i]=cipher[14];
             }


             else if (str[i]=='p'){
                str[i]=cipher[15];
             }

             else if (str[i]=='q'){
                str[i]=cipher[16];
             }

              else if (str[i]=='r'){
                str[i]=cipher[17];
             }


             else if (str[i]=='s'){
                str[i]=cipher[18];
             }


             else if (str[i]=='t'){
                str[i]=cipher[19];
             }

              else if (str[i]=='u'){
                str[i]=cipher[20];
             }


             else if (str[i]=='v'){
                str[i]=cipher[21];
             }


            else if (str[i]=='w'){
                str[i]=cipher[22];
             }

             else if (str[i]=='x'){
                str[i]=cipher[23];
             }

             else if (str[i]=='y'){
                str[i]=cipher[24];
             }

             else if (str[i]=='z'){
                str[i]=cipher[25];
             }







        }
        cout<<"Cipher text: "<<str<<endl;



}

void decryption_2(){
        //original alpha
        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

        //cipher alpha
        char cipher[26]= {'z','y','x','w','v','u','t',
                            's','r','q','p','o','n','m','l','k'
                            ,'j','i','h','g','f','e','d','c','b','a'};

        string str;

        cout<<"Cipher text: ";
        getline(cin >> ws, str);
        cout<<endl;

        //make text lower
        for (int i =0;i<sizeof(str);i++){
            str[i]=tolower(str[i]);
        }

        //swap characters
        for(int i = 0;i<sizeof(str);i++){
             if (str[i]==cipher[0]){
                str[i]=alpha[0];
             }
              else if (str[i]==cipher[1]){
                str[i]=alpha[1];
             }
              else if (str[i]==cipher[2]){
                str[i]=alpha[2];
             }
              else if (str[i]==cipher[3]){
                str[i]=alpha[3];
             }
              else if (str[i]==cipher[4]){
                str[i]=alpha[4];
             }

              else if (str[i]==cipher[5]){
                str[i]=alpha[5];
             }

              else if (str[i]==cipher[6]){
                str[i]=alpha[6];
             }

              else if (str[i]==cipher[7]){
                str[i]=alpha[7];
             }

              else if (str[i]==cipher[8]){
                str[i]=alpha[8];
             }

              else if (str[i]==cipher[9]){
                str[i]=alpha[9];
             }

              else if (str[i]==cipher[10]){
                str[i]=alpha[10];
             }

              else if (str[i]==cipher[11]){
                str[i]=alpha[11];
             }


              else if (str[i]==cipher[12]){
                str[i]=alpha[12];
             }


              else if (str[i]==cipher[13]){
                str[i]=alpha[13];
             }

              else if (str[i]==cipher[14]){
                str[i]=alpha[14];
             }


             else if (str[i]==cipher[15]){
                str[i]=alpha[15];
             }

             else if (str[i]==cipher[16]){
                str[i]=alpha[16];
             }

             else if (str[i]==cipher[17]){
                str[i]=alpha[17];
             }

             else if (str[i]==cipher[18]){
                str[i]=alpha[18];
             }

             else if (str[i]==cipher[19]){
                str[i]=alpha[19];
             }
             else if (str[i]==cipher[20]){
                str[i]=alpha[20];
             }


              else if (str[i]==cipher[21]){
                str[i]=alpha[21];
             }

             else if (str[i]==cipher[22]){
                str[i]=alpha[22];
             }

              else if (str[i]==cipher[23]){
                str[i]=alpha[23];
             }

              else if (str[i]==cipher[24]){
                str[i]=alpha[24];
             }

              else if (str[i]==cipher[25]){
                str[i]=alpha[25];
             }







        }

    cout<<"Plain text : "<<str<<endl;


}



void cipher_3(string,string){
 //inputs
 string message ,keyword ;
 cout <<"please enter the message: ";
 getline(cin>> ws,message);
 cout <<"please enter the keyword: ";
 cin >> keyword ;
 if (message.length() > 80)
    cout << "wrong input !!"<<endl;
 else if (keyword.length() > 8)
   cout << "wrong input !!"<<endl;
   //change values
 else
   {
    for (int i=0 ; i < message.length() ; i++)
 {
     if (message[i] == ' ')
        cout<<' ';
    else if (isdigit(message[i]))
        cout<<message[i];
     else
     {
         keyword += keyword ;
         int x = int(toupper(message[i])) + int(toupper(keyword[i])) ;
         cout<< char((x % 26)+65);
     }
}
    }
    cout<<endl;
}



void encrypt_4(){
        //characters
        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
             //cipher
            string cipher[26]={"aaaaa","aaaab","aaaba","aaabb",
            "aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa",
            "ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab",
            "baaba","baabb","babaa","babab ","babba","babbb","bbaaa",
            "bbaab"};

            string str;
            cout<<"Plain text : ";
            getline(cin >> ws, str);
            string str1="";

            //make text lower

            for (int i =0;i<sizeof(str);i++){
                str[i]=tolower(str[i]);
            }
    //swap alpha with cipher
    for(int i = 0; i < str.length(); i++){
        // check space
        if (str[i] == 32){
            str1 += " ";
        }
        else{
            for (int j = 0; j < sizeof(alpha); j++){

                if (str[i] == alpha[j]){
                    str1 += cipher[j];}}


}
    }
    cout<<"Cipher text: "<<str1<<endl;
}

void decryption_4(){

            char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

            string cipher[26]={"aaaaa","aaaab","aaaba","aaabb",
            "aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa",
            "ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab",
            "baaba","baabb","babaa","babab ","babba","babbb","bbaaa",
            "bbaab"};

            string str;
            cout<<"Cipher text: ";
            getline(cin >> ws, str);
            string str1="";
            string check_str;


            //make text lower
            for (int i =0;i<sizeof(str);i++){
                str[i]=tolower(str[i]);
            }
            // remove space
            str.erase(remove(str.begin(), str.end(), ' '), str.end());




        //take every 5 characters and change them with alpha
        for(int i = 0; i < str.length(); i+=5){
        check_str="";
        check_str+=str[i];
        check_str+=str[i+1];
        check_str+=str[i+2];
        check_str+=str[i+3];
        check_str+=str[i+4];

        for (int j = 0; j < sizeof(cipher); j++){

            if (check_str == cipher[j]){
                str1 = str1+ alpha[j];
                            }
                        }

        }

    cout<<"plain text : "<<str1<<endl;
    }


//key for cipher 5
string key;
void input_key(){
        //take key
        cout<<"Enter Key from 5 letters: ";

        cin>>key;
        //check all elements not the same

        if (key.length()!=5 ){
            cout<<"invalid key"<<endl;
            input_key();
            }

    }

void encrypt_5(){



        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

        int increase = 0;

        string str;

        input_key();
        //make key lower
        for (int i =0;i<sizeof(key);i++){
            key[i]=tolower(key[i]);
        }

        char cipher[26];
        //put key in start array
        for (int i=0 ; i<sizeof(key);i++){
            cipher[i]=key[i];

        }

        for (int i =0;i<sizeof(cipher);i++){

        //check that characters not in the key
        if(cipher[0]!=alpha[i] &&cipher[1]!=alpha[i] &&cipher[2]!=alpha[i] &&cipher[3]!=alpha[i] &&cipher[4]!=alpha[i] ){


            cipher[increase+5]=alpha[i];
            increase+=1;

            }

        }
        cout<<"Plain text : ";
        getline(cin >> ws, str);


        //make key lower
        for (int i =0;i<sizeof(str);i++){
            str[i]=tolower(str[i]);
        }
        //swap characters
        for(int i = 0;i<sizeof(str);i++){
             if (str[i]=='a'){
                str[i]=cipher[0];
             }
              else if (str[i]=='b'){
                str[i]=cipher[1];
             }
             else if (str[i]=='c'){
                str[i]=cipher[2];
             }
             else if (str[i]=='d'){
                str[i]=cipher[3];
             }
             else if (str[i]=='e'){
                str[i]=cipher[4];
             }

             else if (str[i]=='f'){
                str[i]=cipher[5];
             }

             else if (str[i]=='g'){
                str[i]=cipher[6];
             }

             else if (str[i]=='h'){
                str[i]=cipher[7];
             }

              else if (str[i]=='i'){
                str[i]=cipher[8];
             }

             else if (str[i]=='j'){
                str[i]=cipher[9];
             }

             else if (str[i]=='k'){
                str[i]=cipher[10];
             }

              else if (str[i]=='l'){
                str[i]=cipher[11];
             }


             else if (str[i]=='m'){
                str[i]=cipher[12];
             }


              else if (str[i]=='n'){
                str[i]=cipher[13];
             }

             else if (str[i]=='o'){
                str[i]=cipher[14];
             }


             else if (str[i]=='p'){
                str[i]=cipher[15];
             }

             else if (str[i]=='q'){
                str[i]=cipher[16];
             }

              else if (str[i]=='r'){
                str[i]=cipher[17];
             }


             else if (str[i]=='s'){
                str[i]=cipher[18];
             }


             else if (str[i]=='t'){
                str[i]=cipher[19];
             }

              else if (str[i]=='u'){
                str[i]=cipher[20];
             }


             else if (str[i]=='v'){
                str[i]=cipher[21];
             }


            else if (str[i]=='w'){
                str[i]=cipher[22];
             }

             else if (str[i]=='x'){
                str[i]=cipher[23];
             }

             else if (str[i]=='y'){
                str[i]=cipher[24];
             }

             else if (str[i]=='z'){
                str[i]=cipher[25];
             }

        }
        cout<<"Cipher text: "<<str<<endl;


        }

void decryption_5(){



        char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

        int increase = 0;

        string str;

        input_key();
        //make key lower
        for (int i =0;i<sizeof(key);i++){
            key[i]=tolower(key[i]);
        }

        char cipher[26];
        // make text lower
        for (int i=0 ; i<sizeof(key);i++){
            cipher[i]=key[i];

        }
        //check characters
        for (int i =0;i<sizeof(cipher);i++){


        if(cipher[0]!=alpha[i] &&cipher[1]!=alpha[i] &&cipher[2]!=alpha[i] &&cipher[3]!=alpha[i] &&cipher[4]!=alpha[i] ){


            cipher[increase+5]=alpha[i];
            increase+=1;

            }

        }
        cout<<"Cipher text: ";
        getline(cin >> ws, str);


        // make text lower
        for (int i =0;i<sizeof(str);i++){
            str[i]=tolower(str[i]);
        }
        //swap characters
        for(int i = 0;i<sizeof(str);i++){
             if (str[i]==cipher[0]){
                str[i]='a';
             }
              else if (str[i]==cipher[1]){
                str[i]='b';
             }
             else if (str[i]==cipher[2]){
                str[i]='c';
             }
             else if (str[i]==cipher[3]){
                str[i]='d';
             }
             else if (str[i]==cipher[4]){
                str[i]='e';
             }

             else if (str[i]==cipher[5]){
                str[i]='f';
             }

             else if (str[i]==cipher[6]){
                str[i]='g';
             }

             else if (str[i]==cipher[7]){
                str[i]='h';
             }

              else if (str[i]==cipher[8]){
                str[i]='i';
             }

             else if (str[i]==cipher[9]){
                str[i]='j';
             }

             else if (str[i]==cipher[10]){
                str[i]='k';
             }

              else if (str[i]==cipher[11]){
                str[i]='l';
             }


             else if (str[i]==cipher[12]){
                str[i]='m';
             }


              else if (str[i]==cipher[13]){
                str[i]='n';
             }

             else if (str[i]==cipher[14]){
                str[i]='o';
             }


             else if (str[i]==cipher[15]){
                str[i]='p';
             }

             else if (str[i]==cipher[16]){
                str[i]='q';
             }

              else if (str[i]==cipher[17]){
                str[i]='r';
             }


             else if (str[i]==cipher[18]){
                str[i]='s';
             }


             else if (str[i]==cipher[19]){
                str[i]='t';
             }

              else if (str[i]==cipher[20]){
                str[i]='u';
             }


             else if (str[i]==cipher[21]){
                str[i]='v';
             }


            else if (str[i]==cipher[22]){
                str[i]='w';
             }

             else if (str[i]==cipher[23]){
                str[i]='x';
             }

             else if (str[i]==cipher[24]){
                str[i]='y';
             }

             else if (str[i]==cipher[25]){
                str[i]='z';
             }


        }

        cout<<"Plain text: "<<str<<endl;

}

void cipher_8(string input, int option){
    char key;
    cout << "Please enter the key you want: ";
    cin >> key;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Invalid input!";
        cin >> key;
    }
    string result,result_hexa;
    switch(option){
        case 1:
            input = input;
            for(int i = 0; i< input.length(); i++){
                input[i] = toupper(i);
            }
            for (auto chr : input){
                result += chr ^ key;
                char * temp;
                itoa(chr * key,temp, 16);
                string tempstr(temp);
                if (tempstr.length() == 1){
                    result_hexa += "0";
                }
                result_hexa += temp;
            }
            cout << "Plain text: " << input << endl;
            cout << "Encrypted text: " << result << "(hexa: " << result_hexa << ")" << endl;
            break;
        case 2:
            int i = 0;
            for (int i = 0; i < input.length(); i += 2){
                stringstream ss;
                ss << hex << input[i] << input[i + 1];
                int temp;
                ss >> temp;
                result += temp ^ key;
            }
            cout << "Encrypted text: " << input << endl;
            cout << "Plain text: " << result << endl;

    }

    system("stop");

}


void cipher_7(){

 int x ;
 string text , code , token  ;
 istringstream scin("");
 map <char ,string> cipher{
     {'A',".-"},
     {'B',"-..."},
     {'C',"-.-."},
     {'D',"-.."},
     {'E',"."},
     {'F',"..-."},
     {'G',"--."},
     {'H',"...."},
     {'I',".."},
     {'J',".---"},
     {'K',"-.-"},
     {'L',".-.."},
     {'M',"--"},
     {'N',"-."},
     {'O',"---"},
     {'P',".--."},
     {'Q',"--.-"},
     {'R',".-."},
     {'S',"..."},
     {'T',"-"},
     {'U',"..-"},
     {'V',"...-"},
     {'W',".--"},
     {'X',"-..-"},
     {'Y',"-.--"},
     {'Z',"--.."}
 };
 cout <<"choose (1) for encryption (2) for decryption : ";
 cin >> x ;
 if (x ==1 ){
    cout << "please enter a word to cipher : ";
    cin>>text ;

    for (char letter : text){
        letter = toupper(letter);
        cout <<cipher[letter]<<" ";
    }
 }
 else{
        cout <<"enter encrypted word : ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');cin>>code;
        scin.str(code);
        while(scin){
        for (char letter = 65 ;letter < 90;letter++){
            if (cipher[letter] == token){
                cout <<letter ;
            }
        }
        scin >>token ;
    }
    cout<<endl;

    }
}


// function to encrypt a message
string encrypt9(string text, int key)
{
    // key = rows , length(text) = columns
    char rail[key][(text.length())];

    for (int i=0; i < key; i++)
        for (int j = 0; j < text.length(); j++)
            rail[i][j] = '\n';

    // to find the direction
    bool dir_down = false;
    int row = 0, col = 0;

    for (int i=0; i < text.length(); i++)
    {
        // check the direction of flow
        if (row == 0 || row == key-1)
            dir_down = !dir_down;

        rail[row][col++] = text[i];
        dir_down?row++ : row--;
    }
    string result;
    for (int i=0; i < key; i++)
        for (int j=0; j < text.length(); j++)
            if (rail[i][j]!='\n')
                result.push_back(rail[i][j]);

    return result;
}

// This function receives cipher-text and key  and returns the original text after decryption
string decrypt9(string cipher, int key)
{
    // key = rows , length(text) = columns
    char rail[key][cipher.length()];

    for (int i=0; i < key; i++)
        for (int j=0; j < cipher.length(); j++)
            rail[i][j] = '\n';

    bool dir_down;

    int row = 0, col = 0;

    for (int i=0; i < cipher.length(); i++)
    {
        if (row == 0)
            dir_down = true;
        if (row == key-1)
            dir_down = false;

        rail[row][col++] = '*';

        dir_down?row++ : row--;
    }
    int index = 0;
    for (int i=0; i<key; i++)
        for (int j=0; j<cipher.length(); j++)
            if (rail[i][j] == '*' && index<cipher.length())
                rail[i][j] = cipher[index++];

    string result;

    row = 0, col = 0;
    for (int i=0; i< cipher.length(); i++)
    {
        if (row == 0)
            dir_down = true;
        if (row == key-1)
            dir_down = false;

        if (rail[row][col] != '*')
            result.push_back(rail[row][col++]);

        dir_down?row++: row--;
    }
    return result;
}




int main(){
    int start=1;
    while (start){
    cout<<"1 for start" <<" "<<"0 for End :  ";
    cin>>start;
    cout<<endl;
    if (start==0){
        start=false;
        break;
    }


    int way;
    cout<<"choose way from 0 to 9"<<endl;

    cout<<"0. Affine Cipher"<<endl;
    cout<<"1. Caesar Cipher"<<endl;
    cout<<"2. Atbash Cipher"<<endl;
    cout<<"3. Vignere Cipher"<<endl;
    cout<<"4. Baconian Cipher"<<endl;
    cout<<"5. Simple Substitution Cipher."<<endl;
    cout<<"6. Polybius Square Cipher"<<endl;
    cout<<"7. Morse Code "<<endl;
    cout<<"8. XOR Cipher"<<endl;
    cout<<"9. Rail-fence Cipher"<<endl;
    cin>>way;


    cout<<"choose 1 or 2"<<endl;
    cout<<"1- Encryption"<<"  "<<"2- Decryption"<<endl;

    int choose;
    cin>>choose;

    if (way==0){
    if (choose==1){
        encrypt_0();
    }
    else if (choose == 2){
        decryption_0();
    }
}

    if (way==1){
    if(choose==1){
        encrypt_1();
    }

    if(choose==2){
        decryption_1();
        }
    }

    if (way==2){
    if(choose==1){
        encrypt_2();
    }

    if(choose==2){
        decryption_2();}
        }

    if (way==3){
    char message[80] ,keyword[8] ;
     cipher_3(message,keyword);
    }

    if (way==4){
    if (choose==1){
        encrypt_4();
        }
    else if (choose == 2){
        decryption_4();
        }
    }

    if (way==5){
        if(choose==1){
            encrypt_5();}

        if(choose==2){
            decryption_5();}
        }

    if (way==7){
     cipher_7();
        }
    if (way==8){
            string input;int option;
        cipher_8(input,option);
    }

    if (way==9){
        if (choose==1){
                string text1;
                cout << "enter you text to encode or decode: ";
                getline(cin>>ws,text1);
                cout << encrypt9(text1, 3) << endl;
        }
        if (choose==2){
                string text1;
                cout << "enter you text to encode or decode: ";
                getline(cin>>ws,text1);
                cout << decrypt9(text1,3) << endl;
            }

        }

    }

}
