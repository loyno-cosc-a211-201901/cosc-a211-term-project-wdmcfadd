# D-code-trace-messages

Now we will prepare our file with "pre-emptive debugging."  Stay in your same file and keep building it.

Write messages for the steps of your pseudocode.  If the pseudocode comment says

	// Launch the prof at the dean

then add a message

	cerr << "Launching prof at the dean" << endl;

## What is "cerr" and why am I using it?

If you look at the example, you will see it has us using `cerr` instead of the usual `cout`.  `cerr` should only be used for *tracing* and *debugging* messages.  The `cerr` object, as you will learn, is an output stream like `cout`, and works essentially the same.  However, you can separate out the two output streams.

Your "regular" output should use `cout`—that is, data, reports, maps, and main gameplay.  Do not use `cerr` for anything other than tracing or debugging.

## Compile the file and Run
Now, you run your program and it tells you what it will be doing, that is, what it will be doing when you have finished programming it.  Compile and run and you should see a sequence of messages that tell you what (will be) is happening.  This should match the descriptions of your project and give you some ability to assess how you are doing.

## Create a pull request to branch "D-code-trace-messages" for feedback
**OPTIONAL**
You do not have to do this, but it could be a useful milestone for you, and allows me the opportunity to give you feedback when I can

## Move on to your next step