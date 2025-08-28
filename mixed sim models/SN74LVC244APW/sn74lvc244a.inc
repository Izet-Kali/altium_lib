******************************************************************************
* *
* TEXAS INSTRUMENTS INCORPORATED
* Standard Linear and Logic Group
* HSPICE Model for SN74LVC244A
* PROPERTY OF TEXAS INSTRUMENTS INCORPORATED. UNAUTHORIZED
* REPRODUCTION AND/OR DISTRIBUTION IS STRICTLY PROHIBITED.
*
* THIS PRODUCT IS PROTECTED UNDER COPYRIGHT LAW.
* CREATED 2007, (C) COPYRIGHT 2007, TEXAS INSTRUMENTS
* INCORPORATED, ALL RIGHTS RESERVED
*
* UNLESS THERE IS A SIGNED, WRITTEN AGREEMENT TO THE
* CONTRARY, TEXAS INSTRUMENTS (TI) IS PROVIDING THE IBIS
* MODELS AND WITHOUT ANY WARRANTY, EXPRESSED OR
* IMPLIED. TI ASSUMES NO LIABILITY FOR:
* 1) THE ACCURACY OF THE HSPICE MODELS PROVIDED TO YOUR
* COMPANY;
* 2) THE PROPER FUNCTIONING OF THESE HSPICE MODELS IN YOUR
* DESIGN OR FOR ANY RESULTING APPLICATIONS; OR
* 3) INFRINGEMENT OF PATENTS, COPYRIGHTS OR INTELLECTUAL
* PROPERTY RIGHTS RESULTING FROM YOUR USE OF THESE HSPICE
* MODELS.
*
* TI PROVIDES HSPICE MODELS AS A SERVICE TO OUR CUSTOMERS.
* YOU AND YOUR COMPANY SHALL NOT DISTRIBUTE, SELL OR GIVE
* THESE MODELS TO ANYONE ELSE WITHOUT PRIOR WRITTEN
* PERMISSION FROM TI.
*
* TI RESERVES THE RIGHT TO MAKE CHANGES TO OUR PRODUCTS OR
* TO DISCONTINUE ANY SEMICONDUCTOR PRODUCT OR SERVICE
* WITHOUT NOTICE, AND ADVISES OUR CUSTOMERS TO OBTAIN THE
* LATEST VERSION OF RELEVANT INFORMATION TO VERIFY, BEFORE
* PLACING ORDERS, THAT THE INFORMATION BEING RELIED ON IS
* CURRENT.
*
* PLEASE BE AWARE THAT YOUR RECEIPT AND USE OF THE HSPICE
* INFORMATION PROVIDED SHALL SERVE AS ACCEPTANCE OF THESE
* TERMS AND CONDITIONS. IF YOU DO NOT ACCEPT THESE TERMS,
* YOU SHOULD RETURN OR DESTROY THE HSPICE MODELS AND ANY
* OTHER ACCOMPANYING INFORMATION IMMEDIATELY.
* SN74LVC244A
* HSPICE NETLIST file built on Tue Nov 27 09:42:36 CST 2007
.SUBCKT SN74LVC244A PE1 PE2 PE3 PE4 PE5 PE6 PE7 PE8 PE9 PE10 PE11 PE12 PE13
+ PE14 PE15 PE16 PE17 PE18 PE19 PE20
***PLEASE INCLUDE ONLY ONE PACKAGE***
.INCLUDE 'tssop20.pkg'
* .INCLUDE 'tvsop20.pkg'
* .INCLUDE 'soic20.pkg'
* .INCLUDE 'ssop20.pkg'
* .INCLUDE 'qfn20.pkg'
* .INCLUDE 'pdip20.pkg'
* .INCLUDE 'sop20.pkg'
* .INCLUDE 'jrbga20.pkg'
X_SN74LVC244A__DIE PI1 PI2 PI3 PI4 PI5 PI6 PI7 PI8 PI9 PI10 PI11 PI12 PI13
+ PI14 PI15 PI16 PI17 PI18 PI19 PI20 SN74LVC244A__DIE
***PLEASE INCLUDE ONLY ONE PROCESS***
***NOMINAL or STRONG or WEAK***
.LIB 'sn74lvc244a_process.lib' NOMINAL
**
** No globals were defined outside of .SUBCKT calls...
**
**
** The following netlist has gone through the hspice netlist cleaner,
** version v2.0 - Nov 20 2003
** on Tue Nov 27 09:42:36 CST 2007
**
* .width IN=256
** Added by cleaner script...
.SUBCKT SN74LVC244A__DIE S_1NOE S_1A1 S_2Y4 S_1A2 S_2Y3 S_1A3 S_2Y2 S_1A4
+ S_2Y1 CGND S_2A1 S_1Y4 S_2A2 S_1Y3 S_2A3 S_1Y2 S_2A4 S_1Y1 S_2NOE CVCC
.prot FREELIB
7CDM77ZS35 2/=#Kq[oh$S2 o9>p[S#f!xDj)hLQ
7CDM57ZS35%2/=#Kq[oj$S2 o9>p[S#f!xDj)hLQ
7CDMs7ZS35u2/=#Kq[o)$S2 o9>p[S#f!xDj)hLQ
7CDM)7ZS35/2/=#Kq[oS$S2 o9>p[S#f!xDj)hLQ
7CDM07ZSc5 2/b#Kq'oh$S2 o9>p[S#f!xDj)hLQ
7CDM97ZSc5%2/b#Kq'oj$S2 o9>p[S#f!xDj)hLQ
7CDM(7ZSc5u2/b#Kq'o)$S2 o9>p[S#f!xDj)hLQ
7CDM*7ZSc5/2/b#Kq'oS$S2 o9>p[S#f!xDj)hLQ
7CDM[=#Kq[[dT7Zp:KgzV7gY%KX':4/U>:#0
'6/!%'XU.b\v990j$S2 o9>p[S#2;WDj)hLQ
7[XA<SgW%n[ $)gY%K2UV[
+)+%02/#uIF\>j)h[Sq%8(L
!z![k,'$-C2Q'/sf7[w y82E7GD+%xa<sGq
%]= 77[W%n[ $x+3w]Z
a61du:<xaA#dw(eUT6[
4Sq%;A77ZU:KgzV7gY%KX DS8
oQc8Z77zP:B%2[o\;:k-a[7C Y
3dgh#9P:B%2/H#/z=p2[+G/:w[P$u*()/x48_v+Y
3dgWRSw<:x#$%'#:kGZv7Gy%kxD\%8
o9BpH$1#k39>!8y#/6k>2/0z;Y
30a:=#$:kGZv7<kO:E0
'9g5c9o2[O\;:*0 5)8
X9=pu$-C2Q'/sf[
+KR->]J7T! 98z$M$2:x67$S2 o9>p[S8
oQc3;3=# S[fT;7t! 90y$s2 O9>!8y#/6k>2x1%='B7gh9twf=AHzBrwI=AT07KuU)*-(<#[-'z
F.60$f'xZ2=]J#9.mj7zPp9>!8y#/z=p2[+G/:-=L31z2Qw0D$,\(3e%+$u\(3i12>BK(We*+$DQiY
3dgx1%3:=5H;i]w0072/=5w%N[ $s2 O9>P[s#F'RI;/%/#<mxL8_3XCix48_;4(9MJ>_UXWix\Y>8
oQcpH$9vw%\>a$s2 O9pg8u/;2=d;)Xrw'y2;YJj+Y
3dgvB#k>9>P[s#;QN6u.D'wI) -(<#[-[x;:0[(3iz
F.6C 6[x':4#kC9>!8y#/6k>2h#9wI]A+p7x -[1:l
)/sU= 2/=jw<'xu7=#/z=p2>6\/Ac[ad7%(39C*5Xrq
7CDO8=3W<[J2H##/Z=P2[O\;:ODz[// %fXly=#M-210
'6/9+[%2/=5W Y82[O\;:KgzV7kS+K;G8SHWF) 2,_V+y
3dg>#-w<[ 2h##/z=p2[o\;:odZ[// %FxLY=#m-[v:l
)/sU=v2/$##+9>!8y#/z=p2>6\/Ac[ad7%(39C*0X8
oQcMZ97zH:X67$s2 O9>!8y#9Q=>>.#G*:RAH$uQi(6
eG.\\l:b +$4\W%n[ $S2 o9mG8SHS+K;23_3Wi)V:L
)/sU=f2/=rw y82[o\;:kGZv7Ks+k;g8shwf) 2,_v+Y
3dg>.3w<:xu7B##+90s$s2 O9Mg6shiQ]>>$,QP:DAHpX8
oQcMi7X#k>9.mj7z3:k-a[7GD+%xo..G*>cvP..G*:RAHzBrwI)v+p[
4SqO$h77ZI:M4'$S9/%90S$S2 o9mG6SHIq]>>$,qp:dahP[
4SqO$h07ZI:b )$4\W<:XAa#DWuC$ADh/t%fXly=#M-210
'6/92[J2/h#K3UXU57ZI:KgzV7kS2K;S..g*:rah$Uq3(6
eG.\*pe90S$93I:W[2/h#/Z=P2>6*/a:DI[/#=-[X4yjJQ
7CDO6=]W<:XU7h#Kc90S$S2 o9mG6SHIq]>>$,qp:dah0[
4SqO$j$9VW<[%2/b#K>9>!8Y#9q]>>)6*/a9i*77X()IZ
F.6KTM90e$4\w%\>a$s2 O9>P[s#9Q]>>..G*:RAH$uQu>/z
F.6KT>90y$%'#:Bf2[o\;:k-a[7Ks2k;g6shwf) 2,_;up6
eG.\*4:b/2wrsW%\>A$93I:KgzV7kS2K;S..g*:rah$Uqp(6
eG.\*h:b/2wrsW<[/2[+g/:KgzV7kS2K;S.<9S2K;23_3xcIX4y=R+y
3dg>.Uw<:xD\%#/6k>2/=;w%N[ $\/T%F/g6shwf) 2,_3+Y
3dg>.Yw<:xD\%#k3uxa<sGw%N[ $\/T%F/g0+/T%FxLY=+up9C*5<jq
7CDO6E#K>9.MJ7gY%KXUs7gd+%XO..g*>C$AD7%(39c*7x8
oQc6H$93u:BU2[o\;:ydZ,0%=:D8Z[_jwfw[aY<#5I)%:$8QPp/z
F.6'P(90H$93H:kGZv7's+D2L37x#+kA:$,C %)v2:uQL:yAs0X8
oQc6J$9;w<$xaA#dw;c[4t,%wIw[aYX#=!=>*07'm-'12:_34(6
eG.8;W<$XU7j#/Z=P2:6\M9ri2,4\/-/XlH#g(P96*5hJW;dah0[
4SqY/2/=;W<SXAa#DW;C[4T,%WiW[Ayx#=!=>*07'()/X3,_V+y
3dg:<#kE90H)7GD+%x3.#x)fRx4h#G((9I78sQ4:yC*5X#5-[v:l
)/s;2xu7H#k3/xaA#dw;c[4t,%wIw[aYX#=!=>*07'()/x3,_v+Y
3dg:i#k)90+$s2 O96g8u<=f9C78sQ+:R8Z[_rw;DA+$8Q,(/z
F.6'L:Bv2/=rw%N[ $8/ I*IL$uC %)1234\/-ix3,_Yw;)/+p[
4SqYF2/=RW<[XAa#DW;C[4T,%WiW[Ayx#=!=>*07'(#/12:Uq4y
3dg:-2w+Z e(e#/z=p2[o\;:ydZ,0%=:D8Z[_jwfw[aY<#5I) :$8Q3(/z
F.6'VrXxaA#dw%N[ $s2 O96g8u<=f9C78sQ+:yC*7Xjw;)%y$,C %)v0
Z0\;<9.MJ[
+KR->]J7kS2K;S$#0W+%Xza7\K:KgzV7X(P9i*7[
Dp:KgzV7\f:%[4/r0S'9=3T1qrLvT=R,.+HU]$0C,MBA%-0C,+HS Kk[
DU:KgzV7\f:%[4/r0S29=3T1qrLv/[/A'2LvT=33Jxm;:+4fX.5'B+4C,+H(]1L
\3w+%xZA7\k:=326shwI)Y=ru,+h(]kn=$R:RA1rk)Bf!1-5>f<(efkOX++(']kn=$RY
8x;v_7BlVtJz<A+h[*+OX+P>;9=,TjXMi]knX+L3;][7.7q
$9=Uy])bLv%-0tJx3$V$P!3IBAT4ox+3P;][P!ypB;9h6]8
_:]p*Kk)Bl'b+OX+PWi::z=v_I81-S<f<C;9:zef.5[41l
T#T<)Y=rk)uhi::z=U4$/bH)Tx_(eU+4F-.5/be4c,Pr7z
-t#dk:odi[/vq
Hb4/[GsWuC$ADh/469[/$#DW+nXz/7gd+%X4y<#=-[Bj0[
Dp:KgzV7\f:%[4/r0S'9=3T1qrLvT=R,.+HU]$0C,MBA%-0C,+HS Kk[
DU:KgzV7\f:%[4/r0S29=3T1qrLv/[/A'2LvT=33Jxm;:+4fX.5'B+4C,+H(]1L
\3w+%xZA7\k:=326shwI)Y=ru,+h(]kn=$R:RA1rk)=*/bs7$f<(efk4F3!x6
:2gYqrLvT=5!R_(E t0tJxc/HKNKX_(Eu+4C,+HS K4f3tX6
:2g9qrLvT=5!R_(E t0tJxc/HKNKX_(Eu+4C,+HS K4f3tX6
:26YqrLvT=5!R_(E t0tJxc/H$,tJxmI][5C,+H(]KN=$ry
8xi/_7BlVtJz<A+h[*+OX+u(s:4OX+3p;9J4FjX#;][7R7q
H*[ /7kS2K;S.<9Q
Hb4/[GsW[5ilg9sS!b.2XO# 39[!$#ZW%n[ $S9/%9mj>_uxcIX\y0\29YDz\\/vTC$d32:#+n23/[
aWi=aS0x#=+) -5<8
;39>!8y# 39pZ,9$FQ5x;:0[(xVt=rDEuba%-5<ABtq%57c,BU'MkOH+4ba +z<f<(ehH4]8
;C9>!8y# 39pZ,9$FQ]x;:0[(xVtJnk)Btq%knB+up8t\-B.Pbato5\f_>evkO=rXp;][p!].x6
eG.\\p:-g2/=# Z9[U$S9/%9mG8SHS!b1S.<9S+K;2,_7M+A 1$,qrF=9hk[
'f'rXz77Zp:7T=7=R+=vcz-bF.5v%-95-.B7XU[1%)-[Bj)7s/3)u-*x<6(UX'[bqpH'V(=x5Q
H*[ /70$Fr=UJ6cK06
BU\-g\ 9mG8SHS!b1S.<9W+-XzV7\d:=02[+g/:da+$,qpH'V0
'6/9+[XzX7\;:=g289#/6K>28SH4 CVp.#g*:da1,f3r:ra13f3ry
e2Zv9#9Q=>>.4z+>cvPl
!z![k,'$#G*pXd+<7\F:=p28o# <9['$uQ4:RAHzBrq
u[XzV7\d:=028-# %fX4y])biA1-;CF<30y23_7bLvi5P!Vp);9:ZEF.5[41L
T#$O)Y=rk-XpaCknX+L3;][7.7w'BA1rk)uhi944FjXE[]kn=*R:]p*Kk)Bl'b+Ouf<C;9:zef.5[41l
T#T<)Y=rk)uhi:44F-.5/be4c,Pr7z
-t#dk:=>>0%/466
BU\-g\ 9mG8SHW+%Xza7\K:KgzV7X(P9i*7[
kp:=P28O# <9>!8Y# %fX4y])biA1-;CF<30y23_7bLvTl=x+Ue;9:ZEF_(E1:5CF<30y0
o7[;-7T=RK-xP81-7IR_(E S4f)M$/B)0CF<(EHh4C,p27Z
$$1z(xVt=rB+4$/bH(<A+h[/knkx_(eU+4c,+hs k4F3Tx6
:26YqrLvT=5!R_(E t0tJx3::4ox+3P;9j4fJx#;][7r7Q
$9$Uy])bLv%-0tJx3$V$P!3I$d::ZjR.5'][P!].BA Mk[
+)+%02>6\/a6
BU\-g\ 9mG6SHW+%Xza7\K:KgzV7gY%KX4y<#=-[Z
 77GD+%xa<sGwO=Cu\-/$:56(G_7BlVt=33jXM;:+4Fx.5'b+4FjXE[]1l
y-w%N[ $s9/%9pZ,9$FQ]x;:0[(xVtsn9_5 Vt=r,.+hu]$0c,mba%-0cf<(efkK[
kp:=P28O# <9>p[S#t%fX4y])biA1-;CF<30y23_7bLvTl=x+Ue;9:ZEF_(E1:5CF<30y0
o7[;-7T=RK-xP81-7IR_(E S4f)M$/B)0CF<(EHh4C,p27Z
$$1z(xVt=rB+4$/bH(<A+h[/knkx_(eU+4c,+hs k4F3Tx6
:26YqrLvT=5!R_(E t0tJx3::4ox+3P;9j4fJx#;][7r7Q
$9$Uy])bLv%-0tJx3$V$P!3I$d::ZjR.5'][P!].BA Mk[
+)+%02>6*/a6
BU\-g\ 98z<7c :M4'$S2 o9>p[S#M2)u:$U\(3/Z
F.6K 39.mj7C :kGZv7GD+%xo.#G*Q=>>$,QP:DA1,#,Px6
eG.\*p:M4'$4\W%\>A$S2 o9>p[S#9q]>>..g*:rah$Uqri]9hk[
+)+%02H#9Q
Hb4/[GsWoC[4$\c RbXI3rZW%n[ $1')') :L
y3w2R4u$\C rBx 6#/$C/x;:0[(xV=3t1,+hs kK[
DU:KgzV7k#+002V#XKR-D;$1')')y=R1')'A%-0C,+HS Kk[
D3:KgzV7k#+002V#XKR-DI$1')')y=Rh,b<>6'R1')'A%-0CF.5/BE4]8
X9=pu$y/ I6
BU\-g\ 96G8U<=F9;7a/#=0dXAa#DWFW[Ay<#M!=>*P7'M-IX3y=wQ
H]=3g\#t()y=R8X6H/%j4f+,B7Z
 77GD+%xLWu#;+D0mx6[q
$9=3T1qrLvT=R8X6H/%j4f)b;!%[RbRj=]1K45VU(;:+o,c %8c78SF<LYc$,4\/B;L)4fJxe[]1L
!*$;5M26=QRlV64=!juC;9-;c7q
o'XAa#DWaWg>$Y\M<03Gg[
aW'Y2;y])bLvT3,3++c'][RK'6cATj0Iet3;]W)bJ.$I:lH#g_iW[A4f)5i8c78SF.=U][P!ypB7Z
-61'$U9$JY])5I!b:5BfRY
%U2[o\;:R.4$y\m<03g6[
aW'Y2;y])bcQuKNK'M$d8z[t)bLY\jNK-4wQTI5f+,B;]W)bJ.5v64=!JUc;]$0t%#+K:4H#g.5/BE4]8
X256;>7*3-7t3,3++C']1l
yvw%N[ $/CDA9pZ,9$FQ]z
$$1')')Y=rBE3bat3,Tx#+k:=rk'6CatJ0iEB2u9-;cf.=:%:4F)5I!b:5Bf.$i:Lh#G_Iw[a4FjX#;Y0
:-#K390j$])5*v%[RbRj=vT3,fJx#;\:Zx-.B;]1$9g$F*ahZx]4:x>hyb+I3*\:s[
aW K%*;!549!1YL
8hP:F8!d7zP:7tJ0iEBlyC[p!].*/b:5cfR:B>;30QPh/f+$%GP-[bV00.+M97a5_rX#/25p$8
5A'xu57%VI9Y=5<U'lV64nX+,b!1-pBf.x90aG,<(3e1e07S/3) -*<<6(ux'[BQ4h(1(=X5q
H*[ /7'S+d2l3[
+KR->]J7DSZY0G 8#9!=4U$.%!<9_*77[595ahP7X(3E*+L
y/[I%xi3RzwUw[m/7dszy0g udw'y2;Y])$;*=[p!YPb7z
 .o'w2R4u$\C rBx 6#/$C/x;:0[(xVt=r1')'qCknJf_lVt4OJf<M;9\4c,+hs kK[
DS;*-2>4\!<9$l\9#;qn6U.8<Y:56(g_7b'Y2;Nx+l3;y0
Z0\;<9PGa8ZSTYZ
-/R0/.Xxut9dw!=xD\%#/z=p2[+G/Y
3dg>#3w%\>a$s9/%90H$s2 O9Mg8shsp\dZ[/#=-[bJ07x(p/z
F.6K C90H$m$2:m4'$s2 O9Mg8shsp\dZ[/#m-i123_3XCiz
F.6K M9.mj7GD+%xaA#dw%N[ $\/ %Fd+<6\/A9I*7!-4:DA+p[
4SqY 2H##vRxXAa#DW;C[4T,%W;dah)7'(c'V234\/-/X4H#g()6
B(8YZW<*0 L
!z![k,'$\/ %Fd+<7\;:=G289#/z=p2,_rwf) -5<8
939[ $#2w+BxaA#dw+k;2,_7BlD9:zef.5[41$,QRlVtL=X+i32][p!].ba mK[
aW'%a1RK)bcEV$P!3jP81-5xy.5vc$P!;4B;9:Z>3.BA Ik[
aW'ba1RK)bcEV$P!3jP81-5xy.5vc$P!;4B;9:Z>3.BA Ik[
aW2%a1RK)bcEV$P!3jP81-5xy_i81-s<F<c;9:ZEF.5[41L
T#T<)Y=rk)uhi::z=U4$/bJp>Am$/b)0c,uba1-;cf<30Y0
Z0\;<9mG8SHSP\Z
-/R0/.Xx787C :m4'$s2 O9>P[s8
oQc8Z<=#VrXxu77GD+%xa<sGw!=-2,#Qi:D$*7X8
oQcMZ77t! 98Z$s2 O9>!8y#9Q=>>.#G*:RAH$uQ3(6
eG.\*p:M4'$4\W%\>A$S2 o9>p[S#9q]>>..g*:rah$Uqj(6
eG.\*U:M4'$93W%\>A$S2 o9>p[S#9q]>>..g*:rah$Uqp(6
B(8YZW!=Z
-/R0/.Xx(/y-o:]= $s2 O6
Ph$S2 o9$;V7Dt+C=v77[595a1RKR,HI9jZ<F<HS Kk[
DU:KgzV7*$o9Pz,9$fq5X;:0[(c'uhL
y;w%N[ $.[;:%[4/R0s29=3t1QuCuz
F.6K 390H$9-w%N[ $s2 O9Mg8shsp\dZ[/#=-[bJ07x(3s10
'6/535XU57gd+%XAa#DW;C[4T,%WiW[Ayx#=!=>*07'M-IBt07'(>2J0
'6/53-XU57gd+%XAa#DW;C[4T,%WiW[Ayx#=!=>*07'(>2J2:Uq4H$V0
:b#t'%XU77V+:b>;30qpH/F+$%gp-'BS70.+m97A5_]x)I25P$8
X9=pu$0z;C3z
-/R0/.Xx ds##09>!8y#/6k>0
'6/ 390h$4TW%n[ $S2 o9mG8SHS+K;23_3Wi) :L
)/s+[12hm#k#9>!8y#/z=p2>6\/Ac[ad7%(39C*S<8
oQc[J$9-w!mxaA#dw%N[ $\/ %FdZ[/#=-[x4Y<8
oQc[)$9;w!mxaA#dw%N[ $\/ %FdZ[/#=-[x4Y=jq
7CDz)7ZI:bu2[O\;:KgzV7kS+K;G8SHWF)/2,_VQ
7CDz07Z4:b/2[O\;:KgzV7kS+K;G8SHWi)/23_VQ
7CDz97Zh:bV2[O\;:KgzV7kS+K;G8SHWi)/23_VQ
7CDz(7Zj:bJ2[O\;:KgzV7kS+K;G8SHWF) 2,_;Q
7CDz*7Zp:bJ2/E#/Z=P2>6\/aC[AD7%(39c*7x8
oQc[e$9]w<$xaA#dw%N[ $\/ %FdZ[/#=-[x4Y<8
oQc$H$s9/%90H$4tw%\>a$s2 O9Mg6shiQ]>>$,QP:DAHp[
4Sq] :$S9/%98d$9yW%\>A$S2 o9mG6SHIq]>>$,qp:datP[
4Sq]%2[+g/:b%2HM#/6K>2[O\;:ODI[/VS2K;23_3Wi)%:L
)/s2uxa<sGw<ux7W7Gy%kxaA#dwUc$adH/T%FxLY=#m-'10
'6/t>9>p[S#K>90)$S9/%9>!8Y#9q]>>)6*/a9i*)7X(e6
eG..RW%\>A$9RW<:XA<SgW%n[ $\/t%f/G6SHWi)H23_VQ
7CDI97gY%KXU97Z4:K-A[7gd+%XO..g*>C$AD7X(e9i*)[
4Sq]*2[+g/:b*2/$#/6K>2[O\;:ODI[/VS2K;23_3Wi)J0
'6/te9>p[S#Ke90Y$9-W%n[ $\/t%f/G6SHWF) 2,_-+y
3dg6e#/6k>2/>#kW9>P[s#/z=p2>6*/A:di[/#=-[x4Y=rq
H*[ /7D*%6
BU\-g\ 92UVh4W25P2[O\;y
%dg5y-w%N[ $.[;:%[4/R0s'9=3t1QPW$10
V6/UoUXAa#DW25P2V#XKR-DI$1')')%h5[
4Sq'mz77ZU:bu2[O\;:KgzV7kS+K;G0+/ %fXly=+UP9c*7>JQ
;CDj:b#t'%XU57V+:b>;30qpH/F+$%gp-'BS70.+m97A5_]x)I25P$8
;39>!8y#T'%x 6#/$E[x;:0[(xVt+;!r<Cevkn!YPb7z
 57GD+%xiGy#;+D0mx6[w'y2;YB-336
P)$S2 o9$;V7D ib4/..#$;*=*5b;Q
7CDO8=#K390S$S2 o9>!8Y#9q=>>.<9S+K;2,_3l(9i*7!-4y
3dg:=[w<:xaA#dw%N[ $8/ I*IL$uC %)1234\/-ix3,_rXWix3YH;3Y
3dg:=0w<:xaA#dw%N[ $8/ I*IL$uC %)1234\/-ix3YH;3:yC*0!U4Y
y%261dw<[xsp7z/'R2*7!j,p97a7_-X>[25pJ#2%'Aez$r)*/j0
'6/5c5XUs7gd+%XAa#DW;C[4T,%WiW[Ayx#=!=>*07'(>Uu2:Uq4H$V0
'6/5c-XUs7gd+%XAa#DW;C[4T,%WiW[Ayx#=!=>*07'M-IBt07'(>Uu0
Z0\;<92UVh4Q
Hb4/[GsW Y8G5hV8:=.($%'#:KgzV7gY%KZ
a61dw+m22[o\;:/b)(.8
oQcp>[=#kC9>!8y#/6k>2v/Gq
7CD78=#K390j$S2 o9>p[S##+C.(L
)/s!=-H$9-w y82[o\;:k-a[7C 69CiYB3+:D[**X8
o9BpH$#t):B 2[o\;:k-a[7z)<%z
F/s'P:=.($s2 O92uvH4q
H*[ /7s5!C%S)*8
X<03aM%##+c.($4\w0072[o\;:k-a[[
4SqW[p77T! 90h$S2 o9>p[S##+\X46_3+:d[*)[
4SqO[h$M$2:W[2[O\;:KgzV7kS+K;G8SHWF) 2,_R+y
3dg>.3w0072h##/6k>2[o\;:k-a[7Ks2k;g6shwf) 2,_3+(6
eG.\*U:M4'$93W%\>A$S2 o9>p[S#9q]>>..g*:dahP7%(36
B(8YZW!=DdT[
+KR->]J74/6K>(/Y#/6K>IgY#/Z=P0
[.[;:K-A[.[;:KgzV7Jxm$$0
'-:) [XA<Sgt'%XAa#DW[Wg\T%#M2[avP7%t3)VvL
)Gy%k2uv=#/6k>iGy#/z=p2[+G/9Bp0
Z0\;<9eA<Sg)<%Z
-/R0/.Xx/ho:) 93m/7GD+%xL6=QP(9Ci7_vH(6
eG.4\Yc90j$9;W[002[O\;:W[p57X -UJ2,.qjc6
eG.4\Ym90)$9VW[002[O\;:W[p57Xt-UJ:$U\(3S10
'6/9+[X/\9#K>9>!8Y#/Z=P2>6\/aC[AD7%(39c*s$J+y
3dg>.3w[002xRzw<'x/\9#/z=p2>6*/A:di[/#m-7Ci7]#=-7Ii7]8
oQc6HG7zL:kGZv7GD+%x3.#x)fRx3,_rwIw[aYX#=!=>*07'(C/,0
'6/53-XU*7Zh:KgzV7'S+d2l37'M-IX4H#g((9i78Sq4:YajPG8
oQc6H[7z4:Bj2[o\;:ydZ,0%=:yC*07x#+kA:$,C %)v2:_-+.6
eG.83;:bV2/I#/Z=P2:6\M9ri2:Uq4:d8z[_JWFW[Ay<#5-'1]L
)/s;[22/B#kW9>!8y#5Q=C(3,#5I)v2,4\/-/xLh#G(p96*5XWq
H*[ /70#Zj2'L
!z![k,'$4\yC98Z$m$2:]C3$s2 O9CiYJjwI=AHp[
4SqO[h$M$2:W[2[O\;:KgzV7kS+K;G8SHWF) 2,_7M+A 1L
)/sU] 26u'w0072h##TIyxaA#dwUc$adH/T%FxLY=#m-7Cin=7q
H*[ /7c 6'Z
-/R0/.Xxa<sG)<%xa<sGT'%xaA#dq
7CD 77gY%K$;V7gd+%XAa#DWoC[4.Y* q5/:07[595a17xJ<cEV1L
!< OBxa<sG)<%z
[n[
,<:x;($dT=FMc78O#x<03Am%ZWi*6($1D;9%X/e7s*99>lT1\);9>d>\[ oEZ
[n7S*9B22G8<w;*nmh8<;:w[2W8d);97D$8<90\22j/<w<]8at6KVO*I261'$U*7(:9+q
5AZ
[$\t;!J8(v7S*99Mg6shi:=2'34z2:J.3$%h):]>>$9*#%*xoWy<=heb0
Z9$f%472>6*/a:DI[/# [9[ $#2W+bXAa#DWi)V23_3Q
o[XAa#DW+-X 8UZ![C=2g8<$-7T=RK)=*/B)4tR.5d][5!R.5/Bv7C7Q
o'XAa#DW+-X 8UZ![C$2g8<$-7T=)fZ%;xT=RK%6(EuKo<F<i;9jZ<F.5/BE4]8
939[ $#2w+BxZx7*/A9C*Kk)m5/be4c,Pr7xLY])BlVI5p!-Lba1-;cA+h/1J4c,Pr7z
$$1d(xVt=rB+4$/bH(<A+h[/knkx_(eU+4c,+hs k4F3Tx6
:2g9qrLvT=5!R_(E t0tJx3:][RUa+HUVK4fJxe[]KN=*ry
8xiv_7BlVtJz<A+h[*+OX+P>8C$p!;4ba%knX+,b;9H\]8
_:]0*Kk)Bl'b+OX+PWi::z=v_I81-S<f<C;9:zef.5[41l
!< OBxo..G*>c$ad[
,WuMP7 4<;:x;($\/t%f/G0+# 9xi7/%#[0YX'D0#t%fXU64g):O. T,+xH6
BU\-g\ 9mG6SHIqI-G6SHW+-XzV7\d:=02[O\;:da+$,qpH'V0
V=#/Z=P28-#;+d0MX6[W'Y2;y])bLvTl=x+3B8VKNUF<cEVKNx+l3;y0
Vb#/Z=P28-#;+d0MX6*W'Y2;y])b>A0n:%)bLvi5P!;.$I][,C,UHI]KNx+,B7Z
o77\;:=G289# [9$ad7x(xVt4nX+,b;9H\]#=-7t=r,.+h: y4FjX#;][7R7q
$9= y])bLv%-0tJx3$V$P!-+e;9=,tJxmI]KNx+l3;][7.7Q
$9=Uy])bLv%-0tJx3$V$P!-+e;9=,tJxmI]KNx+l3;][7.7Q
$9$ y])bLv%-0tJx3$V$P!-+e8c$P!;4BA%KNx+,B;9h\]8
_:]0*Kk)Bl'b+OX+PWi::zBjL$D::zJr.5'][p!].ba mK[
+)+%02>6*/a:D+<6*/a6
92>MD#TW2 $%H):ODz[/# 9xi7/%#[0YX'D0# %fXU64g):O. T,+xH6
BU\-g\ 9mG8SHS+K;28Y# Z9[U$S2 o9c*07%(36
mh$#DW+nXz/7gd+%Xz[/#M-7T=,fJx#;][7r7WF)y=RK)=*/Bj*C,+H(]$P!J+c;][7r7Q
$9= y])bLv%-0tJx3$V$P!3IBAT4ox+3P;][P!ypB;9h6]8
_:50*Kk)Bl'b+OX+PWi::z=v.5VC$p!;4b;9:z>3.ba iK[
aW2%a1RK)bcEV$P!3jP81-7haM$/B)0C,UBA1-;CF<30y0
o7*K-7T=RK-xP81-7IR_(E SoUa+HUVKNbF<(EFK4f3!X6
B(8YZWuC[AD6\/a6
92>MD#TW2 $%H):ODz[//#<//G0+# 9xi7/%#[0YX'D0# %fXU64g):O. T,+xH6
BU\-g\ 9mG8SHS!b1S.<9S+K;28-# o9[!$#ZW%\>A$Uq4:rahZbRQ
7CDO8=# [9[ $#2W+bXA<SgW+K;+J6RYq=>>$UqriA 1$,qrFA 1L
!< OBxo.#G*Qw0:)6ryQ=>>l
F#90%8\h0dw F22>6*/A9[(j,Ck 9_D:7S*99$ad7zT!k22>md)feb-l
!z![k,'$\/T%Fdi[/# O9[!$#zw%N[ $s9/%9C*07%(36
Ph$S2 o9>p[S#;+d0MX6[W'Y2;y])bLvTl=x+3B8VKNUF<cEVKNx+l3;y0
Vb#/Z=P2[+g/:%[4/r0S29=3T1qrLv/[/A'2LvT=33Jxm;:+4fX.5'B+4C,+H(]1L
\3w+%xZA7\k:k-a[7*/A9C*Kk)m5/be4c,Pr7xLY])BlVI5p!-Lba1-;cA+h/1J4c,Pr7z
$$1d(xVt=rB+4$/bH(<A+h[/knkx_(eU+4c,+hs k4F3Tx6
:2g9qrLvT=5!R_(E t0tJx3:][RUa+HUVK4fJxe[]KN=*ry
8xiv_7BlVtJz<A+h[*+OX+P>8C$p!;4ba%knX+,b;9H\]8
_:]0*Kk)Bl'b+OX+PWi::z=v_I81-S<f<C;9:zef.5[41l
!< OBxo..G*Q]>>l
F#90%8\h0dw F22v6\m:=2'34z2:J.3$%h):%$Z.1v+p90ihs<wUmp(3!+XY
e0mxsW2:%dZ,6dT+c=sp<#9!=4u$.%!<9>!8y#$;*=*7X8
;39$L\9#9!=4u$y* Q5/:07[595A1r1')'a1-*=fRY
%%2[o\;:o8Z\9#;+D0mx6[w'y2;Y])B'y2;nB+4ba1-*=fRY
%U2[o\;:o8Z\9#;+D0mx6*w'y2;Y])B>atu_8SB'y2;nB+4b;][p!].x6
B(8YZWoC[4.Y* q5/:0[
,WuMP7 4<;:x;($Y/ i9[(J,cK 9_d:7s*99PI86[U(90IHS<WuMP(3!+xy
e0mxsW2:%dZ,6dT+c=Jp7K#+0026,$k:kGZv7[595AHp[
Dp:]iM/7k#+002V.\S''12g8<$-7T;:0[<(EHh4]8
;C9>!8y#9!=4u$y\m<03gG7[595A1rk[5959Jz<f<(ehH4]8
;M9>!8y#9!=4u$y\m<03g67[595A1rkv<lBn3jk[5959Jz<f.ba1-;c7q
H*[ /7DS+dD 6#/$c/Z
[$\t;!J8(v7S*99Mg8shsp\xZt%%#<Xx\W8#2A*xZ[/#k2w>($\t;9Rb-z[
+KR->]J7kS+K;G0+/ %fXzV7\d:=02[O\;:da+$,qpH'V0
>=# o9[!$#ZW%n[ $#g*:da1RKX<(EFK4f3!X9i*kK)bF!1-)=5.5/BE4C,pR7Z
$$1d(xVt=rB+4$/bH(<A+h'1V4F)m$/b)0cf<(ehH4c,P27z
$$1z(xVt=rB+4$/bH(<A+h'1V4F)m$/b)0cf<(ehH4c,P27z
$$.d(xVt=rB+4$/bH(<A+h'1VOuA+huvknBf<(efk4F3!x6
:269qrLvT=5!R_(E t0tJxc/H$,tJxmI][5C,+H(]KN=$ry
e2Zv9#9Q=>>.<9s+k;0
N7kvoW_7TY#2a*Xz[/R2qI-280s=!b72 M'W f228SHW<]8AT7kvo*i-Z!8
X<03aM%# %Fv'.<9s+k;28-# O9[!$#zw+Xx4Y<#=-[bJ0[
kp:=P28O# <9[/$#g*:da1RKX<(EFK4f3!X9i*kK)bF!1-)=5.5/BE4C,pR7Z
$$1d(xVt=5!r<I;9:z>3.ba iK7[k-7t=rB+45D][p!YPb;9H6]#TO)Y=rk)uhi:44F-.5/be4c,Pr7z
$$.z(xVt=rB+4$D][5c,+h(]kn=$RY
e2Zv9# %Fv'.<9s+k;0
Zr\t;M70
.ENDS SN74LVC244A
