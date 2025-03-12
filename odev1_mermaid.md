``` mermaid
flowchart TD
    Start([Start])-->Input[/Input the first length/]
    Input-->Input2[/Input the second length/]
    Input2-->Calc{Calculate the area = length1 * length2}
    Calc-->Output["Output the area"]
    Output-->End([End])
```