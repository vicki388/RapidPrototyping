/******************************************************************************\
* Vicki Everts                                                                 *
* Leap Motion Group Project Learning Objective 1                               *

\******************************************************************************/
#include "Leap.h"
#include "LeapUtilGL.h"

int main(){
  //Create a sample listener and controller
  SampleListener listener;
  Controller controller;

  //Have the sample listener receive events from the controller
  controller.addListener(listener);

  //Keep this process running until Enter is pressed
  std::cout << "Press Enter to quit..." << std::endl;
  std::cin.get();

  //Get the most recent frame and report some basic information
  const Frame framer = controller.frame();
  std::cout << "Frame id:" << frame.id()
	<< ", timestamp: " << frame.timestamp()
        << ", hands: " << frame.hands().count()
	<< ", fingers: " << frame.fingers().count()
	<< ", tools: " << frame.tools().count() << std::endl;

  	of(!frame.hands().isEmpty()) {
	// Get the first hand
	const Hand hand = frame.hands()[0];
  
  //Check if the hand has any fingers
  const FingerList fingers = hand.fingers();
  if (!fingers.isEmpty()) {
    // Calculate the hand's average finger tip position
    Vector avgPos;
    for (int i=0; i < finger.count(); ++i) {
      avgPost += fingers[i].tipPosition();
    }
    avgPos /= (float)fingers.count();
    std::cout << "Hand has " << fingers.count()
	      << " fingers, average finger tip position" << avgPos << std::endl;

  //Remove the sample listener when done
  controller.removeListener(listener);

  return 0;
}
