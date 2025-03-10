/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
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

#pragma once

#include "gflags/gflags.h"

DECLARE_bool(planning_test_mode);
DECLARE_double(test_duration);

DECLARE_string(planning_config_file);

// scenarios related
DECLARE_string(scenario_bare_intersection_unprotected_config_file);
DECLARE_string(scenario_lane_follow_config_file);
DECLARE_string(scenario_narrow_street_u_turn_config_file);
DECLARE_string(scenario_park_and_go_config_file);
DECLARE_string(scenario_pull_over_config_file);
DECLARE_string(scenario_stop_sign_unprotected_config_file);
DECLARE_string(scenario_traffic_light_protected_config_file);
DECLARE_string(scenario_traffic_light_unprotected_left_turn_config_file);
DECLARE_string(scenario_traffic_light_unprotected_right_turn_config_file);
DECLARE_string(scenario_traffic_light_unprotected_right_turn_config_file);
DECLARE_string(scenario_valet_parking_config_file);
DECLARE_string(scenario_yield_sign_config_file);

DECLARE_bool(enable_scenario_bare_intersection);
DECLARE_bool(enable_scenario_pull_over);
DECLARE_bool(enable_scenario_park_and_go);
DECLARE_bool(enable_scenario_stop_sign);
DECLARE_bool(enable_scenario_traffic_light);
DECLARE_bool(enable_scenario_yield_sign);
DECLARE_bool(enable_pull_over_exit);

DECLARE_bool(enable_scenario_side_pass_multiple_parked_obstacles);
DECLARE_bool(enable_force_pull_over_open_space_parking_test);

DECLARE_string(traffic_rule_config_filename);
DECLARE_string(smoother_config_filename);
DECLARE_string(reopt_smoother_config_filename);
DECLARE_int32(planning_loop_rate);
DECLARE_string(rtk_trajectory_filename);
DECLARE_uint64(rtk_trajectory_forward);
DECLARE_double(rtk_trajectory_resolution);
DECLARE_bool(enable_reference_line_stitching);
DECLARE_double(look_forward_extend_distance);
DECLARE_double(reference_line_stitch_overlap_distance);

DECLARE_bool(enable_smooth_reference_line);

DECLARE_bool(prioritize_change_lane);
DECLARE_bool(reckless_change_lane);
DECLARE_double(change_lane_fail_freeze_time);
DECLARE_double(change_lane_success_freeze_time);
DECLARE_double(change_lane_min_length);
DECLARE_bool(enable_change_lane_decider);
DECLARE_double(change_lane_speed_relax_percentage);

DECLARE_double(max_collision_distance);
DECLARE_bool(ignore_overlapped_obstacle);
DECLARE_bool(publish_estop);
DECLARE_bool(enable_trajectory_stitcher);

DECLARE_int32(max_history_frame_num);

// parameters for trajectory stitching and reinit planning starting point.
DECLARE_double(replan_lateral_distance_threshold);
DECLARE_double(replan_longitudinal_distance_threshold);

// parameter for reference line
DECLARE_bool(enable_reference_line_provider_thread);
DECLARE_double(default_reference_line_width);
DECLARE_double(smoothed_reference_line_max_diff);

// parameters for trajectory planning
DECLARE_double(planning_upper_speed_limit);
DECLARE_double(trajectory_time_length);
DECLARE_double(trajectory_time_min_interval);
DECLARE_double(trajectory_time_max_interval);
DECLARE_double(trajectory_time_high_density_period);

// parameters for trajectory sanity check
DECLARE_bool(enable_trajectory_check);
DECLARE_double(speed_lower_bound);
DECLARE_double(speed_upper_bound);

DECLARE_double(longitudinal_acceleration_lower_bound);
DECLARE_double(longitudinal_acceleration_upper_bound);

DECLARE_double(longitudinal_jerk_lower_bound);
DECLARE_double(longitudinal_jerk_upper_bound);
DECLARE_double(longitudinal_jerk_bound);
DECLARE_double(lateral_jerk_bound);

DECLARE_double(dl_bound);
DECLARE_double(kappa_bound);
DECLARE_double(dkappa_bound);

// STBoundary
DECLARE_double(st_max_s);
DECLARE_double(st_max_t);

// Decision Part
DECLARE_bool(enable_nudge_decision);
DECLARE_bool(enable_nudge_slowdown);
DECLARE_bool(enable_alwasy_stop_for_pedestrian);
DECLARE_double(static_obstacle_nudge_l_buffer);
DECLARE_double(nonstatic_obstacle_nudge_l_buffer);
DECLARE_double(lateral_ignore_buffer);
DECLARE_double(min_stop_distance_obstacle);
DECLARE_double(max_stop_distance_obstacle);
DECLARE_double(follow_min_distance);
DECLARE_double(follow_min_obs_lateral_distance);
DECLARE_double(yield_distance);
DECLARE_double(yield_distance_pedestrian_bycicle);
DECLARE_double(follow_time_buffer);
DECLARE_double(follow_min_time_sec);
DECLARE_double(stop_line_stop_distance);
DECLARE_double(max_stop_speed);
DECLARE_double(signal_light_min_pass_s_distance);
DECLARE_double(signal_expire_time_sec);
DECLARE_bool(enable_side_radar);

// Path Deciders
DECLARE_double(obstacle_lat_buffer);
DECLARE_double(obstacle_lon_start_buffer);
DECLARE_double(obstacle_lon_end_buffer);
DECLARE_double(static_obstacle_speed_threshold);
DECLARE_double(lane_borrow_max_speed);
DECLARE_int32(long_term_blocking_obstacle_cycle_threhold);

DECLARE_string(destination_obstacle_id);
DECLARE_double(destination_check_distance);

