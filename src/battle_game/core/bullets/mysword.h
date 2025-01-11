#pragma once
#include "battle_game/core/bullet.h"

namespace battle_game::bullet {
class Mysword : public Bullet {
 public:
  Mysword(GameCore *core,
          uint32_t id,
          uint32_t unit_id,
          uint32_t player_id,
          glm::vec2 position,
          float rotation,
          float damage_scale,
          float velocity,
          float damage_range);
  ~Mysword() override;
  void Render() override;
  void Update() override;

  float DDL_{1.08f};

 private:
  float velocity_{};
  float damage_range_{1.0f};
};
}  // namespace battle_game::bullet