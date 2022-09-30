# Template Singular/GPI-Space

The application models a framework with 2 places and one transition.One place serves as an input place, the other as an output place and the transition as the "Computer" . Most of  the code is from [Lukas's code](https://github.com/singular-gpispace/framework) but introducing a new serialize and deserialize function  to store and acess to Singular's data through the computation. The idea is still the same : access to data by refering to the filename where it is saved.

## Installation

This application assumes that you have [gpi-space](http://www.gpi-space.de/) and [Singular](https://github.com/Singular/Singular) (build from source )  operational on your machine. The code have been tested on Ubuntu 20.04 Focal Fossa with Singular version 4.3.0 and gpi-space 22.06. I recommend to install gpi-space via [Spack](https://spack.io/) using the [environment] (https://spack.readthedocs.io/en/latest/environments.html) feature. If you do so, don't forget to set the environment variables respecting the spack installation directories (similar to 'spack/opt/spack/linux-ubuntu20.04-sandybridge/gcc-9.3.0/') in your bashrc file.

To compile the code, you just have to run the bash script 'install.sh' after changing the value of the variable 'SINGULAR_HOME' (line 4 in install.sh) to the location of your Singular.

## Example

An example of application of the framework is located in '/examples'. It just computes Groebner bases  of a given ideal over several finite fields. To run it, you have to execute the bash script 'run_template.sh' after changing the variable 'SINGULARPATH' (line 5 in run_template.sh') according to your installation directories. The content of "loghostfile' and 'nodefile' has to be changed as well according to your system.
