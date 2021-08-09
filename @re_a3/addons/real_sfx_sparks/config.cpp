#define _ARMA_

class CfgPatches
{
	class real_sfx_sparks
	{
		name = "Real Effects Sparks";
		author = "amartyn, Gokmen";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class CfgLights
{
	class real_BulletExplo
	{
		diffuse[] = {1,0.5,0.4};
		color[] = {1,0.6,0.4};
		ambient[] = {0,0,0,0};
		brightness = 1;
		size = 1;
		intensity = 500;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 2.2;
			hardLimitStart = 500;
			hardLimitEnd = 1000;
		};
		position[] = {0,3.5,0};
	};
};

class CfgCloudlets
{
	class Default;
	class real_SparksDrop: Default
	{
		interval = 0.020;
		color[] = { { 4, 0.2, 0.1, -500 }, { 4, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 563, 180, 55, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.05;
		lifeTimeVar = 3;
		weight = 1000;
		volume = 0.002;
		rubbing = 0.15;
		size[] = { 0.025, 0.005, 0 };
		sizeVar = 0.5;
		moveVelocity[] = { 0.3, -2, 0.3 };
		moveVelocityVar[] = { 0.3, 0, 0.3 };
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.2;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		rotationVelocity = 1;
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 1000 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0.01, 0.01, 0.01 };
		rotationVelocityVar = 0;
		colorVar[] = { 0.05, 0.05, 0.05, 5 };
		randomDirectionPeriodVar = 0.1;
		randomDirectionIntensityVar = 0.2;
	};
	class real_SparksBurst: real_SparksDrop
	{
		interval = 0.001;
		color[] = { { 4, 0.4, 0.2, -500 }, { 4, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 563, 405, 22, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.015;
		lifeTimeVar = 0.5;
		size[] = { 0.03, 0.01, 0 };
		sizeVar = 0.4;
		moveVelocity[] = {"surfNormalX * inSpeed / 250 * 1.33","surfNormalY * inSpeed / 250 * 1.33","surfNormalZ * inSpeed / 250"};
		moveVelocityVar[] = { 1, 1, 1};
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.2;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		rotationVelocityVar = 0;
		randomDirectionPeriodVar = 0.09;
		randomDirectionIntensityVar = 2.3;
	};
	class real_SparksOmni: real_SparksDrop
	{
		interval = 0.008;
		color[] = { { 4, 0.5, 0.3, -500 }, { 4, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 567, 573, 288, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.05;
		lifeTimeVar = 1;
		weight = 1000;
		volume = 0.003;
		rubbing = 0.15;
		size[] = { 0.055, 0.005, 0 };
		sizeVar = 0.5;
		moveVelocity[] = {"surfNormalX * inSpeed / 200","surfNormalY * inSpeed / 200","surfNormalZ * inSpeed / 200"};
		moveVelocityVar[] = {"surfNormalX * inSpeed / 200","surfNormalY * inSpeed / 200","surfNormalZ * inSpeed / 200"};
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 1;
		rotationVelocityVar = 1;
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 2;
	};
};

class ImpactMetal
{
	class LightExp
	{
		position[] = { 0, 0, 0 };
		simulation = "light";
		type = "real_BulletExplo";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SparksBurst
	{
		simulation = "particles";
		type = "real_SparksBurst";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.4;
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 1;

	};
	class SparksOmni
	{
		simulation = "particles";
		type = "real_SparksOmni";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 10;
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 2;
		qualityLevel = 2;
		lifeTime = 1;
	};
	class SparksDrop
	{
		simulation = "particles";
		type = "real_SparksDrop";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 11;
		lifeTime = 1.5;
		qualityLevel = 2;
	};
};