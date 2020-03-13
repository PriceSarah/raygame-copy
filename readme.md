Sarah Price
s198041
Assessment 4- Binary Tree
Binary Tree Documentation


Description: create a binary tree that can add, remove, and selsct nodes

File: Node.h

   Description- crate a node

     Attributes:
     
         -Name: next
         Description: goes to the next node
         Type: Node<T>*
         Visibility: public
         
          -Name: Previous
         Description: goes to the Previous node
         Type: Node<T>*
         Visibility: public
         
     
File: List.h

 Description: holds data

     Attributes:
     
         -Name: mCount
         Description: used to keep tract of posistion in the list
         Type: int
         Visibility: protected
        
         -Name: First
         Description: the first spot in the list
         Type: Node<T>*
         Visibility: protected
         
         -Name: insertFirst
         Description: adds a node to the beginning of the list
         Type: virtual void
         Visibility: public
         
         -Name: insertLast
         Description: adds a node to the end of the list
         Type: virtual void
         Visibility: public
         
     Operations:
         
         -Name: isListEmpty
         Description: checks to see if list is empty
         Type: bool
         Visibility: public
         
         -Name: front
         Description: returns the info in the first spot of the list
         Type: T
         Visibility: public
         
         -Name: List
         Description: default constructor
         Type: constructor
         Visibility: public
         
         -Name: ~List
         Description: default deconstructor
         Type: deconstructor
         Visibility: public
         
File: TreeNode.h

 Description: pieces of data that is put into the tree

     Attributes:
     
         -Name: m_value
         Description: keeps track of the value
         Type: int
         Visibility: private
         
         -Name: m_left
         Description: the node that is on the left
         Type: TreeNode*
         Visibility: private
         
         -Name: m_right
         Description: the node that is on the right
         Type: Node<T> *
         Visibility: public
         
     Operations:
         
         -Name: hasLeft
         Description: checks to see if there is a left node
         Type: bool
         Visibility: public
         
         -Name: hasRight
         Description: checks to see if there is a right node
         Type: bool
         Visibility: public
         
         -Name: getData
         Description: gets the data stored in a node
         Type: int
         Visibility: public
         
         -Name: getRight
         Description: gets the data stored in the right node
         Type: TreeNode*
         Visibility: public
         
         -Name: getLeft
         Description: gets the data stored in the left node
         Type: TreeNode*
         Visibility: public
         
         -Name: setData
         Description: sets the data stored in a node
         Type: void
         Visibility: public
         
         -Name: setRight
         Description: sets the data stored in the right node
         Type: TreeNode*
         Visibility: public
         
         -Name: setLeft
         Description: sets the data stored in the left node
         Type: TreeNode*
         Visibility: public
         
         -Name: draw
         Description: draws the tree nodes
         Type: void
         Visibility: public
         
         -Name: Node
         Description: default deconstructor that takes an int
         Type: deconstructor
         Visibility: public
         
         -Name: ~Node
         Description: default deconstructor
         Type: deconstructor
         Visibility: public
         
File: UnorderedList.h

 Description: list that is not ordered
         
     Operations:
         
         -Name: insertFirst
         Description: adds a node to the beginning of the list
         Type: void
         Visibility: public
         
         -Name: insertLast
         Description: adds a node to the end of the list
         Type: void
         Visibility: public
         
         -Name: deleteNode
         Description: deletes a node
         Type: void
         Visibility: public
         
File: BinaryTree.h

 Description: creates the binary tree itself

     Attributes:
     
         -Name: m_pRoot
         Description: the roots data
         Type: TreeNode*
         Visibility: private
         
     Operations:
         
         -Name: isEmpty
         Description: checks if the tree is empty
         Type: bool
         Visibility: public
         
         -Name: insert
         Description: inserts a node
         Type: void
         Visibility: public
         
         -Name: remove
         Description: removes a node
         Type: void
         Visibility: public
         
         -Name: find
         Description: finds a node
         Type: TreeNode*
         Visibility: public
         
         -Name: draw
         Description: draws the selected node
         Type: void
         Visibility: public
         
         -Name: findNode
         Description: finds the specific node
         Type: bool
         Visibility: private
         
         -Name: draw
         Description: draws the Binary Tree
         Type: void
         Visibility: private
         
         -Name: BinaryTree
         Description: default deconstructor that takes an int
         Type: deconstructor
         Visibility: public
         
         -Name: ~BinaryTree
         Description: default deconstructor
         Type: deconstructor
         Visibility: public
         
File: main.cpp

 Description: runs on start up; where key functions are called

     Operations:
         
         -Name: main
         Description: runs on start up
         Type: int
         Visibility: private
## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
