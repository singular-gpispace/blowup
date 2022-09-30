# Blowup Singular/GPI-Space

This reposity provides two implementations of the blowup construction. The branch 'BlowUpAff' finds the blow up of affine space at a given point. The petri net for this consists of an input place, a transition, and an output place. The transition is given by a Singular procedure that calculates the global blow up variety. It uses a ring independent data structure called chart, which consists of a ring and two ideals. The ideals are assumed to be in the ring. The transition takes an input token consisting of a chart which specifies the variety that we want to blow up and an ideal that specifies the center of blow up. It returns an output token with the following information: a chart which specifies the global blow up variety and the exceptional divisor.The branch 'BlowUp' finds the blow up of an arbitrary variety at a given center. The petri net here also consists of an input place, a transition, and an output place. The input token once again has a chart and a center. The transition produces many tokens as output. Each output token consists of a chart and an exceptional divisor where the chart data structure gives the blow up variety in each of the charts induced by the exceptional divisor.


The code is based on the Singular GPI-Space framework repository [template](https://github.com/singular-gpispace/template). Data is accessed via the filename where it is stored.


## Installation

In order to use this application, please download and install [gpi-space](http://www.gpi-space.de/) and [Singular](https://github.com/Singular/Singular) (build from source) on your computer and ensure they are fully operational. The versions of these softwares that have been tested and verified are Singular version 4.3.0 and gpi-space version 22.06 on an Ubuntu version 20.04 operating system. gpi-space can be installed via [Spack](https://spack.io/) using the [environment] (https://spack.readthedocs.io/en/latest/environments.html) feature and the environment variables can be set in accordance with the spack installation directories (similar to 'spack/opt/spack/linux-ubuntu20.04-sandybridge/gcc-9.3.0/') in the bashrc file.

To compile the code, run the bash script 'install.sh' after changing the value of the variable 'SINGULAR_HOME' (line 4 in install.sh) to the location of your Singular programme.


## Example

 An example of the blow up of affine space at a point is given in the file run_template.sing inside '/examples' in the BlowUpAff branch. This finds the blow up of affine space in three variables at a point. An example for the blow up of an aribitrary variety at a given center can be found in 'examples' in the BlowUp branch. This calculated the blow up of the whitney umbrella along the x-axis. Before the example is executed, the contents of 'loghostfile' and 'nodefile' need to be changed. The variable 'SINGULARPATH' in line 5 of 'run_template.sh' needs to be changed to reflect your Singular installation directory. The example can be run by executing the bash script 'run_template.sh'.
