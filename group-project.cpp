#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
//DECLARATION----------------------------------------------------------------------------------------------------------------
    int age, table;
    string fName, mName, lName ;
    string selection, input, gender;
//Veg----------------------------------------------------------------------------------------------------------------------
    //cheese
    int cnum = 0, cnum_g = 0, cnum_a = 0, cnum_c = 0;
    string cnumg_name= " ", cnuma_name= " ", cnumc_name= " ";
    //--------------------------------

    //pasta
    int pnum = 0, pnum_s = 0, pnum_m = 0, pnum_l = 0 ;
    string pnums_name= " " , pnumm_name = " ", pnuml_name = " "; 
    //--------------------------------
    
    //vegetables
    int vnum, vnum_b = 0, vnum_s = 0, vnum_br = 0;
    string vnumb_name = " ", vnums_name= " ", vnumbr_name= " ";
    //--------------------------------
//Non-Veg---------------------------------------------------------------------------------------------------------------
    //chicken
    int chnum = 0, chnum_g = 0, chnum_a = 0, chnum_c = 0;
    string chnumg_name = " ", chnuma_name = " ", chnumc_name = " ";
    //--------------------------------

    //beacon
    int bnum = 0, bnum_s = 0, bnum_m = 0, bnum_l = 0 ;
    string bnums_name= " " , bnumm_name = " ", bnuml_name = " "; 
    //--------------------------------
    
    //turkey
    int tnum, tnum_b = 0, tnum_s = 0, tnum_br = 0;
    string tnumb_name= " " , tnums_name= " ", tnumbr_name= " ";
    //--------------------------------
//Vegan-------------------------------------------------------------------------------------------------------------
    //legumes
    int lnum = 0, lnum_g = 0, lnum_a = 0, lnum_c = 0;
    string lnumg_name = " ", lnuma_name = " ", lnumc_name = " ";
    //--------------------------------

    //nuts
    int nnum = 0, nnum_s = 0, nnum_m = 0, nnum_l = 0 ;
    string nnums_name= " " , nnumm_name = " ", nnuml_name = " "; 
    //--------------------------------
    
    //tofu
    int tonum, tonum_b = 0, tonum_s = 0, tonum_br = 0;
    string tonumb_name= " " , tonums_name= " ", tonumbr_name= " ";
    //--------------------------------

//----------------------------------------------ORDER-----------------------------------------------------------------------
    cout << "Let's create your order." << endl << endl;
    while (1)
    {
        
        cout << "Enter table number : ";
        cin >> table ;

        if(cin.fail() == 1)
        {
            cout << "Enter a valid input." << endl;
        }
        else
        {
            break;
        }
        cin.clear();
        cin.ignore(999,'\n');

    }
    cout << "Enter your First name: ";
    cin >> fName;
    cout << "Enter your Middle name: ";
    cin >> mName ;
    cout << "Enter your Last name: ";
    cin >> lName ;
//---------------------------------------------------------------------------------------------------------------------------





//---------------------------------------------GENDER--------------------------------------------------------------------------
    while (1)
    {
        cout << "Enter your gender" ;
        cout << "([m]ale, [f]emale and [o]thers): ";
        cin >> gender;

        if (gender != "m" && gender != "f" && gender != "o")
        {
            cout << "Enter a valid input" << endl;
        }
        else
        {
            break;
        }
        
        
    }
//----------------------------------------------------------------------------------------------------------------------------
    




//-----------------------------------------AGE--------------------------------------------------------------------------------
    while (1)
    {
        
        cout << "Please enter your age : ";
        cin >> age ;

        if(cin.fail() == 1)
        {
            cout << "Enter a valid input." << endl;
        }
        else
        {
            if(0 <= age && age < 12 )
            {
                cout << "You're are a child and you require 1,500 Calories a day." << endl << endl ;
                break;
            }
            else if(age < 0)
            {
                cout << "Enter a valid input.";
            }
            else 
            {
                cout << "You're an adult and you require 2,000 Calories a day." << endl;
                break;
            }
        }
        cin.clear();
        cin.ignore(999,'\n');

    }
//-------------------------------------------------------------------------------------------------------------------------------





//---------------------------------------------------FOOD---------------------------------------------------------------------
    




//-----------------------VEG,NON-VEG,VEGANLOOP---------------------------------------------------------------------------
    cout << "Are you vegeterian or non-vegeterian or vegan?" << endl;
    while (1)
    {

        cout << "Enter 'veg' for vegeterian, 'non-veg' for non-vegeterian and 'vegan' for vegan." << endl ;
        cin >> selection;

        if (selection != "veg" && selection != "non-veg" && selection != "vegan")
        {
            cout << "Enter a valid input." << endl; 
        }
        else
        {
            break;
        }
        
    }
