#pragma once

class Printable
{
public:
   Printable& operator << (const char *);
   Printable& operator << (int);
   Printable& operator << (float);
   Printable& operator << (unsigned int);
   Printable& operator << (unsigned long);
protected:
   virtual void PrintChar(char ch) = 0;
};
