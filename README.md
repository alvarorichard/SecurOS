# SecurOS



SecurOS is an operating system developed for educational and recreational purposes. It is built using the guidelines provided by OSDEV.org, a resource for operating system development enthusiasts. This project aims to provide a hands-on learning experience in OS development and serve as a platform for experimentation and exploration.

## Features

- Minimalistic design and architecture
- Custom bootloader and kernel
- Basic functionality such as process management and memory allocation
- Support for user applications

## Getting Started

These instructions will help you get a copy of the SecurOS project up and running on your local machine for development and testing purposes.

### Prerequisites

- x86-based computer or emulator
- NASM (Netwide Assembler)
- GCC (GNU Compiler Collection)
- QEMU (Quick Emulator)

### Building and Running

1. Clone the SecurOS repository to your local machine:

git clone https://github.com/your-username/SecurOS.git


2. Navigate to the project directory:

cd SecurOS



3. Compile the project using the following commands:

nasm -f bin bootloader.asm -o bootloader.bin
gcc -m32 -c kernel.c -o kernel.o
ld -m elf_i386 -T linker.ld -o SecurOS.bin bootloader.bin kernel.o


4. Run the SecurOS image in QEMU:

qemu-system-i386 -kernel SecurOS.bin


## Contributing

Contributions to SecurOS are welcome! If you would like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them with descriptive messages.
4. Push your changes to your forked repository.
5. Submit a pull request detailing your changes.



## Acknowledgments

- OSDEV.org for their valuable resources and community support.
- Contributors to the SecurOS project.
- Inspirational OS development projects and communities.

## Contact

For any questions, suggestions, or support regarding the SecurOS project, please reach out to the project maintainer at 
