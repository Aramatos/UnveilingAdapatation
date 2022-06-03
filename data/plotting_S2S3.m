clear all
clc

%% SUBJECT 2
% El. 2 As. 4

amp1=[680];
freq1=[5 5 5 50 50 50 500 500 500];
pw1=[20];

time1=[120 101 124 118 120 90 55 83 60];

amp11=[650 650 650 680 680 680 800 800 800];
freq11=[50];
pw11=[20];

time11=[92 109 103 138 126 129 183 171 180];

% El. 3 As. 2

amp2=[500];
freq2=[5 5 5 50 50 50 500 500 500];
pw2=[40];

time2=[106 107 113 90 99 100 52 88 70];

amp22=[400 400 400 500 500 500 700 700 700];
freq22=[50];
pw22=[40];

time22=[90 100 117 122 127 130 187 197 207];


% El. 1 As. 11

amp3=[700];
freq3=[5 5 5 50 50 50 500 500 500];
pw3=[20];

time3=[116 115 98 124 95 110 52 65 74];

amp33=[650 650 650 700 700 700 800 800 800];
freq33=[50];
pw33=[20];

time33=[110 91 89 115 118 121 143 156 132];

% El. 4 As. 3

amp4=[700];
freq4=[5 5 5 50 50 50 500 500 500];
pw4=[70];

time4=[106 107 89 120 119 100 66 44 70];

amp44=[700 700 700 800 800 800 900 900 900];
freq44=[50];
pw44=[70];

time44=[100 110 117 122 137 140 195 187 167];


TIME_FRE=[time1; time2; time3; time4];
TIME_AMP=[time11; time22; time33; time44];

charge11=amp11*pw11/1000;
charge22=amp22*pw22/1000;
charge33=amp33*pw33/1000;
charge44=amp44*pw44/1000;

charge_S2=[charge11(1:3) charge22(1:3) charge33(1:3) charge44(1:3); charge11(4:6) charge22(4:6) charge33(4:6) charge44(4:6); charge11(7:9) charge22(7:9) charge33(7:9) charge44(7:9)]'

%save('charge_S2.mat', 'charge_S2')

load('TIME_AMP_S2')
load('TIME_FRE_S2')

bar([mean(TIME_FRE(:,1)), mean(TIME_FRE(:,2)), mean(TIME_FRE(:,3))]);
hold on
errorbar([mean(TIME_FRE(:,1)), mean(TIME_FRE(:,2)), mean(TIME_FRE(:,3))],[std(TIME_FRE(:,1)), std(TIME_FRE(:,2)), std(TIME_FRE(:,3))])

figure

bar([mean(TIME_AMP(:,1)), mean(TIME_AMP(:,2)), mean(TIME_AMP(:,3))]);
hold on
errorbar([mean(TIME_AMP(:,1)), mean(TIME_AMP(:,2)), mean(TIME_AMP(:,3))],[std(TIME_AMP(:,1)), std(TIME_AMP(:,2)), std(TIME_AMP(:,3))])

[p,t,stats]=kruskalwallis(TIME_FRE);
multcompare(stats)

[p,t,stats]=kruskalwallis(TIME_AMP);
multcompare(stats)

%% Single channels

figure
hold all
errorbar([mean(time1(1:3)), mean(time1(4:6)), mean(time1(7:9))],[std(time1(1:3)), std(time1(4:6)), std(time1(7:9))])

errorbar([mean(time2(1:3)), mean(time2(4:6)), mean(time2(7:9))],[std(time2(1:3)), std(time2(4:6)), std(time2(7:9))])

errorbar([mean(time3(1:3)), mean(time3(4:6)), mean(time3(7:9))],[std(time3(1:3)), std(time3(4:6)), std(time3(7:9))])

errorbar([mean(time4(1:3)), mean(time4(4:6)), mean(time4(7:9))],[std(time4(1:3)), std(time4(4:6)), std(time4(7:9))])

figure
hold all
errorbar([mean(time11(1:3)), mean(time11(4:6)), mean(time11(7:9))],[std(time11(1:3)), std(time11(4:6)), std(time11(7:9))])

errorbar([mean(time22(1:3)), mean(time22(4:6)), mean(time22(7:9))],[std(time22(1:3)), std(time22(4:6)), std(time22(7:9))])