DECLARE_double(virtual_stop_wall_length);
DECLARE_double(virtual_stop_wall_height);

DECLARE_double(prediction_total_time);
DECLARE_bool(align_prediction_time);
DECLARE_bool(enable_lag_prediction);
DECLARE_int32(lag_prediction_min_appear_num);
DECLARE_double(lag_prediction_max_disappear_num);
DECLARE_int32(trajectory_point_num_for_debug);
DECLARE_double(lag_prediction_protection_distance);
DECLARE_double(perception_confidence_threshold);

DECLARE_double(turn_signal_distance);

// QpSt optimizer
DECLARE_double(slowdown_profile_deceleration);
DECLARE_bool(enable_follow_accel_constraint);

DECLARE_bool(enable_sqp_solver);

/// thread pool
DECLARE_uint64(max_planning_thread_pool_size);
DECLARE_bool(use_multi_thread_to_add_obstacles);
DECLARE_bool(enable_multi_thread_in_dp_st_graph);

DECLARE_double(numerical_epsilon);
DECLARE_double(default_cruise_speed);

DECLARE_bool(enable_auto_tuning);
DECLARE_double(trajectory_time_resolution);
DECLARE_double(trajectory_space_resolution);
DECLARE_double(lateral_acceleration_bound);
DECLARE_double(speed_lon_decision_horizon);
DECLARE_uint64(num_velocity_sample);
DECLARE_bool(enable_backup_trajectory);
DECLARE_double(backup_trajectory_cost);
DECLARE_double(min_velocity_sample_gap);
DECLARE_double(lon_collision_buffer);
DECLARE_double(lat_collision_buffer);
DECLARE_uint64(num_sample_follow_per_timestamp);

DECLARE_bool(lateral_optimization);
DECLARE_double(weight_lateral_offset);
DECLARE_double(weight_lateral_derivative);
DECLARE_double(weight_lateral_second_order_derivative);
DECLARE_double(weight_lateral_third_order_derivative);
DECLARE_double(weight_lateral_obstacle_distance);
DECLARE_double(lateral_third_order_derivative_max);
DECLARE_double(lateral_derivative_bound_default);

// Lattice Evaluate Parameters
DECLARE_double(weight_lon_objective);
DECLARE_double(weight_lon_jerk);
DECLARE_double(weight_lon_collision);
DECLARE_double(weight_lat_offset);
DECLARE_double(weight_lat_comfort);
DECLARE_double(weight_centripetal_acceleration);
DECLARE_double(cost_non_priority_reference_line);
DECLARE_double(weight_same_side_offset);
DECLARE_double(weight_opposite_side_offset);
DECLARE_double(weight_dist_travelled);
DECLARE_double(weight_target_speed);
DECLARE_double(lat_offset_bound);
DECLARE_double(lon_collision_yield_buffer);
DECLARE_double(lon_collision_overtake_buffer);
DECLARE_double(lon_collision_cost_std);
DECLARE_double(default_lon_buffer);
DECLARE_double(time_min_density);
DECLARE_double(comfort_acceleration_factor);
DECLARE_double(polynomial_minimal_param);
DECLARE_double(lattice_stop_buffer);
DECLARE_double(max_s_lateral_optimization);
DECLARE_double(default_delta_s_lateral_optimization);
DECLARE_double(bound_buffer);
DECLARE_double(nudge_buffer);

DECLARE_bool(use_planning_fallback);
DECLARE_double(fallback_total_time);
DECLARE_double(fallback_time_unit);
DECLARE_double(fallback_distance_buffer);
DECLARE_double(polynomial_speed_fallback_velocity);

DECLARE_double(speed_bump_speed_limit);

// navigation mode
DECLARE_double(navigation_fallback_cruise_time);

DECLARE_bool(enable_planning_pad_msg);

// open space planner
DECLARE_string(planner_open_space_config_filename);
DECLARE_double(open_space_planning_period);
DECLARE_double(open_space_prediction_time_horizon);
DECLARE_bool(enable_perception_obstacles);
DECLARE_bool(enable_open_space_planner_thread);
DECLARE_bool(use_dual_variable_warm_start);
DECLARE_bool(use_gear_shift_trajectory);
DECLARE_uint64(open_space_trajectory_stitching_preserved_length);
DECLARE_bool(enable_smoother_failsafe);
DECLARE_bool(use_s_curve_speed_smooth);
DECLARE_bool(use_iterative_anchoring_smoother);
DECLARE_bool(enable_parallel_trajectory_smoothing);

DECLARE_bool(use_osqp_optimizer_for_reference_line);
DECLARE_bool(enable_osqp_debug);
DECLARE_bool(export_chart);
DECLARE_bool(enable_record_debug);

DECLARE_double(default_front_clear_distance);

DECLARE_double(max_trajectory_len);
DECLARE_bool(enable_rss_fallback);
DECLARE_bool(enable_rss_info);
DECLARE_double(rss_max_front_obstacle_distance);

DECLARE_bool(enable_planning_smoother);
DECLARE_double(smoother_stop_distance);

DECLARE_double(side_pass_driving_width_l_buffer);

DECLARE_bool(enable_parallel_hybrid_a);

DECLARE_double(vehicle_low_speed_threshold);
DECLARE_double(open_space_standstill_acceleration);

DECLARE_bool(enable_cuda);

DECLARE_bool(enable_nonscenario_side_pass);
DECLARE_bool(enable_dp_reference_speed);

DECLARE_double(message_latency_threshold);
DECLARE_bool(enable_lane_change_urgency_checking);
DECLARE_double(short_path_length_threshold);

DECLARE_uint64(trajectory_stitching_preserved_length);
