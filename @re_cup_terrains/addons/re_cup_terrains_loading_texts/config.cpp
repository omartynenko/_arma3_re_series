#define _ARMA_

class CfgPatches
{
	class re_cup_terrains_loading_texts
	{
		name = "RE: CUP Terrains Loading Texts";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"Chernarus","CUP_Chernarus_Config","Utes","CUP_Utes_Config","Chernarus_Summer","CUP_Chernarus_Summer_Config","CUP_Chernarus_Winter","CUP_Chernarus_Winter_Config","Sara","CUP_Sara_Config","SaraLite","CUP_Saralite_Config","Sara_dbe1","CUP_Sara_dbe1_Config","Porto","CUP_Desert2_Config","Takistan","CUP_Takistan_Config","Shapur_BAF","CUP_Shapur_baf_Config","zargabad","CUP_Zargabad_Config","ProvingGrounds_PMC","CUP_Provinggrounds_pmc_Config","Desert","CUP_Desert_Config","Desert_E","CUP_Desert_e_Config","Mountains_ACR","CUP_Afghan_Config","Woodland_ACR","CUP_Bohemia_Config","Bootcamp_ACR","CUP_Bootcamp_acr_Config"};
	};
};

class CfgWorlds
{
	class CAWorld;
	class Bootcamp_ACR: CAWorld
	{
		loadingTexts[] = {"Bukovina is a historical region, variously described as in Central or Eastern Europe."};
	};
	class Woodland_ACR: CAWorld
	{
		loadingTexts[] = {"Bystrica is located in central Slovakia in a long and wide valley encircled by the mountain chains of the Low Tatras."};
	};
	class Sara: CAWorld
	{
		loadingTexts[] = {
			"Due to the cold ocean currencies and substantial elevation Sahrani landscapes vary from barren desert to pine forests.",
			"In the 19th century Sahrani served as an outpost for the British Empire's Royal Navy.",
			"The British handed over their territorial possessions to the newly-established Kingdom of Sahrani in 1898.",
			"During the Cold War separatists supported by the Soviet Union founded the Democratic Republic of Sahrani, establishing authority over the Northern Sahrani."
		};
	};
	class Saralite: CAWorld
	{
		loadingTexts[] = {
			"In the 19th century Sahrani served as an outpost for the British Empire's Royal Navy.",
			"The British handed over their territorial possessions to the newly-established Kingdom of Sahrani in 1898."
		};
	};
	class Sara_dbe1: CAWorld
	{
		loadingTexts[] = {
			"Due to the cold ocean currencies and substantial elevation Sahrani landscapes vary from barren desert to pine forests.",
			"In the 19th century Sahrani served as an outpost for the British Empire's Royal Navy.",
			"The British handed over their territorial possessions to the newly-established Kingdom of Sahrani in 1898.",
			"During the Cold War separatists supported by the Soviet Union founded the Democratic Republic of Sahrani, establishing authority over the Northern Sahrani."
		};
	};
	class Intro: CAWorld
	{
		loadingTexts[] = {"Rahmadi is a small inhabited island to the South-West from Sahrani."};
	};
	class Porto: CAWorld
	{
		loadingTexts[] = {
			"Porto is an off-shore territory of the Kingdom of Sahrani located further to the South.",
			"In the past, Porto was an important harbour with a strong minority of Arabian merchants, but its modern history just smells of dead fish, smuggled booze and boredom."
		};
	};
	class Desert_E: CAWorld
	{
		loadingTexts[] = {"A piece of relatively plain desert with the oilrig and connecting pipeline."};
	};
	class Takistan: CAWorld
	{
		loadingTexts[] = {
			"Central Takistan is a mountainous and undeveloped Middle Eastern country.",
			"Most of the settlements in Takistan are concentrated in the irrigated 'green zones' in the valleys.",
			"After decline of Mongolian empire in 16th century Takistan for next 300 years was divided into multiple provinces controlled by neighboring kingdoms.",
			"For a long time Socialist backed by Russia and Royalist backed by the USA have been fighting for supremacy in Takistan."
		};
	};
	class Mountains_ACR: CAWorld
	{
		loadingTexts[] = {
			"Central Takistan is a mountainous and undeveloped Middle Eastern country.",
			"Most of the settlements in Takistan are concentrated in the irrigated 'green zones' in the valleys.",
			"After decline of Mongolian empire in 16th century Takistan for next 300 years was divided into multiple provinces controlled by neighboring kingdoms.",
			"For a long time Socialist backed by Russia and Royalist backed by the USA have been fighting for supremacy in Takistan."
		};
	};
	class Zargabad: CAWorld
	{
		loadingTexts[] = {
			"The city of Zagarbad is located at the heart of Takistan.",
			"Zagarbad is located in the center of large north-south running valley surrounded by the mountains.",
			"Zagarbad city center is filled with large urban buildings, markets and offices, while the suburb quarters comprise of the simple adobe houses and farmsteads."
		};
	};
	class Shapur_BAF: CAWorld
	{
		loadingTexts[] = {
			"Shapur features a strategically important industrial complex with a small airfield.",
			"Shapur is located in a living desert near the disputed border with Takistan."
		};
	};
	class ProvingGrounds_PMC: CAWorld
	{
		loadingTexts[] = {
			"The Proving Grounds are situated in the far Western province of Takistan.",
			"Stretching out towards Ardistan, this more temperate region of Takistan with denser vegetation is radically different from the dry desert to the east and south."
		};
	};
	class Chernarus: CAWorld
	{
		loadingTexts[] = {
			"Chernarus is a post-Soviet land in Eastern Europe with the biggest cities and industry concentrated on the sea coast.",
			"The Southern part of Chernarus is a hilly area with rocky coastlines covered by temperate forests.",
			"Inland Chernarus consists of smaller villages situated in deep valleys, hidden in forested ridges or on elevated plateaus with lush meadows.",
			"In 2009 ultra-nationalist insurgents launched a full-scale attack against the government declaring Chernarussian People's Republic."
		};
	};
	class utes: CAWorld
	{
		loadingTexts[] = {"The tides of Utes may vary depending on the date."};
	};
	class Chernarus_Summer: CAWorld
	{
		loadingTexts[] = {
			"Chernarus is a post-Soviet land in Eastern Europe with the biggest cities and industry concentrated on the sea coast.",
			"The Southern part of Chernarus is a hilly area with rocky coastlines covered by temperate forests.",
			"Inland Chernarus consists of smaller villages situated in deep valleys, hidden in forested ridges or on elevated plateaus with lush meadows.",
			"In 2009 ultra-nationalist insurgents launched a full-scale attack against the government declaring Chernarussian People's Republic."
		};
	};
	class Chernarus_Winter: CAWorld
	{
		loadingTexts[] = {
			"Chernarus is a post-Soviet land in Eastern Europe with the biggest cities and industry concentrated on the sea coast.",
			"The Southern part of Chernarus is a hilly area with rocky coastlines covered by temperate forests.",
			"Inland Chernarus consists of smaller villages situated in deep valleys, hidden in forested ridges or on elevated plateaus with lush meadows.",
			"In 2009 ultra-nationalist insurgents launched a full-scale attack against the government declaring Chernarussian People's Republic."
		};
	};
};