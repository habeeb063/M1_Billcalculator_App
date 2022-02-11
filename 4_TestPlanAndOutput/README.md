## Table no: High Level test plan

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Electricity bill calculation is done based of the units consumed|Choice|SUCCESS|SUCCESS|
|H\_02|Electricity bill is recorded in text file| NA |SUCCESS|SUCCESS|
|H\_03|User has a feature see their previous bills.| NA |SUCCESS|SUCCESS|
|H\_04|Amount of bill differs based of consumption of units.|Choice|SUCCESS|SUCCESS|


## Table no: Low Level test plan


|Test ID|HL\_ID|Description|Exp input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Electricity bill calculation if(units<30)|20 units|65 rupees|65 rupees|
|L\_02|H\_01|Electricity bill calculation if(units>30 && units <100)|40|188|188|
|L\_03|H\_01|Electricity bill calculation if(units>101 && units <200)|100|625|625|
|L\_04|H\_01|Electricity bill calculation if(units<200)|200|1,460|1,460|

