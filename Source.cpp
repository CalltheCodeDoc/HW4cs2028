#include <iostream>
#include <string>
#include <random>


using namespace std;


// ****************** HW 4********************
/*
      ___           ___           ___           ___           ___           ___           ___           ___              
     /\  \         /\  \         /\  \         /\__\         /\  \         /\  \         /\  \         /|  |             
     \:\  \       /::\  \       |::\  \       /:/ _/_       _\:\  \       /::\  \       /::\  \       |:|  |             
      \:\  \     /:/\:\  \      |:|:\  \     /:/ /\__\     /\ \:\  \     /:/\:\  \     /:/\:\__\      |:|  |             
  ___ /::\  \   /:/  \:\  \   __|:|\:\  \   /:/ /:/ _/_   _\:\ \:\  \   /:/  \:\  \   /:/ /:/  /    __|:|  |             
 /\  /:/\:\__\ /:/__/ \:\__\ /::::|_\:\__\ /:/_/:/ /\__\ /\ \:\ \:\__\ /:/__/ \:\__\ /:/_/:/__/___ /\ |:|__|____         
 \:\/:/  \/__/ \:\  \ /:/  / \:\~~\  \/__/ \:\/:/ /:/  / \:\ \:\/:/  / \:\  \ /:/  / \:\/:::::/  / \:\/:::::/__/         
  \::/__/       \:\  /:/  /   \:\  \        \::/_/:/  /   \:\ \::/  /   \:\  /:/  /   \::/~~/~~~~   \::/~~/~             
   \:\  \        \:\/:/  /     \:\  \        \:\/:/  /     \:\/:/  /     \:\/:/  /     \:\~~\        \:\~~\              
    \:\__\        \::/  /       \:\__\        \::/  /       \::/  /       \::/  /       \:\__\        \:\__\             
     \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/   */ 

int main()
{
	//REMEMBER THIS IS DUE TUESDAY     SO GIVE IT LOW PRIORITY
    //look over it again before friday class or thursday so u understand it better
    // but main priorities are LAB, project, homework , stats ESPECIALLY STATS
         
    srand(time(NULL));
    
    
    //        3. Create a BST(your choice on if it is balanced or not).* Hint, use the code you previously
    //        wrote for a HW / Lab.
    
  
    //        4. Create a main function that will be used to test your 2 data structures.This should
    //        generate a list of 100 random, unique integers that will be used to test all three data
    //        structures(both should get the same set of integers in the same order).Then perform the
    //        following tasks :
    //a.Insert the first 50 values in both data structures, keeping a running sum of spots
    //    checked to insert those items.This value after inserting 50 should be recorded.
    // 
    
    //    b.Remove all the items from the data structures where the index of the value in the
    //    main function % 7 == 0. Record the running sum of spots checked to remove
    //    those items.
    //    c.Insert the remaining 50 values from both data structures.Record the running sum
    //    of spots checked to remove those items.
    //    d.Attempt to find all the items in the hash table where the index value in the main
    //    function % 9 == 0 and the item wasn’t removed previously.Record the running
    //    sum of spots checked.
     
    
    //    5. Analyze the results(number of spots checked for all 3 structures) and explain your
    //    findings.Did it meet your expectations ? Which performed best ? What situations makes
    //    each ideal and least ideal ?
     
     
     
    //    6. Write unit tests for your two classes.You can learn more about unit tests for Visual
    //    Studio at https ://docs.microsoft.com/en-us/visualstudio/test/writing-unit-tests-for-c-
    //cpp ? view = vs - 2019.
    
		
	return 0;
}