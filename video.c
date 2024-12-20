#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
	float size = w * h * (durationMovie*3 + durationCredits) * fps;
	if(strcmp(unit,"bt")==0) return size*8;
	if(strcmp(unit,"ko")==0) return (float) size / 1024;
	if(strcmp(unit,"mo")==0) return (float) size / (1024 * 1024);
	if(strcmp(unit,"go")==0) return (float) size / (1024 * 1024 * 1024);
   // YOUR CODE HERE - END
   return 0;
}
