
B
 Attempting to get a license: %s
78*common2
Implementation
6
Got license for %s
290*common2
Implementation
W
$Device '%s' license %savailable: %s
291*common2

xc7k325t2
 2
Implementation
O
,Running DRC as a precondition to command %s
22*	vivadotcl2
route_design
3

Starting %s Task
103*constraints2	
Routing
1

Starting %s Task
103*constraints2
Route
;

Phase %s%s
101*constraints2
1 2
Build RT Design
;

Phase %s%s
101*constraints2
1.1 2
Build Netlist
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Netlist sorting complete. 2

00:00:002

00:00:002	
697.1172
0.000
4
&Phase 1.1 Build Netlist | Checksum: 0
 *common
u

%s
 *constraints2\
ZTime (s): cpu = 00:00:01 ; elapsed = 00:00:01 . Memory (MB): peak = 697.117 ; gain = 0.000
>

Phase %s%s
101*constraints2
1.2 2
Build Node Graph
7
)Phase 1.2 Build Node Graph | Checksum: 0
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:16 ; elapsed = 00:01:17 . Memory (MB): peak = 912.488 ; gain = 215.371
4
&Phase 1 Build RT Design | Checksum: 0
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:17 ; elapsed = 00:01:17 . Memory (MB): peak = 912.488 ; gain = 215.371
A

Phase %s%s
101*constraints2
2 2
Router Initialization
:

Phase %s%s
101*constraints2
2.1 2
Create Timer
:
,Phase 2.1 Create Timer | Checksum: 1be48060
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:17 ; elapsed = 00:01:17 . Memory (MB): peak = 912.488 ; gain = 215.371
J
3Estimated Global Vertical Wire Utilization = %s %%
23*route2
0.17
L
5Estimated Global Horizontal Wire Utilization = %s %%
22*route2
0.37
=

Phase %s%s
101*constraints2
2.2 2
Restore Routing
=
/Phase 2.2 Restore Routing | Checksum: 1be48060
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:17 ; elapsed = 00:01:17 . Memory (MB): peak = 914.488 ; gain = 217.371
A

Phase %s%s
101*constraints2
2.3 2
Special Net Routing
A
3Phase 2.3 Special Net Routing | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:17 ; elapsed = 00:01:17 . Memory (MB): peak = 931.520 ; gain = 234.402
J

Phase %s%s
101*constraints2
2.4 2
Non Guided Clock Net Routing
J
<Phase 2.4 Non Guided Clock Net Routing | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:17 ; elapsed = 00:01:17 . Memory (MB): peak = 931.520 ; gain = 234.402
;

Phase %s%s
101*constraints2
2.5 2
Update Timing
K

Phase %s%s
101*constraints2
2.5.1 2
Update timing with NCN CRPR
@

Phase %s%s
101*constraints2

2.5.1.1 2
Hold Budgeting
@
2Phase 2.5.1.1 Hold Budgeting | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:20 ; elapsed = 00:01:19 . Memory (MB): peak = 931.520 ; gain = 234.402
K
=Phase 2.5.1 Update timing with NCN CRPR | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:21 ; elapsed = 00:01:20 . Memory (MB): peak = 931.520 ; gain = 234.402
;
-Phase 2.5 Update Timing | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:21 ; elapsed = 00:01:20 . Memory (MB): peak = 931.520 ; gain = 234.402
e
Estimated Timing Summary %s
57*route28
6| WNS=-1.53  | TNS=-167   | WHS=-0.83  | THS=-231   |

7

Phase %s%s
101*constraints2
2.6 2
	Budgeting
7
)Phase 2.6 Budgeting | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:23 ; elapsed = 00:01:22 . Memory (MB): peak = 931.520 ; gain = 234.402
A
3Phase 2 Router Initialization | Checksum: c8371562
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:23 ; elapsed = 00:01:22 . Memory (MB): peak = 931.520 ; gain = 234.402
;

Phase %s%s
101*constraints2
3 2
Initial Routing
;
-Phase 3 Initial Routing | Checksum: d95d89d2
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:25 ; elapsed = 00:01:24 . Memory (MB): peak = 931.520 ; gain = 234.402
>

Phase %s%s
101*constraints2
4 2
Rip-up And Reroute
@

Phase %s%s
101*constraints2
4.1 2
Global Iteration 0
=

Phase %s%s
101*constraints2
4.1.1 2
Update Timing
=
/Phase 4.1.1 Update Timing | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:31 ; elapsed = 00:01:30 . Memory (MB): peak = 931.520 ; gain = 234.402
e
Estimated Timing Summary %s
57*route28
6| WNS=-1.35  | TNS=-130   | WHS=N/A    | THS=N/A    |

D

Phase %s%s
101*constraints2
4.1.2 2
collectNewHoldAndFix
D
6Phase 4.1.2 collectNewHoldAndFix | Checksum: 881d4568
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:31 ; elapsed = 00:01:30 . Memory (MB): peak = 931.520 ; gain = 234.402
>

Phase %s%s
101*constraints2
4.1.3 2
Fast Budgeting
>
0Phase 4.1.3 Fast Budgeting | Checksum: 881d4568
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:31 ; elapsed = 00:01:30 . Memory (MB): peak = 931.520 ; gain = 234.402
A

Phase %s%s
101*constraints2
4.1.4 2
GlobIterForTiming
A
3Phase 4.1.4 GlobIterForTiming | Checksum: 521bc83f
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:31 ; elapsed = 00:01:31 . Memory (MB): peak = 931.520 ; gain = 234.402
@
2Phase 4.1 Global Iteration 0 | Checksum: 521bc83f
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:31 ; elapsed = 00:01:31 . Memory (MB): peak = 931.520 ; gain = 234.402
@

