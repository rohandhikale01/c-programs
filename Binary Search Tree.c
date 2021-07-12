#include<stdio.h>
#include<conio.h>

struct node
{
    int num;
    struct node *left,*right;
};
struct node *keynode=0,*parent,*temp,*main_root,*inorder_sucsr;
struct node *create()
{
    int x;
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("\nEnter number or -1 for no node: ");
    scanf("%d",&x);

    if(x==-1) //if no node want to add then corresponding pointer is set to 0 //
    {
        return 0;
    }
    newnode->num=x;
    printf("\nEnter left child of %d",x);  //to insert left child //
    newnode->left=create();

    printf("\nEnter right child of %d",x); //to insert right child //
    newnode->right=create();
}

void preorder(struct node *root)
{
    if(root==0)
    {
        return 0;
    }
    printf("\nNumber: %d",root->num);
    preorder(root->left);
     preorder(root->right);

}

void inorder(struct node *root)
{
    if(root==0)
    {
        return 0;
    }

    inorder(root->left);
    printf("\nNumber: %d",root->num);
    inorder(root->right);

}
void postorder(struct node *root)
{
    if(root==0)
    {
        return 0;
    }

    postorder(root->left);
    postorder(root->right);
    printf("\nNumber: %d",root->num);

}

void insert(struct node *root,int key)
{

    if(root->num>key) //if node value is greater than value which user want to insert //
    {
        if(root->left==0) //if no left node exist then insert//
        {
            struct node *newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->left=0;
            newnode->right=0;
            newnode->num=key;
            root->left=newnode;
            printf("\nNumber %d is inserted successfully.",key);

            return 0;
        }
        else //if left node exist then move to next child //
        {
            insert(root->left,key);
        }
    }
    if(root->num<key) //if node value is less than value which user want to insert //

    {
        if(root->right==0) //if no right node exist then insert//
        {
            struct node *newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->left=0;
            newnode->right=0;
            newnode->num=key;
            root->right=newnode;
            printf("\nNumber %d is inserted successfully.",key);

            return 0;

        }
        else //if right node exist then move to next child //
        {
            insert(root->right,key);
        }
    }
}

search(struct node *root,int key)
{
    if(root==0)
    {
        printf("\nNo Such a Node Exist.");
        keynode=0;
    }
    else if(root->num==key)
    {
        printf("\nNode Searched Successfully.");
        keynode=root;
    }
    else if(root->num>key)
    {
        search(root->left,key);
    }
    else if(root->num<key)
    {
      search(root->right,key);
    }
}

void delete_node(struct node *root,int key)
{
    search(root,key);
    if(keynode==0) //keynode is address of key which we want to delete//
    {
        printf("\nNo such a node exist");
        return 0;
    }
    else if((keynode->left==0)&&(keynode->right==0)) //to check whether given node is leaf or not //
    {
        get_parent(root,keynode);
        if(parent->left==keynode)
        {
            free(parent->left);
            parent->left=0;
            printf("\nNode %d is deleted successfully.",key);
        }
        else
        {
            free(parent->right);
            parent->right=0;
            printf("\nNode %d is deleted successfully.",key);

        }
    }
    else if((keynode->left==0)||(keynode->right==0)) //to check whether given node is have either left or right node //
    {
        if(main_root==keynode) //if keynode is main_root of tree //
        {
            if(keynode->left!=0) //if keynode has left child//
            {
                temp=keynode;
                main_root=keynode->left;
                free(temp);
                printf("\nNode %d is deleted successfully.",key);
            }
            else if(keynode->right!=0) //if keynode has right child //
            {
                temp=keynode;
                main_root=keynode->right;
                free(temp);
                printf("\nNode %d is deleted successfully.",key);

            }
        }
        else if(main_root!=keynode)
        {

        get_parent(root,keynode);

        if(parent->left==keynode) //if keynode is at left of parent //
        {

            if(keynode->left!=0) //to check whether keynode has left child or right //
        {
            temp=keynode->left;
            free(parent->left);
            parent->left=temp;
            printf("\nNode %d is deleted successfully.",key);
        }
        else if(keynode->right!=0)
        {
            temp=keynode->right;
            free(parent->left);
            parent->left=temp;
            printf("\nNode %d is deleted successfully.",key);

        }

        }
        else if(parent->right==keynode) //if keynode is at right of parent node//
        {
            if(keynode->left!=0) //to check whether keynode has left child or right //
        {
            temp=keynode->left;
            free(parent->right);
            parent->right=temp;
             printf("\nNode %d is deleted successfully.",key);
        }
        else if(keynode->right!=0)
        {
            temp=keynode->right;
            free(parent->right);
            parent->right=temp;
             printf("\nNode %d is deleted successfully.",key);
        }
        }
        }
        }
        else if((keynode->left!=0)&&(keynode->right!=0)) //if keynode as two child //
                {
                        get_parent(main_root,keynode); //to find parent node//
                        get_inorder_sus(keynode->right); //to find inorder successor //

                        if(parent->left==keynode)//if keynode is left child of parent node//
                        {
                            parent->left=inorder_sucsr; //here parent is parent of keynode//
                            inorder_sucsr->left=keynode->left;
                            inorder_sucsr->right=main_root->right;
                            free(keynode);
                            printf("\nNumber %d is deleted successfully.",key);
                        }
                        else if(parent->right==keynode) //if keynode is right child of parent node//
                        {
                            parent->right=inorder_sucsr;//here parent is parent of keynode//
                            inorder_sucsr->left=keynode->left;
                            inorder_sucsr->right=inorder_sucsr->right;
                            free(keynode);
                            printf("\nNumber %d is deleted successfully.",key);

                        }

                }

}

void get_parent(struct node *root,struct node *x) //to find parent of keynode//
{
    if(root->num==x->num)
    {
        parent=temp;
        printf("\nParent node: %d",parent->num);
        return 0;
    }
    else if(root->num>x->num)
    {
        temp=root;
        get_parent(root->left,x);
    }
    else if(root->num<x->num)
    {
        temp=root;
        get_parent(root->right,x);
    }
}

void get_inorder_sus(struct node *root) // to find inorder successor  of a node which we want to delete//
{
    inorder_sucsr=root; //store the address of successor//

    if(root->left==0) //if it's successor return //
    {
        printf("\nsucss=%d",inorder_sucsr->num);
        return 0;
    }
    else
    {
        get_inorder_sus(root->left);
    }
}

main()
{

    printf("Program to Create,Traversal,Insertion & deletion of BST(Binary Search tree).\n");

    int x,key;

    while(1)
    {
        printf("\nEnter 0 to stop.");
        printf("\nEnter 1 to create BST");
        printf("\nEnter 2 for Preorder Traversal.");
        printf("\nEnter 3 for Inorder Traversal.");
        printf("\nEnter 4 for Postorder Traversal.");
        printf("\nEnter 5 to insert Element.");
        printf("\nEnter 6 to Delete Element. : ");
        scanf("%d",&x);

        switch(x)
        {
            case 0: getch();
                    return 0;

            case 1:main_root=create();
            break;

            case 2:preorder(main_root);
                break;

            case 3:inorder(main_root);
                break;

            case 4:postorder(main_root);
                break;

            case 5:{
                    printf("\nEnter the number which you want to insert: ");
                    scanf("%d",&key);
                    insert(main_root,key);
                   }
                break;

            case 6:
                {
                    printf("\nEnter the number which you want to delete: ");
                    scanf("%d",&key);
                    delete_node(main_root,key);
                }
                break;

            default:printf("\nEnter valid number.\n");
                break;

        }
    }
}
