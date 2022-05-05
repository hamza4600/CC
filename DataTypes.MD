#   Two main Types of Data Structure
#  PRIMATIVE 
#  NON PRIMITIVE types

# Primitive are the basic like int , double , char ,bool 

## Non Primitive are of  two types 
# Linear Data Structure
# Non-Linear Data Structure

## Linear Data Structure include :
    ARRAY
    SATCK
    QUEUE
    LINKED LIST 

# Non-Linear Data Structure
    TREE 
    GRAPHS




## common Operatio on data Structurs
# sorting item ;
# add new Item ;
# Search  Item ;
# Delete  Item ;
# Modifieng  Item ;


### common data Types >

## Array
## Link List
## Stack
## Queues
## Hash table   
## Trees
## Heaps
## Graphs
## Sets
## Maps
## Buffer

# Array:
     An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory 

# Link List :
    Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.
# Stack :
    Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). 

# Queue : 
     Like Stack, Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). A good example of the queue is any queue of consumers for a resource where the consumer that came first is served first. The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.
# Binary Tree :     
    Unlike Arrays, Linked Lists, Stack and queues, which are linear data structures, trees are hierarchical data structures. A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. It is implemented mainly using Links. 

    A Binary Tree is represented by a pointer to the topmost node in the tree. If the tree is empty, then the value of root is NULL. A Binary Tree node contains the following parts. 
    Each tree has a root node (at the top).
    The root node has zero or more child nodes.
# Heap :
     A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types: 
# Max Heap :
    In a max heap, the keys of parent nodes are always greater than or equal to those of the children. 
# Min Heap :
    In a min heap, the keys of parent nodes are less than or equal to those of the children.


# Hashing Data Structure :
        Hashing is an important Data Structure which is designed to use a special function called the Hash function which is used to map a given value with a particular key for faster access of elements. The efficiency of mapping depends on the efficiency of the hash function used.

# Matrix : 
    A matrix represents a collection of numbers arranged in an order of rows and columns. It is necessary to enclose the elements of a matrix in parentheses or brackets. 

# Graphs : 
    Graphs are collections of nodes (also called vertices) and the connections (called edges) between them. Graphs are also known as networks.
    One example of graphs is a social network. The nodes are people and the edges are friendship.

# Buffer :
    A buffer contains data that is stored for a short amount of time, typically in the computer's memory (RAM). The purpose of a buffer is to hold data right before it is used. For example, when you download an audio or video file from the Internet, it may load the first 20% of it into a buffer and then begin to play. While the clip plays back, the computer continually downloads the rest of the clip and stores it in the buffer. Because the clip is being played from the buffer, not directly from the Internet, there is less of a chance that the audio or video will stall or skip when there is network congestion.

     Buffers are typically used when there is a difference between the rate at which data is received and the rate at which it can be processed





# Array and Link List difference ;
    Array store data in Order  : Faster to get  item with ndex Value : Use less Size  : inserting new elemt is an Expensive Process move position of all Items 

    Link List store data in randomly in memory : It Have to ittera all item to get require item  : use More Memeory Size : inserting new elemt is NOt an Expensive Process      