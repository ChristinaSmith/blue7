#
#Copyright 1986-1999, 2001-2012 Xilinx, Inc. All Rights Reserved.
#
set part_name xc7k325tffg900-1
set ip_vlnv xilinx.com:ip:labtools_ila_lib:2.0
set ip_module_name u_ila_1_CV
set params [list {C_DATA_DEPTH} {1024} {C_NUM_OF_PROBES} {2} {C_PROBE0_WIDTH} {1} {C_PROBE1_WIDTH} {1}]
set additional_repo_paths {}
set output_path .
set synthesis_options {-bufg 0}
set netlist_format edif
set debug_output 0

source /opt/Xilinx/14.2/ISE_DS/PlanAhead/scripts/labtools/generate_and_synthesize_ip.tcl

if { [catch {generate_and_synthesize_ip $part_name $ip_vlnv $ip_module_name $params $additional_repo_paths $output_path $synthesis_options $netlist_format $debug_output} errMessage] } {
  puts "Error encountered during generation and synthesis of $ip_vlnv IP:
	$errMessage
Exiting."
  exit 1
}
