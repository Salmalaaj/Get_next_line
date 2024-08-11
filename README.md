# Get Next Line

## Overview

The **Get Next Line** project implements a function in C that reads and returns one line at a time from a file descriptor. It’s designed to handle different buffer sizes dynamically and ensures efficient memory management.

## Files

- **`get_next_line.c`**: Contains the main function `get_next_line` that reads and returns the next line from a file.
- **`get_next_line_utils.c`**: Includes helper functions that assist in string manipulation and memory management.
- **`get_next_line.h`**: Header file with function prototypes and necessary includes.

## How It Works

- The `get_next_line` function uses a static variable to keep track of any leftover data between calls.
- It reads from the file descriptor in chunks of `BUFFER_SIZE` until a newline character is found or the end of the file is reached.
- The function returns the line including the newline character, if present, and keeps any remaining data for the next call.

## Usage

To compile and use this function:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c
```
Replace `<size>` with the desired buffer size.

### Example

```c
int fd = open("file.txt", O_RDONLY);
char *line;

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
close(fd);
```
## Project Files

- `get_next_line.c`: Main function implementation.
- `get_next_line_utils.c`: Helper functions.
- `get_next_line.h`: Header file.

## Forbidden Functions

- `lseek()`
- Global variables
- Usage of `libft` functions
