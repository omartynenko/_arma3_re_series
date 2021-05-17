#define _ARMA_

class CfgPatches
{
	class real_sfx_blast_refract
	{
		name = "Real Effects Blast Refract";
		author = "Taro, amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Data_F", "A3_Data_F_ParticleEffects"};
	};
};

class CfgCloudlets
{
	class Default;
	class real_blast_wave_effect: Default
	{
		angleVar=1;
		animationName="";
		animationSpeed[]={1};
		beforeDestroyScript="";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		colorVar[]={0,0,0,0};
		color[]={{0.1,0.1,0.1,1},{0.25,0.25,0.25,1},{0.5,0.5,0.5,1},{0,0,0,1},{0,0,0,0.5},{0,0,0,0.3}};
		interval= 3 * 10;
		lifeTime=0.4;
		lifeTimeVar=0;
		MoveVelocityVar[]={0.2,0.5,0.2};
		moveVelocity[]={0,0,0};
		onTimerScript="";
		particleFSFrameCount=1;
		particleFSIndex=0;
		particleFSLoop=0;
		particleFSNtieth=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\refract";
		particleType="Billboard";
		positionVar[]={0.40000001,0.1,0.40000001};
		randomDirectionIntensity=0.2;
		randomDirectionIntensityVar=0;
		randomDirectionPeriod=0.2;
		randomDirectionPeriodVar=0;
		rotationVelocity=0;
		rotationVelocityVar=90;
		rubbing=0.1;
		sizeVar=0.5;
		Size[]={1,2,5,8,12,17};
		timerPeriod=1;
		volume=7.9000001;
		weight=10;
	};
	class real_blast_wave_effect_small: real_blast_wave_effect
	{
		lifeTime=0.6;
		Size[]={1,2,5,8,12,17};
	};
	class real_blast_wave_effect_medium: real_blast_wave_effect
	{
		lifeTime=0.6;
		Size[]={1,8,20,35,50,70};
	};
	class real_blast_wave_effect_large: real_blast_wave_effect
	{
		lifeTime=0.6;
		Size[]={1,16,40,70,100,140};
	};
	class real_blast_wave_effect_very_large: real_blast_wave_effect
	{
		lifeTime=1.0;
		Size[]={1,35,80,140,200,280};
	};
};

class IEDMineBigExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class IEDMineSmallExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class SencondaryExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class MineNondirectionalExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};


class MineNondirectionalExplosionSmall
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class ExplosionEffects
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class BasicAmmoExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class MineExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class ATMineExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class BoundingMineExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class DirectionalMineExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class DirectionalMineExplosionBig
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class HERocketExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class HEShellExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class ArtyShellExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class HelicopterExplosionEffects
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class HelicopterExplosionEffects2
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class VehicleExplosionEffectsBig
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_very_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class VehicleExplosionEffects
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class RocketExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class Demo_Charge_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class M136_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class 40mm_HE_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class GrenadeExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class 80mm_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class MortarExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class 155mm_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class ATMissileExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class AAMissileExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class ATRocketExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class BombExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_very_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class AA_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class Hellfire_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class SABOT_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class MK82_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_very_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class MLRS_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_very_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class HERoundExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_large";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class 25mm_Explode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class ExploAmmoExplosion
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class 30mmExplode
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_small";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};

class 120mm_HE
{
	class real_blast_wave_refract
	{
		simulation="particles";
		type="real_blast_wave_effect_medium";
		position[]={0,0,0};
		intensity=1;
		interval= 3 * 1;
		lifeTime=1;
	};
};