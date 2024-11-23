PWM, Pulse-Width Modulation, is a very effective method for using digital signals to control analog circuits.
Digital processors cannot directly output analog signals. PWM technology makes it very convenient to achieve
this conversion (translation of digital to analog signals).

PWM technology uses digital pins to send certain frequencies of square waves, that is, the output of high
levels and low levels, which alternately last for a while. The total time for each set of high levels and low levels
is generally fixed, which is called the period (Note: the reciprocal of the period is frequency). The time of high
level outputs are generally called “pulse width”, and the duty cycle is the percentage of the ratio of pulse
duration, or pulse width (PW) to the total period (T) of the waveform.

The longer the output of high levels last, the longer the duty cycle and the higher the corresponding voltage
in the analog signal will be. The following figures show how the analog signal voltages vary between 0V-5V
(high level is 5V) corresponding to the pulse width 0%-100%:
