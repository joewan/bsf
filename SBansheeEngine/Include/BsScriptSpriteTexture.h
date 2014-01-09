#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"

namespace BansheeEngine
{
	class BS_SCR_BE_EXPORT ScriptSpriteTexture : public ScriptObject<ScriptSpriteTexture>
	{
	public:
		static void initMetaData();

		const HSpriteTexture& getInternalValue() const { return mTexture; }

	private:
		static void internal_createInstance(MonoObject* instance);
		static void internal_destroyInstance(ScriptSpriteTexture* nativeInstance);

		static void initRuntimeData();

		ScriptSpriteTexture(const HSpriteTexture& texture);

		HSpriteTexture mTexture;
	};
}