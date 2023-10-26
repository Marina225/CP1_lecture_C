#include <stdio.h>
//We need an extra library to compute absolute value (abs())
#include <stdlib.h>

/*

******THIS MAY HELP THE STUDENTS****

This exercise does not explain what happens if points colide.
Do they stop? or Do they pass eachother and continue?
From the input and output examples we can assume that they pass eachother and continue.
Even if this is not the case, you can tell the students that they can assume this.

******THIS MAY HELP THE STUDENTS****


Solution outline (i.e. how to explain it to students)

In this exercise we can find 3 possible behaviour of points:
1.  The points will colide, this means, the minimum distance between them will be 0 (since they colide). 
Two possible sub-scenarios:	

	1.1 The points are moving towards eachother
	______________*->        <-*____________ => ________**_________
	
	1.2 The points are moving in the same direction, but the point with the smaller starting postion is faster (eventually it will hit the point in front)

	__________*->>          *->__________ =>     __________*->>   *->__________ => ________**_________


2. The points are moving away from eachother, this means, as time passes their distance increases, this means, their minimum distance is their distace at the start (time 0)
Two possible sub-scenarios:
	
	2.1 the points are moving in oposite directions

	_____________<-*   *->____________

	2.1 The points are moving in the same direction, but the point with the larger starting postion is faster  (since one is faster, it will keep incerasing the distance with time)

	________*->    *->>_________        =>    ______*->                   *->>______



3. The points are moving in the same direction with same speed=> the points will never change distacne= > their minimum distance is their distace at the start (time 0)

	____*->   *->_____________ => ________*->   *->_________ => __________*->   *->_______ => ..... => _______________*->   *->__ (distance does not change)



Behavior 2 and 3 have the same outcome, so we only have to check if points colide


Therefore the solutions is following:
	
	int total distance = 0
	
	Compare every pair of points and
		if they colide add to the total distance 0
		else add the difference between them in the starting position.

	print total distance
*/	


//We define a function to check if two points colide, returns 1 if true, 0 if false

int colission(int p1, int v1,int p2, int v2)
// where p1 is the 1st point, v1 is the velocity of the 1st point, p2 is the 2nd point, v2 is the velocity of the 1st point )
{

	//If they have the same speed (which also means direction since 2 != -2 ) they will not colide, return false (behaviour 3. )
	if (v1==v2){

		return 0;
	}

	//if p1 is behind p2, and p1 is moving forwards (positive velocity) and p2 is moving backwards (negative velocity), they will colide
	//if one is 0 then it will stand still and other one will hit it (they cannot be both 0, we checked above)
	// ______________ p1 *->        <-* p2 ____________

	if (p1<p2 && v1>=0 && v2<=0  ){

		return 1;
	}

	//same thing but oposite, they will colide, return true 
	// ______________ p2 *->        <-* p1 ____________
	
	if (p1>p2 && v1<=0 && v2>=0 ){

		return 1;
	}

	//if p1 is behind p2, they both moving forward (positive velocity), and p1 is faster than p2, they will colide
	//OR if they are both moving backward (negative velocity), and p2 is faster than p1, they will colide
	//if one is 0 then it will stand still and other one will hit it (they cannot be both 0, we checked above)
	// ______________ p1 *->>        p2 *->  __________   OR   __________<-* p1         <<-* p2 ____________


	if (p1<p2 && ( (v1>=0 && v2>=0 && v1>v2) || (v1<=0 && v2<=0 && abs(v2)>abs(v1)) )){

		return 1;
	}

	//same thing but oposite, they will colide, return true 
	// ______________ p2 *->>        p1 *->  __________   OR   __________<-* p2         <<-* p1 ____________
	

	if (p1>p2 && ( (v1>=0 && v2>=0 && v1<v2) || (v1<=0 && v2<=0 && abs(v2)<abs(v1)) ) ){

		return 1;
	}

	//if none of this happens they will not colide.

	return 0;
}


int main(){

// we input
	int n;
	scanf("%d",&n);

	int points[n];

	for (int i=0;i<n;i++){

		scanf("%d", &points[i]);

	}

	int velocities[n];

	for (int i=0;i<n;i++){

		scanf("%d", &velocities[i]);

	}

	int total_dist=0;

//Compare each point to those after it, if they colide add 0 to total distance else add thier distance at start
	
	for (int i=0;i<n;i++){

		int p1=points[i];
		int v1=velocities[i];

		for (int j=i+1;j<n;j++){

			if (colission(p1, v1, points[j], velocities[j]) == 1){
				//printf("%d %d %d %d colission \n", p1, v1, points[j], velocities[j]);

				total_dist=total_dist + 0;
			} else{

				//printf("%d %d %d %d safe added %d\n", p1, v1, points[j], velocities[j], abs(p1-points[j]));
				total_dist=total_dist+ abs(p1-points[j]);
			}

		}

	}

	printf("%d \n", total_dist );
}
