
[
Parsing EDIF File [%s]
106*designutils2,
*./.Xil/Vivado-5863-core980/dcp/fpgaTop.edf
c
 Finished Parsing EDIF File [%s]
97*designutils2,
*./.Xil/Vivado-5863-core980/dcp/fpgaTop.edf
D
-Analyzing %s Unisim elements for replacement
17*netlist2
56
H
2Unisim Transformation completed in %s CPU seconds
28*netlist2
0
�
Loading clock regions from %s
13*device2^
\/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/parts/xilinx/kintex7/kintex7/xc7k325t/ClockRegion.xml
�
Loading clock buffers from %s
11*device2_
]/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/parts/xilinx/kintex7/kintex7/xc7k325t/ClockBuffers.xml
�
&Loading clock placement rules from %s
318*place2R
P/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/parts/xilinx/kintex7/ClockPlacerRules.xml
�
)Loading package pin functions from %s...
17*device2N
L/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/parts/xilinx/kintex7/PinFunctions.xml
�
Loading package from %s
16*device2a
_/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/parts/xilinx/kintex7/kintex7/xc7k325t/ffg900/Package.xml
~
Loading io standards from %s
15*device2O
M/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/./parts/xilinx/kintex7/IOStandards.xml
�
+Loading device configuration modes from %s
14*device2M
K/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/parts/xilinx/kintex7/ConfigModes.xml
�
/Loading list of drcs for the architecture : %s
17*drc2G
E/opt/Xilinx/14.2/ISE_DS/PlanAhead/data/./parts/xilinx/kintex7/drc.xml
�
�IO constraint %s with a setting of %s for cell %s will not be propagated through the buffer.  The constraint should be associated with the net that is connected to the top level port.
510*constraints2

IOSTANDARD2
GTE22
ftop/sys1_clki
�
Parsing XDC File [%s]
179*designutils2g
e/home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.runs/impl_1/.Xil/Vivado-5863-core980/dcp/fpgaTop.xdc
�
%Done setting XDC timing constraints.
35*timing2]
Y/home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/constrs_1/imports/blue7cp/kc705.xdc2
1358@
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
set_input_delay: 2

00:00:072

00:00:072	
587.3672
46.477
�
Finished Parsing XDC File [%s]
178*designutils2g
e/home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.runs/impl_1/.Xil/Vivado-5863-core980/dcp/fpgaTop.xdc
.
Reading XDEF placement.
206*designutils
,
Reading XDEF routing.
207*designutils
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Read XDEF File: 2

00:00:002

00:00:002	
587.3672
0.000
+
Restoring placement.
754*designutils
�
ORestored %s out of %s XDEF sites from archive | CPU: %s secs | Memory: %s MB |
403*designutils2
532
532

0.1200002

1.255890
�
!Unisim Transformation Summary:
%s111*project2�
�  A total of 2853 instances were transformed.
  (MUXCY,XORCY) => CARRY4: 1 instances
  FD => FDCE: 799 instances
  FDC => FDCE: 139 instances
  FDE => FDCE: 1768 instances
  FDP => FDPE: 2 instances
  FDR => FDRE: 88 instances
  FDS => FDSE: 10 instances
  INV => LUT1: 1 instances
  IODELAY => IDELAYE2: 1 instances
  RAM32M => RAM32M (RAMD32, RAMD32, RAMD32, RAMD32, RAMD32, RAMD32, RAMS32, RAMS32): 44 instances

3
%Phase 0 | Netlist Checksum: 709b389e
 *common
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
read_checkpoint: 2

00:00:202

00:00:202	
587.3672	
443.789


End Record