errorbar([mean(time33(1:3)), mean(time33(4:6)), mean(time33(7:9))],[std(time33(1:3)), std(time33(4:6)), std(time33(7:9))])

errorbar([mean(time44(1:3)), mean(time44(4:6)), mean(time44(7:9))],[std(time44(1:3)), std(time44(4:6)), std(time44(7:9))])

%% SUBJECT 3

% El. 1 As. 8

amp1=[650];
freq1=[5 5 5 50 50 50 500 500 500];
pw1=[40];

time1=[150 141 165 158 169 188 75 42 71];

amp11=[600 600 600 700 700 700 780 780 780];
freq11=[50];
pw11=[20];

time11=[150 153 139 208 156 209 263 240 280];

% El. 2 As. 11

amp2=[850];
freq2=[5 5 5 50 50 50 500 500 500];
pw2=[50];

time2=[170 161 208 148 168 198 54 63 68];

amp22=[800 800 800 850 850 850 900 900 900];
freq22=[50];
pw22=[50];

time22=[130 123 119 198 180 187 263 220 280];

% El. 3 As. 11

amp3=[640];
freq3=[5 5 5 50 50 50 500 500 500];
pw3=[30];

time3=[184 175 144 187 160 186 46 74 65];

amp33=[440 440 440 640 640 640 800 800 800];
freq33=[50];
pw33=[30];

time33=[119 127 145 183 170 198 256 234 272];

% El. 4 As. 5

amp4=[360];
freq4=[5 5 5 50 50 50 500 500 500];
pw4=[60];

time4=[152 153 162 166 189 170 70 57 78];

amp44=[300 300 300 360 360 360 500 500 500];
freq44=[50];
pw44=[60];

time44=[139 157 115 193 180 168 262 284 292];

TIME_FRE=[time1; time2; time3; time4];
TIME_AMP=[time11; time22; time33; time44];

charge11=amp11*pw11/1000;
charge22=amp22*pw22/1000;
charge33=amp33*pw33/1000;
charge44=amp44*pw44/1000;

charge_S3=[charge11(1:3) charge22(1:3) charge33(1:3) charge44(1:3); charge11(4:6) charge22(4:6) charge33(4:6) charge44(4:6); charge11(7:9) charge22(7:9) charge33(7:9) charge44(7:9)]'

%save('charge_S3.mat', 'charge_S3')

load('TIME_AMP_S3')
load('TIME_FRE_S3')

bar([mean(TIME_FRE(:,1)), mean(TIME_FRE(:,2)), mean(TIME_FRE(:,3))]);
hold on
errorbar([mean(TIME_FRE(:,1)), mean(TIME_FRE(:,2)), mean(TIME_FRE(:,3))],[std(TIME_FRE(:,1)), std(TIME_FRE(:,2)), std(TIME_FRE(:,3))])

figure

bar([mean(TIME_AMP(:,1)), mean(TIME_AMP(:,2)), mean(TIME_AMP(:,3))]);
hold on
errorbar([mean(TIME_AMP(:,1)), mean(TIME_AMP(:,2)), mean(TIME_AMP(:,3))],[std(TIME_AMP(:,1)), std(TIME_AMP(:,2)), std(TIME_AMP(:,3))])

[p,t,stats]=kruskalwallis(TIME_FRE);
multcompare(stats)

[p,t,stats]=kruskalwallis(TIME_AMP);
multcompare(stats)

%% Single channels

figure
hold all
errorbar([mean(time1(1:3)), mean(time1(4:6)), mean(time1(7:9))],[std(time1(1:3)), std(time1(4:6)), std(time1(7:9))])

errorbar([mean(time2(1:3)), mean(time2(4:6)), mean(time2(7:9))],[std(time2(1:3)), std(time2(4:6)), std(time2(7:9))])

errorbar([mean(time3(1:3)), mean(time3(4:6)), mean(time3(7:9))],[std(time3(1:3)), std(time3(4:6)), std(time3(7:9))])

errorbar([mean(time4(1:3)), mean(time4(4:6)), mean(time4(7:9))],[std(time4(1:3)), std(time4(4:6)), std(time4(7:9))])

figure
hold all
errorbar([mean(time11(1:3)), mean(time11(4:6)), mean(time11(7:9))],[std(time11(1:3)), std(time11(4:6)), std(time11(7:9))])