//------------------------------------------------------------------------------------------------------------------





// CODE FOR VEGETERIANS--------------------------------------------------------------------------------------------------------
    if (selection == "veg")
    {   
            
        while (1)   
        {
            cout << "Do you want to eat cheese item?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;

            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which cheese do you want?" << endl;
                cout << "1. Gouda Cheese." << endl;
                cout << "2. American Cheese." << endl;
                cout << "3. Cheddar Cheese." << endl;
                
                while (1)
                {  
                    cout << "(Enter number between 1 to 3)" << endl;

                    cin >> cnum;

                    if(cnum != 1 && cnum != 2 && cnum != 3)
                    {
                        cout << "Enter a valid number." << endl;
                    }
                    else
                    {
                        if(cnum == 1)
                        {
                            cout << "What do you want from the following?" << endl ;
                            cout << "1. Apple And Gouda Crescent Roll-ups." << endl ;
                            cout << "2. Apple, Gouda, And Farro Salad." <<  endl;
                            cout << "3. Smoked Gouda and Garlic Mashed Potatoes." << endl;
                            

                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;

                                cin >> cnum_g ;
                                
                                if (cnum_g != 1 && cnum_g != 2 && cnum_g != 3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(cnum_g == 1)
                                    {
                                        cnumg_name == "Apple And Gouda Crescent Roll-ups.";
                                    }
                                    else if(cnum_g == 2)
                                    {
                                        cnumg_name == "Apple, Gouda, And Farro Salad.";
                                    }
                                    else
                                    {
                                        cnumg_name == "Smoked Gouda and Garlic Mashed Potatoes.";
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                                
                            }
                            
                        }

                        else if(cnum == 2)
                        {
                            cout <<"What do you want from the following?" << endl;
                            cout <<"1. Stretchy Melted Grilled Cheese." << endl;
                            cout <<"2. Grilled Cheese Sandwich." << endl;
                            cout <<"3. Nut Free Nacho Cheese Slices." << endl;

                            
                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;
                                cin >> cnum_a;
                                if(cnum_a != 1 && cnum_a != 2 && cnum_a !=3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(cnum_a == 1)
                                    {
                                        cnuma_name == "Stretchy Melted Grilled Cheese.";
                                    }
                                    else if(cnum_a == 2)
                                    {
                                        cnuma_name == "Grilled Cheese Sandwich.";
                                    }
                                    else
                                    {
                                        cnuma_name == "Nut Free Nacho Cheese Slices.";
                                    }
                                    break;
                                    
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            
                        }

                        else
                        {
                            cout << "What do you want from the following?" << endl ;
                            cout << "1. Chickpeas Flour Cheddar Cheese." << endl ;
                            cout << "2. Hickory Smoked Cheese." <<  endl;
                            cout << "3. Chipolte Cheddar Cheese." << endl;

                            
                            
                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;
                                cin >> cnum_c;
                                if(cnum_c != 1 && cnum_c != 2 && cnum_c !=3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(cnum_c == 1)
                                    {
                                        cnumc_name == "Chickpeas Flour Cheddar Cheese.";
                                    }
                                    else if(cnum_c == 2)
                                    {
                                        cnumc_name == "Hickory Smoked Cheese.";
                                    }
                                    else
                                    {
                                        cnumc_name == "Chipolte Cheddar Cheese.";
                                    }
                                    
                                    
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            

                        }

                        break;
                    }
                    cin.clear();
                    cin.ignore(99, '\n');
                    
                }
                
                break;
            }
        }

        while (1)
        {
            cout << "Do you want to eat vegetables items?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;
            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which vegetable you want?" <<  endl;
                cout << "1. Broccoli." << endl;
                cout << "2. Spinach." << endl;
                cout << "3. Brussels Sprout." << endl; 

                
                while (1)
                {
                    cout << "(Enter number between 1 and 3)." << endl;
                    
                    cin >> vnum ; 
                    if(vnum != 1 && vnum != 2 && vnum != 3)
                    {
                        cout << "Enter a valid input" << endl;
                    }
                    else 
                    {
                        if (vnum == 1)
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Garlic Parmesan Roasted Broccoli." << endl;
                            cout << "2. Broccoli Caesar." << endl;
                            cout << "3. Broccoli Salad with Peanut Dressing." << endl;
                            

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." ;
                                cin >> vnum_b ;

                                if (vnum_b != 1 && vnum_b != 2 && vnum_b != 3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if (vnum_b == 1)
                                    {
                                        vnumb_name = "Garlic Parmesan Roasted Broccoli.";
                                        
                                    }
                                    else if (vnum_b == 2)
                                    {
                                        vnumb_name = "Broccoli Caesar.";
                                        
                                    }
                                    else
                                    {
                                        vnumb_name = "Broccoli Salad with Peanut Dressing.";

                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(99, '\n');
                                
                            }
                            

                            break;
                        }

                        else if(vnum == 2)
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Sauleed Spinach." << endl;
                            cout << "2. Mushrooms and Spinach." << endl;
                            cout << "3. Spring Minestrone." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." << endl;
                                cin >> vnum_s ;

                                if(vnum_s != 1 && vnum_s != 2 && vnum_s != 3 )
                                {
                                    cout << "Enter  a valid input." << endl;
                                }

                                else
                                {
                                    if (vnum_s == 1)
                                    {
                                        vnums_name = "Sauleed Spinach.";
                                    
                                    }
                                    else if(vnum_s == 2)
                                    {
                                        vnums_name = "Mushrooms and Spinach.";
                                    
                                    }
                                    else
                                    {
                                        vnums_name = "Spring Minestrone.";
                                    
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(99, '\n');
                            }
                            break;
                            
                        }

                        else
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Maple Roasted Brussels Sprout." << endl;
                            cout << "2. Garlic Brussels Sprout." << endl;
                            cout << "3. Honey Balsamic Brussels Sprout." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." << endl;
                                cin >> vnum_br ;

                                if(vnum_br != 1 && vnum_br != 2 && vnum_br != 3 )
                                {
                                    cout << "Enter  a valid input." << endl;
                                }

                                else
                                {
                                    if (vnum_br == 1)
                                    {
                                        vnumbr_name = "Maple Roasted Brussels Sprout.";
                                    
                                    }
                                    else if(vnum_br == 2)
                                    {
                                        vnumbr_name = "Garlic Brussels Sprout.";
                                    
                                    }
                                    else
                                    {
                                        vnumbr_name = "Honey Balsamic Brussels Sprout.";
                                    
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(9999, '\n');
                            }
                            break;
                        }
                        
                        
                    }
                    cin.clear();
                    cin.ignore(99, '\n');
                
                }
                
                break;
            } 

        }

        while (1)
        {
            cout <<"Do you like pasta?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;

            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which pasta do you want?" << endl;
                cout << "1. Spaghetti." << endl ;
                cout << "2. Macroni." << endl ;
                cout << "3. Lasagne." << endl;

                while (1)
                {
                    cout << "(Enter number between 1 and 3." << endl;

                    cin >> pnum;

                    if(pnum != 1 && pnum !=2 && pnum !=3)
                    {
                        cout << "Enter a valid input." << endl;
                    }
                    else
                    {
                        if(pnum == 1)
                        {
                            cout << "What do you want from following?" << endl;
                            cout << "1. Vegetables Spaghetti." << endl;
                            cout << "2. Spaghetti alla Puttanesca." << endl;
                            cout << "3. Roasted Ratatouille with Spaghetti." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> pnum_s;
                                if (pnum_s != 1 && pnum_s != 2 && pnum_s != 3)
                                {
                                    cout << "Enter a valid input!";
                                }
                                else
                                {
                                    if(pnum_s == 1)
                                    {
                                      pnums_name = "Vegetables Spaghetti";
                                    }
                                    else if(pnum_s == 2)
                                    {
                                        pnums_name = "Spaghetti alla Puttanesca";
                                    }
                                    else
                                    {
                                        pnums_name = "Roasted Ratatouille with Spaghetti" ;
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                                
                            }
                            break;
                            
                        }

                        else if(pnum == 2)
                        {
                            cout << "What do you want from following?" << endl;
                            cout << "1. Veggie Macaroni." << endl;
                            cout << "2. Skillet Ranch and Macaroni." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> pnum_m;

                                if (pnum_m != 1 && pnum_m != 2)
                                {
                                    cout << "Enter a valid input.";
                                }
                                else
                                {
                                    if(pnum_m == 1)
                                    {
                                        pnumm_name = "Veggie Macaroni";
                                    }
                                    else
                                    {
                                        pnumm_name = "Skillet Ranch and Macaroni";
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            break;
                        }

                        else
                        {
                            cout << "What do you want from the following?" << endl;
                            cout << "1. Artichoke Lasagne." << endl;
                            cout << "2. Vegeterian Mushroom Lasagne." << endl ;
                            cout << "3. Roasted Vegetable Lasagne." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> pnum_l ;
                                if (pnum_l != 1 && pnum_l != 2 && pnum_l != 3)
                                {
                                    cout << "Enter a valid input!" << endl;
                                }
                                else
                                {
                                    if(pnum_l == 1)
                                    {
                                        pnuml_name = "Artichoke Lasagne";
                                    }
                                    else if(pnum_l == 2)
                                    {
                                        pnuml_name = "Vegeterian Mushroom Lasagne";
                                    }
                                    else
                                    {
                                        pnuml_name = "Roasted Vegetable Lasagne";
                                    }
                                    break;
                                }
                                

                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            break;
                            
                        }
                        
                        break;
                        
                    }
                    cin.clear();
                    cin.ignore(999,'\n');
                    
                }
                break;
                
            }
            
        }
        
    }
//-----------------------------------------------------------------------------------------------------------------------





//  CODE FOR NON-VEGETERIANS---------------------------------------------------------------------------------------------
    if (selection == "non-veg")
    {
            while (1)   
        {
            cout << "Do you want to eat chicken item?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;

            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which chicken do you want?" << endl;
                cout << "1. Silkie." << endl;
                cout << "2. Rhode Island Red." << endl;
                cout << "3. Brahma Chicken." << endl;
                
                while (1)
                {  
                    cout << "(Enter number between 1 to 3)" << endl;

                    cin >> chnum;

                    if(chnum != 1 && chnum != 2 && chnum != 3)
                    {
                        cout << "Enter a valid number." << endl;
                    }
                    else
                    {
                        if(chnum == 1)
                        {
                            cout << "What do you want from the following?" << endl ;
                            cout << "1. Air Fryer Chicken Brest." << endl ;
                            cout << "2. No peek Chicken." <<  endl;
                            cout << "3. Cheesy Chicken Enchiladas." << endl;
                            

                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;

                                cin >> chnum_g ;
                                
                                if (chnum_g != 1 && chnum_g != 2 && chnum_g != 3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(chnum_g == 1)
                                    {
                                        chnumg_name == "Air Fryer Chicken Brest.";
                                    }
                                    else if(cnum_g == 2)
                                    {
                                        chnumg_name == " No peek Chicken.";
                                    }
                                    else
                                    {
                                        chnumg_name == "Cheesy Chicken Enchiladas.";
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                                
                            }
                            
                        }

                        else if(chnum == 2)
                        {
                            cout <<"What do you want from the following?" << endl;
                            cout <<"1. Chicken Biryani." << endl;
                            cout <<"2. Air Fryer Chicken Thighs." << endl;
                            cout <<"3. Parmesan Chicken Cutlets." << endl;

                            
                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;
                                cin >> chnum_a;
                                if(chnum_a != 1 && chnum_a != 2 && chnum_a !=3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(chnum_a == 1)
                                    {
                                        chnuma_name == "Chicken Biryani.";
                                    }
                                    else if(chnum_a == 2)
                                    {
                                        chnuma_name == "Air Fryer Chicken Thighs.";
                                    }
                                    else
                                    {
                                        chnuma_name == "Parmesan Chicken Cutlets.";
                                    }
                                    break;
                                    
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            
                        }

                        else
                        {
                            cout << "What do you want from the following?" << endl ;
                            cout << "1. Spicy Chicken Taquitos." << endl ;
                            cout << "2. Huli Huli Chicken." <<  endl;
                            cout << "3. Air Fryer Fried Chicken." << endl;

                            
                            
                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;
                                cin >> chnum_c;
                                if(chnum_c != 1 && chnum_c != 2 && chnum_c !=3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(chnum_c == 1)
                                    {
                                        chnumc_name == "Spicy Chicken Taquitos.";
                                    }
                                    else if(chnum_c == 2)
                                    {
                                        chnumc_name == "Huli Huli Chicken.";
                                    }
                                    else
                                    {
                                        chnumc_name == "Air Fryer Fried Chicken.";
                                    }
                                    
                                    
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            

                        }

                        break;
                    }
                    cin.clear();
                    cin.ignore(99, '\n');
                    
                }
                
                break;
            }
        }

        while (1)
        {
            cout << "Do you want to eat bacon items?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;
            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which bacon you want?" <<  endl;
                cout << "1. Pancetta." << endl;
                cout << "2. Turkey Bacon." << endl;
                cout << "3. Back Bacon." << endl; 

                
                while (1)
                {
                    cout << "(Enter number between 1 and 3)." << endl;
                    
                    cin >> bnum ; 
                    if(bnum != 1 && bnum != 2 && bnum != 3)
                    {
                        cout << "Enter a valid input" << endl;
                    }
                    else 
                    {
                        if (bnum == 1)
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Bacon Avocado Fries." << endl;
                            cout << "2. Bacon Onion Rings." << endl;
                            cout << "3. Bacon Chocolate Roses." << endl;
                            

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." ;
                                cin >> bnum_s ;

                                if (bnum_s != 1 && bnum_s != 2 && bnum_s != 3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if (bnum_s == 1)
                                    {
                                        bnums_name = "Bacon Avocado Fries.";
                                        
                                    }
                                    else if (bnum_s == 2)
                                    {
                                        bnums_name = "Bacon Onion Rings.";
                                        
                                    }
                                    else
                                    {
                                        bnums_name = "Bacon Chocolate Roses.";

                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(99, '\n');
                                
                            }
                            

                            break;
                        }

                        else if(bnum == 2)
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Maple Bacon Salmon." << endl;
                            cout << "2. Keto Bacon Sushi." << endl;
                            cout << "3. Maple Bacon Carrots." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." << endl;
                                cin >> bnum_m ;

                                if(bnum_m != 1 && bnum_m != 2 && bnum_m != 3 )
                                {
                                    cout << "Enter  a valid input." << endl;
                                }

                                else
                                {
                                    if (bnum_m == 1)
                                    {
                                        bnumm_name = "Maple Bacon Salmon.";
                                    
                                    }
                                    else if(bnum_m == 2)
                                    {
                                        bnumm_name = "Keto Bacon Sushi.";
                                    
                                    }
                                    else
                                    {
                                        bnumm_name = "Maple Bacon Carrots.";
                                    
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(99, '\n');
                            }
                            break;
                            
                        }

                        else
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Bacon Weave Quesadilla." << endl;
                            cout << "2. Bacon Wrapped Parmesan Potatoes." << endl;
                            cout << "3. Bacon-Wrapped Jalapeño Poppers." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." << endl;
                                cin >> bnum_l ;

                                if(bnum_l != 1 && bnum_l != 2 && bnum_l != 3 )
                                {
                                    cout << "Enter  a valid input." << endl;
                                }

                                else
                                {
                                    if (bnum_l == 1)
                                    {
                                        bnuml_name = "Bacon Weave Quesadilla.";
                                    
                                    }
                                    else if(bnum_l == 2)
                                    {
                                        bnuml_name = "Bacon Wrapped Parmesan Potatoes.";
                                    
                                    }
                                    else
                                    {
                                        bnuml_name = "Bacon-Wrapped Jalapeño Poppers.";
                                    
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(9999, '\n');
                            }
                            break;
                        }
                        
                        
                    }
                    cin.clear();
                    cin.ignore(99, '\n');
                
                }
                
                break;
            } 

        }

        while (1)
        {
            cout <<"Do you like turkey?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;

            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which turkey do you want?" << endl;
                cout << "1. Wild Turkey." << endl ;
                cout << "2. Royal Palm Turkey." << endl ;
                cout << "3. Midget White Turkey." << endl;

                while (1)
                {
                    cout << "(Enter number between 1 and 3." << endl;

                    cin >> tnum;

                    if(tnum != 1 && tnum !=2 && tnum !=3)
                    {
                        cout << "Enter a valid input." << endl;
                    }
                    else
                    {
                        if(tnum == 1)
                        {
                            cout << "What do you want from following?" << endl;
                            cout << "1. Turkey Casserole." << endl;
                            cout << "2. Turkey Noodle Soup." << endl;
                            cout << "3. Turkey Pot Pie." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> tnum_b;
                                if (tnum_b != 1 && tnum_b != 2 && tnum_b != 3)
                                {
                                    cout << "Enter a valid input!";
                                }
                                else
                                {
                                    if(tnum_b == 1)
                                    {
                                      tnumb_name = "Turkey Casserole.";
                                    }
                                    else if(tnum_b == 2)
                                    {
                                        tnumb_name = "Turkey Noodle Soup.";
                                    }
                                    else
                                    {
                                        tnumb_name = "Turkey Pot Pie." ;
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                                
                            }
                            break;
                            
                        }

                        else if(tnum == 2)
                        {
                            cout << "What do you want from following?" << endl;
                            cout << "1. Turkey Broth." << endl;
                            cout << "2. Turkey Divan." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> tnum_s;

                                if (tnum_s != 1 && tnum_s != 2)
                                {
                                    cout << "Enter a valid input.";
                                }
                                else
                                {
                                    if(tnum_s == 1)
                                    {
                                        tnums_name = "Turkey Broth";
                                    }
                                    else
                                    {
                                        tnums_name = "Turkey Divan";
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            break;
                        }

                        else
                        {
                            cout << "What do you want from the following?" << endl;
                            cout << "1. Turkey Enchiladas." << endl;
                            cout << "2. Turkey Tetrazzini." << endl ;
                            cout << "3. Turkey-Bacon-Avocado Grilled Cheese." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> tnum_br ;
                                if (tnum_br != 1 && tnum_br != 2 && tnum_br != 3)
                                {
                                    cout << "Enter a valid input!" << endl;
                                }
                                else
                                {
                                    if(tnum_br == 1)
                                    {
                                        tnumbr_name = "Turkey Enchiladas.";
                                    }
                                    else if(tnum_br == 2)
                                    {
                                        tnumbr_name = "Turkey Tetrazzini.";
                                    }
                                    else
                                    {
                                        tnumbr_name = "Turkey-Bacon-Avocado Grilled Cheese.";
                                    }
                                    break;
                                }
                                

                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            break;
                            
                        }
                        
                        break;
                        
                    }
                    cin.clear();
                    cin.ignore(999,'\n');
                    
                }
                break;
                
            }
            
        }
            
    } 
//-----------------------------------------------------------------------------------------------------------------------------



//  CODE FOR VEGAN---------------------------------------------------------------------------------------------------------
    if (selection == "vegan")
    {
            while (1)   
        {
            cout << "Do you want to eat legumes item?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;

            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which legumes do you want?" << endl;
                cout << "1. Beans." << endl;
                cout << "2. Pea." << endl;
                cout << "3. Chickpeas." << endl;
                
                while (1)
                {  
                    cout << "(Enter number between 1 to 3)" << endl;

                    cin >> lnum;

                    if(lnum != 1 && lnum != 2 && lnum != 3)
                    {
                        cout << "Enter a valid number." << endl;
                    }
                    else
                    {
                        if(lnum == 1)
                        {
                            cout << "What do you want from the following?" << endl ;
                            cout << "1. PINTO BEANS." << endl ;
                            cout << "2. BUTTER BEANS." <<  endl;
                            cout << "3. BORLOTTI BEANS." << endl;
                            

                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;

                                cin >> lnum_g ;
                                
                                if (lnum_g != 1 && lnum_g != 2 && lnum_g != 3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(lnum_g == 1)
                                    {
                                        lnumg_name == "PINTO BEANS.";
                                    }
                                    else if(lnum_g == 2)
                                    {
                                        lnumg_name == "BUTTER BEANS.";
                                    }
                                    else
                                    {
                                        lnumg_name == "BORLOTTI BEANS.";
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                                
                            }
                            
                        }

                        else if(lnum == 2)
                        {
                            cout <<"What do you want from the following?" << endl;
                            cout <<"1. RED LENTILS." << endl;
                            cout <<"2. GREEN LENTILS." << endl;
                            cout <<"3. BLACK-EYED BEANS." << endl;

                            
                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;
                                cin >> lnum_a;
                                if(lnum_a != 1 && lnum_a != 2 && lnum_a !=3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(lnum_a == 1)
                                    {
                                        lnuma_name == "RED LENTILS.";
                                    }
                                    else if(chnum_a == 2)
                                    {
                                        lnuma_name == "GREEN LENTILS.";
                                    }
                                    else
                                    {
                                        lnuma_name == "BLACK-EYED BEANS.";
                                    }
                                    break;
                                    
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            
                        }

                        else
                        {
                            cout << "What do you want from the following?" << endl ;
                            cout << "1. BROAD BEANS." << endl ;
                            cout << "2. BEANSPROUTS." <<  endl;
                            cout << "3. CANNELLINI BEANS." << endl;

                            
                            
                            while (1)
                            {
                                cout << "(Enter number between 1 to 3)" << endl;
                                cin >> lnum_c;
                                if(lnum_c != 1 && lnum_c != 2 && lnum_c !=3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if(lnum_c == 1)
                                    {
                                        lnumc_name == "BROAD BEANS.";
                                    }
                                    else if(lnum_c == 2)
                                    {
                                        lnumc_name == "BEANSPROUTS.";
                                    }
                                    else
                                    {
                                        lnumc_name == "CANNELLINI BEANS.";
                                    }
                                    
                                    
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            

                        }

                        break;
                    }
                    cin.clear();
                    cin.ignore(99, '\n');
                    
                }
                
                break;
            }
        }

        while (1)
        {
            cout << "Do you want to eat nuts items?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;
            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which nuts you want?" <<  endl;
                cout << "1. Almonds." << endl;
                cout << "2. Cashew." << endl;
                cout << "3. HazelNut." << endl; 

                
                while (1)
                {
                    cout << "(Enter number between 1 and 3)." << endl;
                    
                    cin >> nnum ; 
                    if(nnum != 1 && nnum != 2 && nnum != 3)
                    {
                        cout << "Enter a valid input" << endl;
                    }
                    else 
                    {
                        if (nnum == 1)
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Almond cake." << endl;
                            cout << "2. Pistachio and ham salad." << endl;
                            cout << "3. Raw nut butter." << endl;
                            

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." ;
                                cin >> nnum_s ;

                                if (nnum_s != 1 && nnum_s != 2 && nnum_s != 3)
                                {
                                    cout << "Enter a valid input." << endl;
                                }
                                else
                                {
                                    if (nnum_s == 1)
                                    {
                                        nnums_name = "almond cake.";
                                        
                                    }
                                    else if (nnum_s == 2)
                                    {
                                        nnums_name = "Pistachio and ham salad.";
                                        
                                    }
                                    else
                                    {
                                        nnums_name = "Raw nut butter.";

                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(99, '\n');
                                
                            }
                            

                            break;
                        }

                        else if(nnum == 2)
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Florentine slab." << endl;
                            cout << "2. Lemon cashew parsley dip." << endl;
                            cout << "3. Date, walnut and pecan loaf." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." << endl;
                                cin >> nnum_m ;

                                if(nnum_m != 1 && nnum_m != 2 && nnum_m != 3 )
                                {
                                    cout << "Enter  a valid input." << endl;
                                }

                                else
                                {
                                    if (nnum_m == 1)
                                    {
                                        nnumm_name = "Florentine slab.";
                                    
                                    }
                                    else if(nnum_m == 2)
                                    {
                                        nnumm_name = "Lemon cashew parsley dip.";
                                    
                                    }
                                    else
                                    {
                                        nnumm_name = "Date, walnut and pecan loaf.";
                                    
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(99, '\n');
                            }
                            break;
                            
                        }

                        else
                        {
                            cout << "Which item do you want to have?" << endl;
                            cout << "1. Hazelnut parfait." << endl;
                            cout << "2. Gluten-free nut crackers." << endl;
                            cout << "3. Chipotle-lime mixed nuts." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)." << endl;
                                cin >> nnum_l ;

                                if(nnum_l != 1 && nnum_l != 2 && nnum_l != 3 )
                                {
                                    cout << "Enter  a valid input." << endl;
                                }

                                else
                                {
                                    if (nnum_l == 1)
                                    {
                                        nnuml_name = "Hazelnut parfait.";
                                    
                                    }
                                    else if(nnum_l == 2)
                                    {
                                        nnuml_name = "Gluten-free nut crackers.";
                                    
                                    }
                                    else
                                    {
                                        nnuml_name = "Chipotle-lime mixed nuts.";
                                    
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(9999, '\n');
                            }
                            break;
                        }
                        
                        
                    }
                    cin.clear();
                    cin.ignore(99, '\n');
                
                }
                
                break;
            } 

        }

        while (1)
        {
            cout <<"Do you like tofu?";
            cout << "Type 'y' for yes and 'n' for no." << endl;
            cin >> input;

            if (input != "y" && input != "n" )
            {
                cout << "Enter a valid input." << endl;
            }
            else if(input == "n")
            {
                break;
            }
            else
            {
                cout << "Which turkey do you want?" << endl;
                cout << "1. Soft Tofu." << endl ;
                cout << "2. Medium Tofu." << endl ;
                cout << "3. Firm Tofu." << endl;

                while (1)
                {
                    cout << "(Enter number between 1 and 3." << endl;

                    cin >> tonum;

                    if(tonum != 1 && tonum !=2 && tonum !=3)
                    {
                        cout << "Enter a valid input." << endl;
                    }
                    else
                    {
                        if(tonum == 1)
                        {
                            cout << "What do you want from following?" << endl;
                            cout << "1. Sheet-Pan Teriyaki Tofu and Broccoli." << endl;
                            cout << "2. Superfood Tofu Bibimbap." << endl;
                            cout << "3. Easy and Simple Tofu." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> tonum_b;
                                if (tonum_b != 1 && tonum_b != 2 && tonum_b != 3)
                                {
                                    cout << "Enter a valid input!";
                                }
                                else
                                {
                                    if(tonum_b == 1)
                                    {
                                      tonumb_name = "Sheet-Pan Teriyaki Tofu and Broccoli.";
                                    }
                                    else if(tonum_b == 2)
                                    {
                                        tonumb_name = "Superfood Tofu Bibimbap.";
                                    }
                                    else
                                    {
                                        tonumb_name = "Easy and Simple Tofu." ;
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                                
                            }
                            break;
                            
                        }

                        else if(tonum == 2)
                        {
                            cout << "What do you want from following?" << endl;
                            cout << "1. Tofu Stir-Fry." << endl;
                            cout << "2. Tofu Power Bowls." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> tonum_s;

                                if (tonum_s != 1 && tonum_s != 2)
                                {
                                    cout << "Enter a valid input.";
                                }
                                else
                                {
                                    if(tonum_s == 1)
                                    {
                                        tonums_name = "Tofu Stir-Fry.";
                                    }
                                    else
                                    {
                                        tonums_name = "Tofu Power Bowls.";
                                    }
                                    break;
                                }
                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            break;
                        }

                        else
                        {
                            cout << "What do you want from the following?" << endl;
                            cout << "1. Tofu Soba Noodles." << endl;
                            cout << "2. Spicy Tofu Lettuce Wraps." << endl ;
                            cout << "3. Vegan Tofu Breakfast Burritos." << endl;

                            while (1)
                            {
                                cout << "(Enter number between 1 and 3)";

                                cin >> tonum_br ;
                                if (tonum_br != 1 && tonum_br != 2 && tonum_br != 3)
                                {
                                    cout << "Enter a valid input!" << endl;
                                }
                                else
                                {
                                    if(tonum_br == 1)
                                    {
                                        tonumbr_name = "Tofu Soba Noodles.";
                                    }
                                    else if(tonum_br == 2)
                                    {
                                        tonumbr_name = "Spicy Tofu Lettuce Wraps.";
                                    }
                                    else
                                    {
                                        tonumbr_name = "Vegan Tofu Breakfast Burritos.";
                                    }
                                    break;
                                }
                                

                                cin.clear();
                                cin.ignore(999,'\n');
                            }
                            break;
                            
                        }
                        
                        break;
                        
                    }
                    cin.clear();
                    cin.ignore(999,'\n');
                    
                }
                break;
                
            }
            
        }
            
    } 
//---------------------------------------------------------------------------------------------------------------------------


//Final--------------------------------------------------------------------------------------------------------------------
    ofstream myfile;
    myfile.open ("Order.txt");
    myfile << "\n" ;
    myfile << "\n";
    myfile <<  "------------------------------Your Order----------------------------------------\n" ;
    myfile <<  "Your Table Number: " << table << "\n";
    myfile <<  "Your Name: "<< fName << " " << mName << " "  << lName << "\n";
    myfile <<  "Your Age: "<< age << "\n"; 
    myfile << "Your Gender: " << gender << "\n";
    myfile <<  "--------------------------------------------------------------------------------\n";
    if(selection == "veg")
    {
        myfile << cnumg_name << "\n";
        myfile << cnuma_name << "\n"; 
        myfile << cnumc_name << "\n";
        myfile << pnums_name << "\n"; 
        myfile << pnumm_name << "\n";
        myfile << pnuml_name << "\n";
        myfile << vnumb_name << "\n";
        myfile << vnums_name << "\n";
        myfile << vnumbr_name << "\n";
    }
    else if (selection == "non-veg")
    {
        myfile << chnumg_name << "\n";
        myfile << chnuma_name << "\n";
        myfile << chnumc_name << "\n";
        myfile << bnums_name << "\n";    
        myfile << bnumm_name << "\n";
        myfile << bnuml_name << "\n";
        myfile << tnumb_name << "\n"; 
        myfile << tnums_name << "\n";
        myfile << tnumbr_name << "\n";
    }
    
    else
    {
        myfile << lnumg_name << "\n";
        myfile << lnuma_name << "\n";
        myfile << lnumc_name << "\n";
        myfile << nnums_name << "\n";
        myfile << nnumm_name << "\n";
        myfile << nnuml_name << "\n";
        myfile << tonumb_name << "\n";
        myfile << tonums_name << "\n"; 
        myfile << tonumbr_name << "\n";
    }
    myfile << "--------------------------------THANK YOU--------------------------------------------\n";
    myfile.close();




//--------------------------------------------------------------------------------------------------------------------------- 
}
