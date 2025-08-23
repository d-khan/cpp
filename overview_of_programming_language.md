# An Overview of Computers and Programming Languages

Upon completion of this unit, students will be able to:

- Summarize the history and evolution of programming languages
- Identify the elements of a computer-hardware, software, operating systems, and languages
- Distinguish the components of machine language
- Define the processes of a C++ program
- List the steps in problem analysis coding
- Differentiate programming methodologies
- Compare programming languages
- Define ANSI/ISO Standard C++

## Introduction
Terms such as “the Internet,” which were unfamiliar just 25 years ago are now common. Students in elementary school regularly “surf” the Internet and use computers to design and implement their classroom projects. Many people use the Internet to look for information and to communicate with others. This is all made possible by the use of various software, also known as computer programs. Without software, a computer cannot work. Software is developed by using programming languages. C++ is one of the programming languages, which is well suited for developing software to accomplish specific tasks. The main objective of this book is to help you learn C++ programming language to write programs. Before you begin programming, it is useful to understand some of the basic terminology and different components of a computer. We begin with an overview of the history of computers.

## A Brief Overview of the History of Computers
The first device known to carry out calculations was the abacus. The abacus was invented in Asia but was used in ancient Babylon, China, and throughout Europe until the late middle ages. The abacus uses a system of sliding beads in a rack for addition and subtraction. In 1642, the French philosopher and mathematician Blaise Pascal invented the calculating device called the Pascaline. It had eight movable dials on wheels and could calculate sums up to eight figures long. Both the abacus and Pascaline could perform only addition and subtraction operations. Later in the 17th century, Gottfried von Leibniz invented a device that was able to add, subtract, multiply, and divide. In 1819, Joseph Jacquard, a French weaver, discovered that the weaving instructions for his looms could be stored on cards with holes punched in them. While the cards moved through the loom in sequence, needles passed through the holes and picked up threads of the correct color and texture. A weaver could rearrange the cards and change the pattern being woven. In essence, the cards programmed a loom to produce patterns in cloth. The weaving industry may seem to have little in common with the computer industry. However, the idea of storing information by punching holes on a card proved to be of great importance in the later development of computers.

