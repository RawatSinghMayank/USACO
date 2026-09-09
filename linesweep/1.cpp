line sweep is a way of thinking.

line(view) moves in a sorted fashion.

focus on what's on the line.

events - in line sweep an event is a point where something changes and you act on it.

line sweep only cares about events and nothing else.

example: 
s - start of the interval
e - end of the interval

y-axis
               s ______e
         s _____ e             
    
     s ____e
                s______ e

            x-axis

events - (1,start)      (3,end)
        (2, start)      (4,start)

every start/end point is an event
we need to sweep in sorted order of events.
                    sort your events.


we will sweep our line vertically over the points from staring and that's why we need to sort
the lines

    our vertical line

    |
    |
 2 __|__4
    |
   3_|_____6
    |
____|_________

suppose you want to find the max numbers of customers in a cafe at a time

delta notation ->  (2,+1)    (4,-1)



why need of delta
    2_________4
              4_______8

              (4,-1)
              (4,+1)
            int delta = +1/-1 
              how you gonna differentiate between fours
              one is start of event 
              another is end of event


types of sweep
1.vertical sweep
2.horizontal sweep


when to use line sweep.
1.overlapping intervals
2.scheduling problems
3.geometrical shape problems
4.area/skyline problems


Difference array technique is a specified simplified implementation of the line sweep technique
especially in 1d problems.