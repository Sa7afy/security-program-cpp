# security-program-cpp

0. Affine Cipher
In affine cipher each letter in an alphabet is mapped to its numeric equivalent, encrypted using a
simple mathematical function, and converted back to a letter. Letter A is given number 0 and letter Z
is given number 25. Each letter is encrypted with the function (5x + 8) mod 26. The decryption
function is 21(y − 8) mod 26. See examples at: https://cryptii.com/affine-cipher/.
Example
Plaintext A F F I N E C I P H E R
Ciphertext I H H W V C S W F R C P

1. Caesar Cipher
Caesar cipher is one of the simplest and most widely known encryption techniques. It is a type of
substitution cipher in which each letter in the plaintext is replaced by a letter at some fixed number
of positions down the alphabet. For example, with a right shift of 3, A would be replaced by D, B
would become E, X becomes A, and so on. User should enter the number of shifts he wants to
the right or left (+ve or –ve). If shift is > 26, take mod 26.
Example (assume a right shift by 3)
Plain: ABCDEFGHIJKLMNOPQRSTUVWXYZ
Cipher: DEFGHIJKLMNOPQRSTUVWXYZABC

2. Atbash Cipher
The Atbash cipher is a very common, simple cipher. Basically, when encoded, an "A" becomes a
"Z", "B" turns into "Y", etc. See http://rumkin.com/tools/cipher/atbash.php. Example:
Plain: ABCDEFGHIJKLMNOPQRSTUVWXYZ
Cipher: ZYXWVUTSRQPONMLKJIHGFEDCBA
Plain: MOHAMMAD ELRAMLY
Cipher: NLSZNNZW 


3. Vignere Cipher
In this method, a keyword is repeatedly added character by character to each alphabetic letter in the
original message. The addition is carried out using the ASCII codes for each of the characters,
modulo 26 (the number of letters in the alphabet), and the result is added to the code for the letter 'A'
in the ASCII code sequence. For example, if the original message is "due November 4" and the
keyword is "HWone", the message will be encrypted as follows:
 message: DUE NOVEMBER 4
 ||||||||||||||
 repeated keyword: HWONEHWONEHWON
 ||||||||||||||
encrypted message: KQS RVRSZFLN 4



4. Baconian Cipher
To encode a message, each letter of the plaintext is replaced by a group of five of the letters 'A' or
'B'. This replacement is a binary encoding. For example, SAMY will be baaba aaaaa abbaa bbaaa.
Letter Code Binary
See http://rumkin.com/tools/cipher/baconian.php


5. Simple Substitution Cipher.
In this cipher, a replacement alphabet is used to replace each letter by another one. See
http://practicalcryptography.com/ciphers/simple-substitution-cipher/
For example, if we use this cipher alphabet:
plain alphabet : abcdefghijklmnopqrstuvwxyz
cipher alphabet: phqgiumeaylnofdxjkrcvstzwb


6. Polybius Square Cipher
See how it works at https://en.wikipedia.org/wiki/Polybius_square and
https://www.dcode.fr/polybius-cipher using numbers. Each letter is replaced with two numbers
according to the following table. Write another version where top and left numbers are given as a
key, e.g., instead of 1 | 2 | 3 | 4 | 5 , user can enter the key 2 | 4 | 5 | 3 | 1 but you will need to have
the same key to decipher the message. So, if the sender enters the key 1 2 3 4 5
Plain text : I love C plus plus
Cipher text: 24 32355215 13 41325144 41325144



7. Morse Code
It is a code consisting of two symbols dot and dash and used to in the telegraph system in the past
and also communicate messages in primitive ways. See http://www.unitconversion.info/texttools/morse-code/
Develop a program to translate a message to Morse code and the opposite. Assume that each letter is
separated by one space from the next and that each word is separated by three spaces from the next.
Example:
Plain text: I love C plus plus
Morse text:
.. .-.. --- ...- . -.-. .--. .-.. ..- ... .--. .-.. ..- ...


8. XOR Cipher
In this cipher, a secret key consisting of one letter is give. Then each letter of the message goes
through XOR operation with the secret letter. The output is printed in text and hexadecimal. The
original message can be recovered from the encrypted message by the same algorithm, XOR with the
secret letter.
Example:
Secret key is 'P'= 01010000
Plain text: ILIKECPLUSPLUS
Cipher text: y}yzus`|eb`}ec (Hexa 797d797a7573607c6562607d6563)



9. Rail-fence Cipher
See the details at http://practicalcryptography.com/ciphers/classical-era/rail-fence/.
