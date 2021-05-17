#define _ARMA_

class CfgPatches
{
	class real_sfx_blood_mist
	{
		name = "Real Effects Blood Mist";
		author = "amartyn, Mr Goose";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Data_F", "A3_Data_F_ParticleEffects"};
	};
};

class CfgCloudlets
{
	class Blood;
	class BloodMist: Blood
	{
		lifeTime = 0.2;
		lifeTimeVar = 0.02;
		moveVelocity[] = {"(+ inDirX * 2 - surfNormalX / 4) * inSpeed / 250 * 1","( + inDirY * 2 - surfNormalY / 4) * inSpeed / 250 * 1","( + inDirZ * 2 - surfNormalZ / 4) * inSpeed / 250 * 1"};
		moveVelocityVar[] = {"(+ inDirX * 2 - surfNormalX / 4) * inSpeed / 200 * 0.1","( + inDirY * 2 - surfNormalY / 4) * inSpeed / 200 * 0.1","( + inDirZ * 2 - surfNormalZ / 4) * inSpeed / 200 * 0.1"};
		size[] = {"(hit/120 + 0.05)","2*(hit/60 + 0.15)"};
		sizeVar = 0;
		rotationVelocity = 1;
		rotationVelocityVar = 0.2;
		randomDirectionPeriod = 0.1;
		randomDirectionPeriodVar = 0;
		rubbing = 0.4;
		weight = 0.15;
	};
};