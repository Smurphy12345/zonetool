// ======================= ZoneTool =======================
// zonetool, a fastfile linker for various
// Call of Duty titles. 
//
// Project: https://github.com/ZoneTool/zonetool
// Author: RektInator (https://github.com/RektInator)
// License: GNU GPL v3.0
// ========================================================
#pragma once

namespace ZoneTool
{
	namespace IW5
	{
		class IVertexShader : public IAsset
		{
		private:
			std::string name_;
			VertexShader* asset_;

		public:
			IVertexShader();
			~IVertexShader();

			static VertexShader* parse(const std::string& name, ZoneMemory* mem,
			                           bool preferLocal = false);

			void init(const std::string& name, ZoneMemory* mem) override;
			void prepare(ZoneBuffer* buf, ZoneMemory* mem) override;
			void load_depending(IZone* zone) override;

			std::string name() override;
			std::int32_t type() override;
			void write(IZone* zone, ZoneBuffer* buffer) override;

			static void dump(VertexShader* asset);
		};
	}
}
