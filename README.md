*This project has been created as part of the 42 curriculum by helfayez*

## Description

This project is an implementation of the `push_swap` sorting algorithm using a radix sort approach on a linked list-based stack.  
The goal is to sort a list of integers using a limited set of stack operations (`sa`, `sb`, `pa`, `pb`, `ra`, `rra`, etc.) with the smallest possible number of moves.

For this implementation, I chose to use a bit-by-bit radix sort on the indices of the elements instead of comparing full indices directly. This allows the algorithm to progressively sort the stack based on each bit (from the least significant bit upwards), which reduces the number of direct comparisons and fits the constraints of the project.

## Instructions

The program validates all input numbers, checks for duplicates, and converts each value into an index that represents its position in sorted order.
Sorting is then done using two stacks (A and B) and a bit-by-bit radix sort:
For each bit:
If the current element's bit is 0 → push to stack B (pb)
If the bit is 1 → rotate stack A (ra)
After finishing one bit pass, all elements are pushed back to A using pa
When all bits are processed, stack A becomes fully sorted

For very small inputs, hard-coded logic is used because it's faster and requires fewer moves than radix:
2 numbers → one comparison and sa if needed
3 numbers → minimal conditional logic using sa, ra, rra
4–5 numbers → push the smallest (and second smallest if needed) to stack B using pb,
sort the remaining 3 elements in A, then return everything to A with pa

## Resources

### Documentation & Tutorials
- 42 subject PDF for `push_swap`
- General radix sort explanations and bitwise operations tutorials
- Articles and videos on linked lists in C

### AI Usage

I used AI (such as ChatGPT) as a **learning assistant**, not as a code generator.  
Specifically:
- To help me **understand how radix sort works**, especially the bit-by-bit version, because I did not fully understand it from YouTube videos.
- To explain **how linked lists work in C**, since this is my first project using linked lists.
- To clarify logic and data structure concepts in natural language before I wrote the actual implementation myself.

All the code in this repository was written, adapted, and debugged by me. AI was only used to better understand the concepts and to get explanations, not to produce final code.