errorbar([mean(time22(1:3)), mean(time22(4:6)), mean(time22(7:9))],[std(time22(1:3)), std(time22(4:6)), std(time22(7:9))])

errorbar([mean(time33(1:3)), mean(time33(4:6)), mean(time33(7:9))],[std(time33(1:3)), std(time33(4:6)), std(time33(7:9))])

errorbar([mean(time44(1:3)), mean(time44(4:6)), mean(time44(7:9))],[std(time44(1:3)), std(time44(4:6)), std(time44(7:9))])

%% Both SUBJECTS
clear all
clc

load('TIME_AMP_S2')
load('TIME_FRE_S2')

TIME_AMPS2=TIME_AMP;
TIME_FRES2=TIME_FRE;

clearvars  -except TIME_AMPS2 TIME_FRES2

load('TIME_AMP_S3')
load('TIME_FRE_S3')

TIME_AMPS3=TIME_AMP;
TIME_FRES3=TIME_FRE;

TIME_AMP=[TIME_AMPS2; TIME_AMPS3];
TIME_FRE=[TIME_FRES2; TIME_FRES3];

bar([mean(TIME_FRE(:,1)), mean(TIME_FRE(:,2)), mean(TIME_FRE(:,3))]);
hold on
errorbar([mean(TIME_FRE(:,1)), mean(TIME_FRE(:,2)), mean(TIME_FRE(:,3))],[std(TIME_FRE(:,1)), std(TIME_FRE(:,2)), std(TIME_FRE(:,3))])

figure

bar([mean(TIME_AMP(:,1)), mean(TIME_AMP(:,2)), mean(TIME_AMP(:,3))]);
hold on
errorbar([mean(TIME_AMP(:,1)), mean(TIME_AMP(:,2)), mean(TIME_AMP(:,3))],[std(TIME_AMP(:,1)), std(TIME_AMP(:,2)), std(TIME_AMP(:,3))])

[p,t,stats]=kruskalwallis(TIME_FRE);
multcompare(stats)

[p,t,stats]=kruskalwallis(TIME_AMP);
multcompare(stats)

%% Correlation freq

a=5*ones(1,12);
b=50*ones(1,12);
c=500*ones(1,12);
x=[a' b' c'];

plotregression([x(:,1) ;x(:,2); x(:,3)],[TIME_FRES2(:,1); TIME_FRES2(:,2); TIME_FRES2(:,3)])

figure
plotregression([x(:,1) ;x(:,2); x(:,3)],[TIME_FRES3(:,1); TIME_FRES3(:,2); TIME_FRES3(:,3)])

%% Correlation absolute amplitude

load('charge_S2')
load('charge_S3')

charge=[charge_S2; charge_S3];

plotregression([charge(:,1); charge(:,2); charge(:,3)],[TIME_AMP(:,1); TIME_AMP(:,2); TIME_AMP(:,3)])


%% Correlation normalized amplitude

charge_n=charge_S2;
for i=1:length(charge_n)
    
    charge_n(i,:)=(charge_n(i,:)-charge_n(i,1))/(max(charge_n(i,:)-charge_n(i,1)))
    
end

plotregression([charge_n(:,1); charge_n(:,2); charge_n(:,3)],[TIME_AMPS2(:,1); TIME_AMPS2(:,2); TIME_AMPS2(:,3)])

charge_n=charge_S3;
for i=1:length(charge_n)
    
    charge_n(i,:)=(charge_n(i,:)-charge_n(i,1))/(max(charge_n(i,:)-charge_n(i,1)))
    
end

plotregression([charge_n(:,1); charge_n(:,2); charge_n(:,3)],[TIME_AMPS3(:,1); TIME_AMPS3(:,2); TIME_AMPS3(:,3)])

%% Correlation normalized amplitude 2
% 
% charge_n1=charge;
% for i=1:length(charge_n1)
%     
%     charge_n1(i,:)=(charge_n1(i,:)-min(charge_n1(:,1)))/(max(charge_n1(:,3)-min(charge_n1(:,1))))
%     
% end
% 
% figure 
% plotregression([charge_n1(:,1); charge_n1(:,2); charge_n1(:,3)],[TIME_AMP(:,1); TIME_AMP(:,2); TIME_AMP(:,3)])



