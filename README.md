# concentration-card-game

# How To Create Custom Funcions

Create a new file in the functions directory named **_name-of-function_.h**. Then use the following template as an example of how to write the function:

```c++
#ifndef NAME_OF_FUCTION_H
#define NAME_OF_FUNCTION_H

// section far any include veing used
#include <iostream>

var nameOfFunction
{
    definition of the fuction goes here...
    ...
    ...
};

#endif
```

## Remember To

* When calling something that requires a **using namespace std**, use the _std::thing-needed_ command

## How To Add Custom Libraries to a file

If you ever need to any of the structs or functions made in other files, do the following:

### Importing A Struct

At the top of the file you are creating, use the following **include**

```c++
#include "../structs/<name-of-struct.h>"
```

### Importing A Function

At the top of the file you are creating, use the following **include**

```c++
#include "../functions/<name-of-function.h>""
```