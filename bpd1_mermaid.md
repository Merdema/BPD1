``` mermaid
flowchart TB
    Start([Start]) --> Declare["Declare Variables"]
    Declare --> Print1["Print integers normal and using tab"]
    Print1 --> Print2["Print reals side by side and one under the other"]
    Print2 --> Calc{Calculate percentage = 220 * 25 / 100.0}
    Calc --> Print3["Print Results"]
    Print3 --> Beep["Print Beep Message"]
    Beep --> End([End])



```