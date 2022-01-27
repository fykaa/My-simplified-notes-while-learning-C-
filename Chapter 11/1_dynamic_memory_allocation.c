/*
Chapter 11 - Dynamic Memory Allocation

C is a language with some fixed rules of programming. 
For example: changing the size of an array is not allowed.


Dynamic Memory Allocation:
Dynamic memory allocation is a way to allocate memory to a data structure 
    during the runtime we can use DMA function available in C 
    to allocate and free memory during runtime.





@EXPLANATION:

if im running a prgram to uska stack mein memory milti hai,
every function has stack jisme us function ke variables ko memory di jayegi 
mai ek aur segment of memory se kuch memory request kar skta hu , this is called HEAP
stack function return hone pr destroy ho jati hai, 
heap is DYNAMIC memory, to uss area ko dynamically allocate ki jati hai

in arrays we can't change the size
like array[9] is possible
but  array[a] is not possible

so if we dont know ki array ki size kitni hai , to ham kitne size ka array banaye ye janna mushkil hojayega, you can't do ki 100,000 length ka array banado isse kam mein to ho jayega!, because usse space in ram occupy hojayega and memory waste hogi
hence you'll have to learn how to manage The size dynamically


so dynamic memory allocation isliye kiya jaata hai taaki run time par memory ko free kiya jaa sake, banaya jaa sake, fir reserve kiya jaa sake!
when you write int arr[10], you can't easily delete that memory or reallocate it. so while programming if you want to allocate new memory and free memory fir allocate fir freee realocate ye sab ab kam se kam ram mein zyada se zyada kaam karva sakte ho apne program ko
agar aapka program zyada ram khaa raha hai to log us software ko prefer nahi karege, eventually people will stop using your prog, because it is not optimally utilising memory


