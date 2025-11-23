Beyond the Paper: A Self-Taught Journey into Binary Analysis


The Motivation I have taken an unconventional path in life. Without the traditional safety net of formal education or GCSEs, I have had to rely entirely on my own discipline and ability to learn. I am often filtered out of opportunities on paper, so I focus on proving my practical aptitude.
I have an obsessive drive to understand complex systems. When I feel trapped or limited, I turn to learning. This project was born out of that drive—a challenge to myself to bridge the gap between high-level programming and low-level machine code in a single evening.
The Objective To take a compiled C binary designed to "lock" the user out, and successfully reverse engineer it to gain access—proving that with the right mindset, no system is truly closed.

Tech Stack: Kali Linux, Assembly (Intel Syntax), Memory Management, Binary Patching.


1. The Barrier (Static Analysis)
I started with a binary executable that denied me access. To me, this represented every automated filter I’ve faced. I used tools like strings and objdump to analyze the file structure, searching for the logic that was keeping me out. I identified the specific "gatekeeper": a conditional jump instruction (jne) at a specific memory address.


2. Breaking Through (Binary Patching)
I didn't have the source code (the "key"), so I had to change the lock. I taught myself to read the raw Hexadecimal code. I located the exact instruction responsible for the rejection and used hexedit to perform a surgical modification.

The Fix: I patched the binary to invert its logic (changing opcode 75 to 74).

The Result: The system that was designed to reject me was forced to accept me. Access Granted.

3. Mastering the Details (Little Endian Architecture)
I didn't want to just scrape by; I wanted to understand the machine on a deeper level. I analyzed how the program stored its internal data. I learned about Little Endian architecture (how CPUs store numbers in reverse byte order) and used this knowledge to manipulate the program's memory. I successfully altered the internal math of the software, changing the output code from 1554 to 1538.

Why This Matters
This project is a reflection of my work ethic.

I am self-taught: I learned these concepts (Assembly, Endianness, Hex) independently because I refused to accept that I couldn't do it.

I am resilient: When I hit a wall (like a syntax error or a missing package), I don't quit. I debug, I research, and I fix it.

I am capable: I may not have the standard background, but I have the aptitude to solve technical problems that stump computer science graduates.

I am looking for an opportunity where skills and drive matter more than a checklist.
