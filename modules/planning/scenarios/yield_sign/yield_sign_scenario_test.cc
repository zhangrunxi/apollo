/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 **/

#define protected public
#define private public
#include "modules/planning/scenarios/yield_sign/yield_sign_scenario.h"

#include "gtest/gtest.h"

#include "cyber/common/file.h"
#include "cyber/common/log.h"
#include "modules/planning/common/planning_gflags.h"

namespace apollo {
namespace planning {
namespace scenario {
namespace stop_sign {

class YieldSignScenarioTest : public ::testing::Test {
 public:
  virtual void SetUp() {}

 protected:
  std::unique_ptr<YieldSignScenario> scenario_;
};

TEST_F(YieldSignScenarioTest, VerifyConf) {
  FLAGS_scenario_yield_sign_config_file =
      "/apollo/modules/planning/conf/"
      "scenario/yield_sign_config.pb.txt";

  ScenarioConfig config;
  EXPECT_TRUE(apollo::cyber::common::GetProtoFromFile(
      FLAGS_scenario_yield_sign_config_file, &config));
}

TEST_F(YieldSignScenarioTest, Init) {
  FLAGS_scenario_yield_sign_config_file =
      "/apollo/modules/planning/testdata/conf/"
      "scenario/yield_sign_config.pb.txt";

  ScenarioConfig config;
  EXPECT_TRUE(apollo::cyber::common::GetProtoFromFile(
      FLAGS_scenario_yield_sign_config_file, &config));

  ScenarioContext context;
  scenario_.reset(new YieldSignScenario(config, &context));
  EXPECT_EQ(scenario_->scenario_type(), ScenarioConfig::YIELD_SIGN);
}

}  // namespace stop_sign
}  // namespace scenario
}  // namespace planning
}  // namespace apollo
