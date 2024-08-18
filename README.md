# JumpToDir

## Program Description

JumpToDir (alias jtd) is a simple yet powerful tool designed to make navigating between frequently used directories easier. JTD allows you to save, retrieve, and remove directory paths, enabling you to jump between them quickly with just a few commands.

## Main Features

- **Save Directories**:
  Save the directories you use most often in a hidden file, allowing for quick and easy access.
- **Quick Navigation**:
  Use a simple command to jump to a saved directory, reducing the time spent typing out long paths.
- **Remove Directories**:
  Easily remove paths from your saved list when they are no longer needed.
- **List Directories**:
  Display a numbered list of saved directories, making it easy to select and navigate.

## Practical Applications

jtd is ideal for developers, system administrators, and power users working on projects with complex directory structures. For example:

- **Multi-Directory Projects**:
  When a project is spread across multiple directories (e.g., source code, documentation, executables), jtd allows you to quickly move between them.
- **Remote Servers**:
  If you work on a remote server with many working directories, JTD helps you manage paths without having to remember or repeatedly type them.
- **Multiple Sessions**:
  Even if you switch sessions or terminals, your saved paths remain accessible and usable.

## Download, Compilation, and Alias Setup

### Prerequisites

Ensure you have the following tools installed:

- A C compiler (e.g., `gcc`).
- Git (to clone the repository).

### Download and Compilation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/jumptodir.git
   cd jumptodir
   ```

2. **Compile the program**:
   ```bash
   gcc -o jtd jtd.c
   ```

3. **Move the executable**:
   ```bash
   mv jtd /usr/local/bin/  # or another directory in your $PATH
   ```

### Alias Setup

You can use aliases to simplify the usage of jtd:

1. **Add aliases to your `.bashrc` or `.zshrc` file**:

   ```bash
    alias sd='jtd save'
    alias ud='jtd undo'

    #Function to change the path on the shell
    gd() {
        if [ "$#" -eq 1 ]; then
            cd $(jtd go "$1")
        else
            jtd go
        fi
    }
   ```

   With these, you can use `sd` to save the current directory, `ud` to remove a directory from the list, and `gd` to quickly jump to a saved directory.

2. **Reload your shell configuration file**:
   ```bash
   source ~/.bashrc  # or ~/.zshrc for zsh
   ```

Now you can use the commands `sd`, `ud`, and `gd` to manage your directories with jtd!

## License

This program is distributed under the terms of the GNU General Public License (GPL), ensuring the freedom to redistribute and modify the software in accordance with free software standards.

## Author

Written by Catoni Mirko (IMprojtech)
