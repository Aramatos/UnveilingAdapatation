%% Correlation freq
load('charge_S2')
load('charge_S3')

charge=[charge_S2; charge_S3];

plotregression([charge(:,1); charge(:,2); charge(:,3)],[TIME_AMP(:,1); TIME_AMP(:,2); TIME_AMP(:,3)])