# E-fill-main-function

Now you will start writing your overall master program for your project.  You have pseudocode in the `main ()` function, now implement each of these steps as actual C++ statements.  Declare the variables you need, call the functions, create if/else blocks and loops.

## Lay out your input and (intentional) output 

Input and output are the primary way your program will work.  Be sure to pay attention to this.  You want your end user to feel comfortable with your program and satisfied that it accomplished what he/she wanted. 

## Add Info to your trace messages
The variables you use for your live code give you helpful information when you need to debug your program. You should see whether some of the variables could improve the trace messages that you coded before.  For example, you might have had:

	//	  increment the game counter
		  cerr << "Incrementing game counter" << endl;

As you implement the function, you may set up the "game counter" by declaring a variable `gameCounter`. You can now add that variable to your message, giving you a still better trace of how your program works.

	//	  increment the game counter
		  gameCounter++;
		  cerr << "Incremented the game counter to " << gameCounter << endl;

## Trace messages are not your "output"!

As noted in step D, you need to keep clear which messages are your "regular" output and which are only for tracing and debugging.  *You should be able to delete (or comment out) all your `cerr` trace messages without affecting the program.*

## Compile and run and test the file
Now, your program will be doing much or most of its intended ultimate functionality.  At this point, mistakes or oversights in your thinking or programming will start showing up.  Don't proceed to any of your other functions until you have resolved these concerns.  You should be confident your program will run correctly on the basis of how your `main` function operates and reports trace messages.

## Create a pull request to branch "E-fill-main-function" for feedback
**OPTIONAL**
You do not have to do this, but it could be a useful milestone for you, and allows me the opportunity to give you feedback when I can

## Move on to your next step