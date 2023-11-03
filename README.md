# TinyTouchZoffset

## What is this thing?
It's a 'soft potentiometer' that's typically used to register touch input with variable resistance depending on where along the strip you press it, connected to an inexpensive microcontroller to more repeatably measure when and how far away a 3D printer nozzle is from its build surface.

## Why this thing?
1. I wanted an easier and more repeatable way to measure my Probe Z Offset
2. I don't have enough room on my printer to use a sexbolt to enable an auto-z offset calibration 
3. I'm using a Beacon probe for a virtual z end-stop and bed mesh calibration
4. I'm using a modified EVA tool head and not very interested in moving to other solutions

## How does this thing help?
I had originally used the tried and true 'paper method' for determining Z Offset, and have struggled with it for many years... I never invested enough time to make it a repeatable process, always having to do additional steps (baby steps, many test prints, etc...) in order to get my first layer dialed in.

I recently started using an aluminum card of fixed width (a type of feeler gauge if you will) in place of a piece of paper, and it helped me improve my repeatability when measuring Z offset, however, I still needed to play around with baby stepping and test prints... Better, but not ideal. 

## Repeatability?
I believe the variability in measurement using the paper or feeler gauge method is due to the fact that there's some subjectiveness (human feel) involved in determining just how much the nozzle is allowed to pinch the paper or feeler gauge. My guess is that this subjective measurement can introduce enough variance in measurement that it can affect first-layer consistency. 

It's amazing how much subtlety the human hand can feel!

This sensor replaces the paper or fixed-size feeler gauge when using the PROBE_CALIBRATE Klipper macro, and will consistently indicate when the nozzle is touching the bed, generally achieving a consistent z-offset measurement with a variance of +/- .01mm.

## Parts
1. ATTiny85 Dev board like this:
![[Pasted image 20231030230846.png|200]]
2. Spectra Symbol Soft Potentiometer (I used a 150mm, but could use a smaller one)
![[Pasted image 20231030231047.png|200]]
3. A USB extension cable for power
4. Solder of 3 jumper wires and a 3 Pin JST connector
5. A 3D printed case to hold everything together