Phase %s%s
101*constraints2
4.2 2
Global Iteration 1
=

Phase %s%s
101*constraints2
4.2.1 2
Update Timing
=
/Phase 4.2.1 Update Timing | Checksum: 577a0a18
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:32 ; elapsed = 00:01:31 . Memory (MB): peak = 931.520 ; gain = 234.402
e
Estimated Timing Summary %s
57*route28
6| WNS=-1.37  | TNS=-130   | WHS=N/A    | THS=N/A    |

@
2Phase 4.2 Global Iteration 1 | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:32 ; elapsed = 00:01:31 . Memory (MB): peak = 931.520 ; gain = 234.402
>
0Phase 4 Rip-up And Reroute | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:32 ; elapsed = 00:01:32 . Memory (MB): peak = 931.520 ; gain = 234.402
9

Phase %s%s
101*constraints2
5 2
Delay CleanUp
>

Phase %s%s
101*constraints2
5.1 2
Levelize Netlist
>
0Phase 5.1 Levelize Netlist | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:33 ; elapsed = 00:01:32 . Memory (MB): peak = 931.520 ; gain = 234.402
9
+Phase 5 Delay CleanUp | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:33 ; elapsed = 00:01:32 . Memory (MB): peak = 931.520 ; gain = 234.402
9

Phase %s%s
101*constraints2
6 2
Post Hold Fix
@

Phase %s%s
101*constraints2
6.1 2
Full Hold Analysis
=

Phase %s%s
101*constraints2
6.1.1 2
Update Timing
=
/Phase 6.1.1 Update Timing | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:35 ; elapsed = 00:01:34 . Memory (MB): peak = 931.520 ; gain = 234.402
e
Estimated Timing Summary %s
57*route28
6| WNS=-1.35  | TNS=-125   | WHS=-0.904 | THS=-18.4  |

@
2Phase 6.1 Full Hold Analysis | Checksum: 10cf9cca
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:35 ; elapsed = 00:01:34 . Memory (MB): peak = 931.520 ; gain = 234.402
9
+Phase 6 Post Hold Fix | Checksum: 1fcdb4b7
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:41 ; elapsed = 00:01:40 . Memory (MB): peak = 960.582 ; gain = 263.465
A

Phase %s%s
101*constraints2
7 2
Verifying routed nets
A
3Phase 7 Verifying routed nets | Checksum: 1fcdb4b7
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:41 ; elapsed = 00:01:40 . Memory (MB): peak = 960.582 ; gain = 263.465
=

Phase %s%s
101*constraints2
8 2
Depositing Routes
=
/Phase 8 Depositing Routes | Checksum: dd00df8c
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:42 ; elapsed = 00:01:41 . Memory (MB): peak = 960.582 ; gain = 263.465
>

Phase %s%s
101*constraints2
9 2
Post Router Timing
�
�This design has multiple clocks. Inter clock paths are considered valid unless explicitly excluded by timing constraints such as set_clock_groups or set_false_path.145*timing
h
Post Routing Timing Summary %s
20*route28
6| WNS=-1.95  | TNS=-194   | WHS=0.0696 | THS=0      |

s
dThe design did not meet timing requirements. Please run report_timing_summary for detailed reports.
39*route
7
)Phase 9 Post Router Timing | Checksum: 0
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:47 ; elapsed = 00:01:45 . Memory (MB): peak = 960.582 ; gain = 263.465
-
Router Completed Successfully
16*route
.
 Ending Route Task | Checksum: 0
 *common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:47 ; elapsed = 00:01:45 . Memory (MB): peak = 960.582 ; gain = 263.465
c
QWebTalk data collection is enabled (User setting is ON. Install Setting is ON.).
118*project
k
ZWebTalk report has not been sent to Xilinx. Please check your network and proxy settings.
185*common
w

%s
 *constraints2^
\Time (s): cpu = 00:01:47 ; elapsed = 00:01:46 . Memory (MB): peak = 960.582 ; gain = 263.465
8
Releasing license: %s
83*common2
Implementation
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
route_design: 2

00:01:482

00:01:472	
960.5822	
263.465
�
#The results of DRC are in file %s.
168*coretcl2�
U/home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.runs/impl_1_5/fpgaTop_drc_routed.rptU/home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.runs/impl_1_5/fpgaTop_drc_routed.rpt8
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
report_drc: 2

00:00:082

00:00:082	
960.5822
0.000
8
)Running Vector-less Activity Propagation
51*power

.. *power

.. *power

.. *power

.. *power

.. *power
�
�This design has multiple clocks. Inter clock paths are considered valid unless explicitly excluded by timing constraints such as set_clock_groups or set_false_path.145*timing
A
3
Finished Running Vector-less Activity Propagation
1*power
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
report_power: 2

00:00:072

00:00:062	
960.5822
0.000
g
UpdateTimingParams:%s.
91*timing2>
< Speed grade: -1, Delay Type: min_max, Constraints type: SDC
�
�This design has multiple clocks. Inter clock paths are considered valid unless explicitly excluded by timing constraints such as set_clock_groups or set_false_path.145*timing
,
Writing XDEF routing.
211*designutils
9
#Writing XDEF routing logical nets.
209*designutils
9
#Writing XDEF routing special nets.
210*designutils
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2
Write XDEF Complete: 2

00:00:012

00:00:012	
960.5822
0.000


End Record