In the early and mid-1800s, Charles Babbage, an English mathematician and physical scientist, designed two calculating machines: the difference engine and the analytical engine. The difference engine could perform complex operations such as squaring numbers automatically. Babbage built a prototype of the difference engine, but did not build the actual device. The first complete difference engine was completed in London in 2002, 153 years after it was designed. It consists of 8,000 parts, weighs five tons, and measures 11 feet long. A replica of the difference engine was completed in 2008 and is on display at the Computer History Museum in Mountain View, California (http://www.computerhistory.org/babbage/). Most of Babbage’s work is known through the writings of his colleague Ada Augusta, Countess of Lovelace. Augusta is considered the first computer programmer.

At the end of the 19th century, U.S. Census officials needed help in accurately tabulating the census data. Herman Hollerith invented a calculating machine that ran on electricity and used punched cards to store data. Hollerith’s machine was immensely successful. Hollerith founded the Tabulating Machine Company, which later became the computer and technology corporation known as IBM.

The first computer-like machine was the Mark I. It was built, in 1944, jointly by IBM and Harvard University under the leadership of Howard Aiken. Punched cards were used to feed data into the machine. The Mark I was 52 feet long, weighed 50 tons, and had 750,000 parts. In 1946, the Electronic Numerical Integrator and Calculator (ENIAC) was built at the University of Pennsylvania. It contained 18,000 vacuum tubes and weighed some 30 tons.

The computers that we know today use the design rules given by John von Neumann in the late 1940s. His design included components such as an arithmetic logic unit, a control unit, memory, and input/output devices. These components are described in the next section. Von Neumann’s computer design makes it possible to store the programming instructions and the data in the same memory space. In 1951, the Universal Automatic Computer (UNIVAC) was built and sold to the U.S. Census Bureau.

In 1956, the invention of transistors resulted in smaller, faster, more reliable, and more energy-efficient computers. This era also saw the emergence of the software development industry, with the introduction of FORTRAN and COBOL, two early programming languages. In the next major technological advancement, transistors were replaced by small-sized integrated circuits, or “chips.” Chips are much smaller and more efficient than transistors, and with today’s new technology a single chip can contain thousands of circuits. They give computers tremendous processing speed.

In 1970, the microprocessor, an entire central processing unit (CPU) on a single chip, was invented. In 1977, Stephen Wozniak and Steven Jobs designed and built the first Apple computer in their garage. In 1981, IBM introduced its personal computer (PC). In the 1980s, clones of the IBM PC made the personal computer even more affordable. By the mid-1990s, people from many walks of life were able to afford them. Computers continue to become faster and less expensive as technology advances.

Modern-day computers are powerful, reliable, and easy to use. They can accept spoken-word instructions and imitate human reasoning through artificial intelligence. Expert systems assist doctors in making diagnoses. Mobile computing applications are growing significantly. Using hand-held devices, delivery drivers can access global positioning satellites (GPS) to verify customer locations for pickups and deliveries. Cell phones permit you to check your e-mail, make airline reservations, see how stocks are performing, access your bank accounts, and communicate with family and friends via social media.

Although there are several categories of computers, such as mainframe, midsize, and micro, all computers share some basic elements, described in the next section.

## Elements of a Computer System
A computer is an electronic device capable of performing commands. The basic commands that a computer performs are input (get data), output (display result), storage, and performance of arithmetic and logical operations. There are two main components of a computer system: hardware and software. In the next few sections, you will learn a brief overview of these components. Let’s look at hardware first.

### Hardware
Major hardware components include the central processing unit (CPU); main memory (MM), also called random access memory (RAM); input/output devices; and secondary storage. Some examples of input devices are the keyboard, mouse, and secondary storage. Examples of output devices are the screen, printer, and secondary storage. Let’s look at each of these components in greater detail.

### Central Processing Unit and Main Memory
The central processing unit is the “brain” of a computer and the most expensive piece of hardware in a computer. The more powerful the CPU, the faster the computer. Arithmetic and logical operations are carried out inside the CPU. Figure 1-1(a) shows some hardware components.

<img width="783" height="443" alt="Screen Shot 2025-08-23 at 1 29 21 PM" src="https://github.com/user-attachments/assets/9de712fe-b070-41a8-9918-d70e8c20d096" />

Figure 1-1 Hardware components of a computer and main memory

Main memory, or random access memory, is connected directly to the CPU. All programs must be loaded into main memory before they can be executed. Similarly, all data must be brought into main memory before a program can manipulate it. When the computer is turned off, everything in main memory is lost.

Main memory is an ordered sequence of cells, called memory cells. Each cell has a unique location in main memory, called the address of the cell. These addresses help you access the information stored in the cell. Figure 1-1(b) shows main memory with some data.

Today’s computers come with main memory consisting of millions to billions of cells. Although Figure 1-1(b) shows data stored in cells, the content of a cell can be either a programming instruction or data. Moreover, this figure shows the data as numbers and letters. However, as explained later in this chapter, main memory stores everything as sequences of 0s and 1s. The memory addresses are also expressed as sequences of 0s and 1s.

### Secondary Storage

Because programs and data must be loaded into the main memory before processing and because everything in main memory is lost when the computer is turned off, information stored in the main memory must be saved in some other device for permanent storage. The device that stores information permanently (unless the device becomes unusable or you change the information by rewriting it) is called secondary storage. To be able to transfer information from main memory to secondary storage, these components must be directly connected to each other. Examples of secondary storage are hard disks, flash drives, and CD-ROMs.

### Input/Output Devices
For a computer to perform a useful task, it must be able to take in data and programs and display the results of calculations. The devices that feed data and programs into computers are called input devices. The keyboard, mouse, scanner, camera, and secondary storage are examples of input devices. The devices that the computer uses to display results are called output devices. A monitor, printer, and secondary storage are examples of output devices.

### Software
Software are programs written to perform specific tasks. For example, word processors are programs that you use to write letters, papers, and even books. All software is written in programming languages. There are two types of programs: system programs and application programs.

System programs control the computer. The system program that loads first when you turn on your computer is called the operating system. Without an operating system, the computer is useless. The operating system handles the overall activity of the computer and provides services. Some of these services include memory management, input/output activities, and storage management. The operating system has a special program that organizes secondary storage so that you can conveniently access information. Some well-known operating systems are Windows 10, Mac OS X, Linux, and Android.

Application programs perform a specific task. Word processors, spreadsheets, and games are examples of application programs. The operating system is the program that runs application programs.

## The Language of a Computer
When you press A on your keyboard, the computer displays A on the screen. But what is actually stored inside the computer’s main memory? What is the language of the computer? How does it store whatever you type on the keyboard?

Remember that a computer is an electronic device. Electrical signals are used inside the computer to process information. There are two types of electrical signals: analog and digital. Analog signals are continuously varying continuous wave forms used to represent such things as sound. Audio tapes, for example, store data in analog signals. Digital signals represent information with a sequence of 0s and 1s. A 0 represents a low voltage, and a 1 represents a high voltage. Digital signals are more reliable carriers of information than analog signals and can be copied from one device to another with exact precision. You might have noticed that when you make a copy of an audio tape, the sound quality of the copy is not as good as the original tape. On the other hand, when you copy a CD, the copy is the same as the original. Computers use digital signals.

Because digital signals are processed inside a computer, the language of a computer, called machine language, is a sequence of 0s and 1s. The digit 0 or 1 is called a binary digit, or bit. Sometimes a sequence of 0s and 1s is referred to as a binary code or a binary number.

A sequence of eight bits is called a byte. Moreover, $2^{10}$ bytes = 1024 bytes is called a kilobyte (KB). Table 1-1 summarizes the terms used to describe various numbers of bytes.

# Table: Binary Units of Data

| Unit       | Symbol | Equivalent in Bytes      | Equivalent in Bits       |
|------------|--------|--------------------------|--------------------------|
| Bit        | b      | 1/8 byte                | 1 bit                    |
| Byte       | B      | 1 byte                  | 8 bits                   |
| Kilobyte   | KB     | 1,024 bytes             | 8,192 bits               |
| Megabyte   | MB     | 1,024 KB = 1,048,576 B  | 8,388,608 bits           |
| Gigabyte   | GB     | 1,024 MB                | 8,589,934,592 bits       |
| Terabyte   | TB     | 1,024 GB                | 8,796,093,022,208 bits   |
| Petabyte   | PB     | 1,024 TB                | 9,007,199,254,740,992 bits |
| Exabyte    | EB     | 1,024 PB                | ~9.22 × 10^18 bits       |

---

## Notes
- **1 Byte (B) = 8 bits (b)**  
- Prefixes in computing (KB, MB, GB, etc.) are based on powers of 2, not 10.  
  - 1 KB = $2^{10}$ bytes = 1,024 bytes (not 1,000).  
- This is why storage manufacturers (who use decimal, e.g., 1 GB = 1,000,000,000 bytes) often show **slightly less space** on your computer.  


Every letter, number, or special symbol (such as * or {) on your keyboard is encoded as a sequence of bits, each having a unique representation. The most commonly used encoding scheme on personal computers is the seven-bit American Standard Code for Information Interchange (ASCII). The ASCII data set consists of 128 characters numbered 0 through 127. That is, in the ASCII data set, the position of the first character is 0, the position of the second character is 1, and so on. In this scheme, A is encoded as the binary number 1000001. In fact, A is the 66th character in the ASCII character code, but its position is 65 because the position of the first character is 0. Furthermore, the binary number 1000001 is the binary representation of 65. The character 3 is encoded as 0110011. Note that in the ASCII character set, the position of the character 3 is 51, so the character 3 is the 52nd character in the ASCII set. It also follows that 0110011 is the binary representation of 51. For a complete list of the printable ASCII character set, refer to Appendix C.

**Note**
> The number system that we use in our daily life is called the decimal system, or base 10. Because everything inside a computer is represented as a sequence of 0s and 1s, that is, binary numbers, the number system that a computer uses is called binary, or base 2. We indicated in the preceding paragraph that the number 1000001 is the binary representation of 65. Appendix E describes how to convert a number from base 10 to base 2 and vice versa.

Inside the computer, every character is represented as a sequence of eight bits, that is, as a byte. Now the eight-bit binary representation of 65 is 01000001. Note that we added 0 to the left of the seven-bit representation of 65 to convert it to an eight-bit representation. Similarly, we add one 0 to the binary value of 51 to get its eight-bit binary representation 00110011.

ASCII is a seven-bit code. Therefore, to represent each ASCII character inside the computer, you must convert the seven-bit binary representation of an ASCII character to an eight-bit binary representation. This is accomplished by adding 0 to the left of the seven-bit ASCII encoding of a character. Hence, inside the computer, the character A is represented as 01000001, and the character 3 is represented as 00110011.

There are other encoding schemes, such as Unicode. Unicode consists of 65,536 characters. To store a character belonging to Unicode, you need 16 bits or two bytes. Unicode was created to represent a variety of characters and is continuously expanding. It consists of characters from languages other than English.
