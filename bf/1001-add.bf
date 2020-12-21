,                   At c0 and read char
>,                  Forward to c1 and read char
[<+>-]              While c1 above 0 increment c0 and decrement c1
                    c0 has result in char form (need to turn it into number by subtracting 48 to c0)
++++++              At c1 add 6             
[<-------->-]       While c1 above 0 decrement c0 8 times and decrement c1
<.                  Back to c0 and print
