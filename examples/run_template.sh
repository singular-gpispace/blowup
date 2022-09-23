cd temp
rm * 
cd ..
${install_ROOT}/gpispace/bin/gspc-monitor --port 9876 &
SINGULARPATH=/home/hamsini/Downloads/template_install /scratch/singular-gpispace/Singular420/bin/Singular run_template.sing
