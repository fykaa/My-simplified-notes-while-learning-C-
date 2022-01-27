/* Closing the file

It is very important to close file after read or write.

This is achieved using fclose as follows:

fclose(ptr);

This will tell the compiler that we are done working with this file and the associated resources could be freed. */

//@//file closing is a good practice so that minimum resources are occupied on the ram while working
     //here we closed the file jab uska scanning ka kaam hogaya, ab aage jo maine store kiya vo print karrahe h;