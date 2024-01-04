#include <iostream>
#include "new.h"
using namespace std;


// Test program for BinarySearchTree
int main_bst()
{
    #ifdef bst
     BinarySearchTree<int> t;
    int NUMS = 400000;
    const int GAP  =   3711;
    int i;

    cout << "Checking... (no more output means success)" << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );

    for( i = 1; i < NUMS; i+= 2 )
        t.remove( i );

    if( NUMS < 40 )
        t.printTree( );
    if( t.findMin( ) != 2 || t.findMax( ) != NUMS - 2 )
        cout << "FindMin or FindMax error!" << endl;

    for( i = 2; i < NUMS; i+=2 )
        if( !t.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i+=2 )
    {
        if( t.contains( i ) )
            cout << "Find error2!" << endl;
    }

    BinarySearchTree<int> t2;
    t2 = t;

    for( i = 2; i < NUMS; i+=2 )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i+=2 )
    {
        if( t2.contains( i ) )
            cout << "Find error2!" << endl;
    }

    cout << "Finished testing" << endl;
    #endif
    return 0;
}



// Test program for AVLTree
int main_avl()
{
    #ifdef avl
AvlTree<int> t;
    int NUMS = 2000000;
    const int GAP  =   37;
    int i;

    cout << "Checking... (no more output means success)" << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );
    t.remove( 0 );
    for( i = 1; i < NUMS; i += 2 )
        t.remove( i );

    if( NUMS < 40 )
        t.printTree( );
    if( t.findMin( ) != 2 || t.findMax( ) != NUMS - 2 )
        cout << "FindMin or FindMax error!" << endl;

    for( i = 2; i < NUMS; i += 2 )
        if( !t.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i += 2 )
    {
        if( t.contains( i )  )
            cout << "Find error2!" << endl;
    }

    AvlTree<int> t2;
    t2 = t;

    for( i = 2; i < NUMS; i += 2 )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i += 2 )
    {
        if( t2.contains( i ) )
            cout << "Find error2!" << endl;
    }

    cout << "End of test..." << endl;
    #endif
    return 0;
}



// Test program for RedBlackTree
int main_red_black()
{
    #ifdef rb
    const int NEG_INF = -9999;
    RedBlackTree<int> t{ NEG_INF };
    int NUMS = 400000;
    const int GAP  =   37;
    int i;

    cout << "Checking... (no more output means success)" << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );

    if( NUMS < 40 )
        t.printTree( );
    if( t.findMin( ) != 1 || t.findMax( ) != NUMS - 1 )
        cout << "FindMin or FindMax error!" << endl;

    for( i = 1; i < NUMS; ++i )
        if( !t.contains( i ) )
            cout << "Find error1!" << endl;
    if( t.contains( 0 ) )
        cout << "Oops!" << endl;

    
    RedBlackTree<int> t2{ NEG_INF };
    t2 = t;

    for( i = 1; i < NUMS; ++i )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;
    if( t2.contains( 0 ) )
        cout << "Oops!" << endl;

    cout << "Test complete..." << endl;
    #endif
    return 0;
}



// Test program for SplayTree
int main_splay_tree()
{
    #ifdef splay
    SplayTree<int> t;
        int NUMS = 30000;
        const int GAP  =   37;
        int i;

        cout << "Checking... (no more output means success)" << endl;

        for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
            t.insert( i );

        for( i = 1; i < NUMS; i+= 2 )
            t.remove( i );

        if( NUMS < 40 )
            t.printTree( );
        if( t.findMin( ) != 2 || t.findMax( ) != NUMS - 2 )
            cout << "FindMin or FindMax error!" << endl;

        for( i = 2; i < NUMS; i+=2 )
            if( !t.contains( i ) )
                cout << "Find error1!" << endl;

        for( i = 1; i < NUMS; i+=2 )
        {
            if( t.contains( i ) )
                cout << "Find error2!" << endl;
        }

        SplayTree<int> t2;
        t2 = t;

        for( i = 2; i < NUMS; i+=2 )
            if( !t2.contains( i ) )
                cout << "Find error1!" << endl;

        for( i = 1; i < NUMS; i+=2 )
        {
            if( t2.contains( i ) )
                cout << "Find error2!" << endl;
        }

        cout << "Test completed." << endl;
        #endif
        return 0;
}


int main()
{
    // Run all test functions
  main_bst();
  main_avl();
    main_red_black();
    main_splay_tree();
    return 0;
}
