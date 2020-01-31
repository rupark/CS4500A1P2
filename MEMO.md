##Implementation
Our implementation fufills the spec tests as well as the required attributes.

###Queue
The Queue class passes the testQueue tests. It has a push function "enqueue" and a pop
function "dequeue". To reduce the number of times we are creating and deleting structures, 
we only shrink the array ```elements``` holding the elements within the queue data structure
when its current number of elements is half its capacity. Similarly, when we add an element to
the queue, we double the size of ```elements``` if it is at capacity rather than constantly changing
the size of the array every enqueue and dequeue. Queue also supports both Objects and Strings as per the assignment
specifications, since ```elements``` is an array of Objects and a String is an Object.

###Array
The Array class grows in a similar way to the queue when objects are added to it. When the array is at capacity, 
the size will double, and if the array is of a size less than or equal to its capacity,
the size will halve. To support int, float, and bool objects, we used the 
wrapper classes provided by the assigned repo. The wrapper classes all extend Object, so they
can be added to the ```Object** arr_``` which contains the Array's elements.

###Map
The Map class TODO

Hash function index of spot in array
If it collides, you use node next to check equality

##Critique
###Array: https://github.com/EanMcDonaldWojciechowski/Assignmen1Part2EanHiren
####Documentation Quality: 
Documentation is in javadoc format making for easy understanding of
method purposes and fields. Every method has purpose statement. Only raised one small documentation
error in relation to return value of set().
####Responsiveness:
The team was quick to respond and often responded within the same hour during the last
yesterday and today. We communicated via issues, and they accepted our one and only PR.
####Test Quality:
The team's test file is 572 lines long and thoroughly tests the methods. They did
only add tests for float, int, and bool on the last day. Many of their tests
are also commented out however, so the file should be eventually cleaned up. They also at one
point included tests for ```hash_me```, a method not in the spec, but quickly resolved this issue
after we raised it. Since they thoroughly tested their code, we did not feel a need to write our own tests. 

###Map: https://github.com/barrylyung/a1p2.git
####Documentation Quality: 
Documentation is much less thorough than the prior repo, but every method has a purpose statement which you
can understand the purpose of the fields from. No class purpose statement in ```map.h```. The documentation style is similar
for ```node.h```. ```Object.h``` and ```String.h``` are categorized by method type (constructors, virtual methods etc.)
which is a nice addition.
####Responsiveness:
The team responded to one of the issues we raised in a reasonable amount of time. At the time of writing this,
we have one issue still pending opened two hours ago. The team also accepted our one and only
pull request. 
####Test Quality:
The team's test file is somewhat lacking since it is only 93 lines long and only consists of five tests.
Therefore, we had to write some of our own tests to verify the functionality, specifically of ```node.h```.
At the time of writing this, test1 and test2 in the test file do not call their print methods
```t_true``` and ```t_false```, which we raised an issue for.

###Queue: https://github.com/dxandbatista/A1-pt2.git
####Documentation Quality: 
Documentation is not as thorough as the Array repo, but every method has a purpose statement which you
can understand the purpose of the fields from. No class purpose statement in ```queue.h```. We didn't have to raise any
issues related to documentation.
####Responsiveness:
The team aknowledged our one and only pull request in 11 hours, which is okay. They fixed one part of the PR, but
didn't fix the other which added newline characters to the end of the test print statements. Instead of accepting the 
merge they re-edited the files themselves.
####Test Quality:
The team's test file is very thorough at 238 lines and there are eight tests. In a PR we changed the print statements
since every test was printing "Pass" regardless of the true result. In that same PR we asked 
to separate the test results with new lines, but that was missed. The test results all print on the same line which
is not very readable. We did not feel the need to write our own tests because the testing was well-done.

