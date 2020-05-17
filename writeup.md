# CarND-Controls-PID
### selecting parameters
During my value selection I noticed a few patterns. If KP is too big, the car will over correct. If Kp is too small, it takes too long to correct. If Ki is too big, it will just oscilate from max steering angle. If Ki is too small, the error isn't as bad but the angle is less stable. If Kd is too large, the angles will vary drastically but, unlike a large Ki, it will have a lot of noise. If Kd is too small, it will take too long to readjust angles, overshooting.

I ended up selecting my parameters based on this medium article: https://medium.com/intro-to-artificial-intelligence/pid-controller-udacitys-self-driving-car-nanodegree-c4fd15bdc981 where I had also used the code to debug my code.

Once I tested it, I noticed that I would not need to implement Twibble to adjust these because they worked great.
