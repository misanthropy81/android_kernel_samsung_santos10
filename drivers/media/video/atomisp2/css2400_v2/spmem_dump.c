#ifndef _sp_map_h_
#define _sp_map_h_


#ifndef _hrt_dummy_use_blob_sp
#define _hrt_dummy_use_blob_sp()
#endif

#define _hrt_cell_load_program_sp(proc) _hrt_cell_load_program_embedded(proc, sp)

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_vectors_per_input_line
#define HIVE_MEM_isp_vectors_per_input_line scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_vectors_per_input_line 0x2A2C
#define HIVE_SIZE_isp_vectors_per_input_line 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_vectors_per_input_line scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_vectors_per_input_line 0x2A2C
#define HIVE_SIZE_sp_isp_vectors_per_input_line 4

/* function sp_tagger_propagate_frame: 3E79 */

/* function input_system_acquisition_stop: 29E9 */

/* function longjmp: 48E7 */

/* function ia_css_sp_backend_push: 43C8 */

/* function sp_tagger_tag_exp_id: 3DDD */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_HIVE_IF_SRST_MASK
#define HIVE_MEM_HIVE_IF_SRST_MASK scalar_processor_2400A0_dmem
#define HIVE_ADDR_HIVE_IF_SRST_MASK 0x310
#define HIVE_SIZE_HIVE_IF_SRST_MASK 16
#else
#endif
#endif
#define HIVE_MEM_sp_HIVE_IF_SRST_MASK scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_HIVE_IF_SRST_MASK 0x310
#define HIVE_SIZE_sp_HIVE_IF_SRST_MASK 16

/* function sp_dma_proxy_read: 30FC */

/* function ia_css_sp_backend_release: 448F */

/* function sp_dma_proxy_is_idle: 3257 */

/* function debug_buffer_set_ddr_addr: 68 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_vbuf_mipi
#define HIVE_MEM_vbuf_mipi scalar_processor_2400A0_dmem
#define HIVE_ADDR_vbuf_mipi 0xD4
#define HIVE_SIZE_vbuf_mipi 4
#else
#endif
#endif
#define HIVE_MEM_sp_vbuf_mipi scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_vbuf_mipi 0xD4
#define HIVE_SIZE_sp_vbuf_mipi 4

/* function setjmp: 48F0 */

/* function decode_sw_event: 5F2 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_map
#define HIVE_MEM_map scalar_processor_2400A0_dmem
#define HIVE_ADDR_map 0x3C20
#define HIVE_SIZE_map 64
#else
#endif
#endif
#define HIVE_MEM_sp_map scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_map 0x3C20
#define HIVE_SIZE_sp_map 64

/* function initialize_sp_stage: 2BA2 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_stage
#define HIVE_MEM_isp_stage scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_stage 0x3904
#define HIVE_SIZE_isp_stage 544
#else
#endif
#endif
#define HIVE_MEM_sp_isp_stage scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_stage 0x3904
#define HIVE_SIZE_sp_isp_stage 544

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_vbuf_raw
#define HIVE_MEM_vbuf_raw scalar_processor_2400A0_dmem
#define HIVE_ADDR_vbuf_raw 0xD0
#define HIVE_SIZE_vbuf_raw 4
#else
#endif
#endif
#define HIVE_MEM_sp_vbuf_raw scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_vbuf_raw 0xD0
#define HIVE_SIZE_sp_vbuf_raw 4

/* function release_in_param: 3BF5 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_dma_proxy_status
#define HIVE_MEM_dma_proxy_status scalar_processor_2400A0_dmem
#define HIVE_ADDR_dma_proxy_status 0x1B4
#define HIVE_SIZE_dma_proxy_status 4
#else
#endif
#endif
#define HIVE_MEM_sp_dma_proxy_status scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_proxy_status 0x1B4
#define HIVE_SIZE_sp_dma_proxy_status 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_do_mmu_invalidation
#define HIVE_MEM_do_mmu_invalidation scalar_processor_2400A0_dmem
#define HIVE_ADDR_do_mmu_invalidation 0x2DE8
#define HIVE_SIZE_do_mmu_invalidation 4
#else
#endif
#endif
#define HIVE_MEM_sp_do_mmu_invalidation scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_do_mmu_invalidation 0x2DE8
#define HIVE_SIZE_sp_do_mmu_invalidation 4

/* function sp_start_isp: 23EF */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_binary_group
#define HIVE_MEM_sp_binary_group scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_binary_group 0x2764
#define HIVE_SIZE_sp_binary_group 72
#else
#endif
#endif
#define HIVE_MEM_sp_sp_binary_group scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_binary_group 0x2764
#define HIVE_SIZE_sp_sp_binary_group 72

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_sw_state
#define HIVE_MEM_sp_sw_state scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sw_state 0x2A30
#define HIVE_SIZE_sp_sw_state 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_sw_state scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_sw_state 0x2A30
#define HIVE_SIZE_sp_sp_sw_state 4

/* function sp_circular_buf_destroy: 38E9 */

/* function sp_circular_buf_pop: 38B4 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_stop_copy_preview
#define HIVE_MEM_sp_stop_copy_preview scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_stop_copy_preview 0x2DC4
#define HIVE_SIZE_sp_stop_copy_preview 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_stop_copy_preview scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_stop_copy_preview 0x2DC4
#define HIVE_SIZE_sp_sp_stop_copy_preview 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_elems_params_capture_pipe
#define HIVE_MEM_cb_elems_params_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_elems_params_capture_pipe 0x3784
#define HIVE_SIZE_cb_elems_params_capture_pipe 16
#else
#endif
#endif
#define HIVE_MEM_sp_cb_elems_params_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_elems_params_capture_pipe 0x3784
#define HIVE_SIZE_sp_cb_elems_params_capture_pipe 16

/* function sh_css_stride_from_info: 1163 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_mipi_frame_sem
#define HIVE_MEM_mipi_frame_sem scalar_processor_2400A0_dmem
#define HIVE_ADDR_mipi_frame_sem 0x2688
#define HIVE_SIZE_mipi_frame_sem 20
#else
#endif
#endif
#define HIVE_MEM_sp_mipi_frame_sem scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_mipi_frame_sem 0x2688
#define HIVE_SIZE_sp_mipi_frame_sem 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_thread_ready_queue
#define HIVE_MEM_sp_thread_ready_queue scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_thread_ready_queue 0x23C
#define HIVE_SIZE_sp_thread_ready_queue 12
#else
#endif
#endif
#define HIVE_MEM_sp_sp_thread_ready_queue scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_thread_ready_queue 0x23C
#define HIVE_SIZE_sp_sp_thread_ready_queue 12

/* function sp_debug_mode_update_command: 42FF */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_event_is_pending_mask
#define HIVE_MEM_event_is_pending_mask scalar_processor_2400A0_dmem
#define HIVE_ADDR_event_is_pending_mask 0x58
#define HIVE_SIZE_event_is_pending_mask 44
#else
#endif
#endif
#define HIVE_MEM_sp_event_is_pending_mask scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_event_is_pending_mask 0x58
#define HIVE_SIZE_sp_event_is_pending_mask 44

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_host_sp_com
#define HIVE_MEM_host_sp_com scalar_processor_2400A0_dmem
#define HIVE_ADDR_host_sp_com 0x2A34
#define HIVE_SIZE_host_sp_com 84
#else
#endif
#endif
#define HIVE_MEM_sp_host_sp_com scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_host_sp_com 0x2A34
#define HIVE_SIZE_sp_host_sp_com 84

/* function exec_image_pipe: 259E */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_init_dmem_data
#define HIVE_MEM_sp_init_dmem_data scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_init_dmem_data 0x2A88
#define HIVE_SIZE_sp_init_dmem_data 24
#else
#endif
#endif
#define HIVE_MEM_sp_sp_init_dmem_data scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_init_dmem_data 0x2A88
#define HIVE_SIZE_sp_sp_init_dmem_data 24

/* function stop_threads: 2597 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_flash_in_use
#define HIVE_MEM_sp_flash_in_use scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_flash_in_use 0x1224
#define HIVE_SIZE_sp_flash_in_use 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_flash_in_use scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_flash_in_use 0x1224
#define HIVE_SIZE_sp_sp_flash_in_use 4

/* function ia_css_sp_backend_rcv_acquire_ack: 438B */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_flashed_frame_cnt
#define HIVE_MEM_flashed_frame_cnt scalar_processor_2400A0_dmem
#define HIVE_ADDR_flashed_frame_cnt 0x122C
#define HIVE_SIZE_flashed_frame_cnt 4
#else
#endif
#endif
#define HIVE_MEM_sp_flashed_frame_cnt scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_flashed_frame_cnt 0x122C
#define HIVE_SIZE_sp_flashed_frame_cnt 4

/* function is_isp_debug_buffer_full: 2B1 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_stack_sizes
#define HIVE_MEM_stack_sizes scalar_processor_2400A0_dmem
#define HIVE_ADDR_stack_sizes 0x26C
#define HIVE_SIZE_stack_sizes 20
#else
#endif
#endif
#define HIVE_MEM_sp_stack_sizes scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_stack_sizes 0x26C
#define HIVE_SIZE_sp_stack_sizes 20

/* function ia_css_sp_backend_destroy: 44B9 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ph
#define HIVE_MEM_ph scalar_processor_2400A0_dmem
#define HIVE_ADDR_ph 0x2614
#define HIVE_SIZE_ph 28
#else
#endif
#endif
#define HIVE_MEM_sp_ph scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ph 0x2614
#define HIVE_SIZE_sp_ph 28

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_writing_cb_params_preview_pipe
#define HIVE_MEM_sem_for_writing_cb_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_writing_cb_params_preview_pipe 0x3794
#define HIVE_SIZE_sem_for_writing_cb_params_preview_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_writing_cb_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_writing_cb_params_preview_pipe 0x3794
#define HIVE_SIZE_sp_sem_for_writing_cb_params_preview_pipe 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_per_frame_data
#define HIVE_MEM_sp_per_frame_data scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_per_frame_data 0x2AA0
#define HIVE_SIZE_sp_per_frame_data 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_per_frame_data scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_per_frame_data 0x2AA0
#define HIVE_SIZE_sp_sp_per_frame_data 4

/* function dma_proxy_channel_acquire: 4F86 */

/* function sp_tagger_connect_pipes: 40E2 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_copy_pipe_thread
#define HIVE_MEM_sp_copy_pipe_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_copy_pipe_thread 0x2E00
#define HIVE_SIZE_sp_copy_pipe_thread 64
#else
#endif
#endif
#define HIVE_MEM_sp_sp_copy_pipe_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_copy_pipe_thread 0x2E00
#define HIVE_SIZE_sp_sp_copy_pipe_thread 64

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_xmem_bin_addr
#define HIVE_MEM_xmem_bin_addr scalar_processor_2400A0_dmem
#define HIVE_ADDR_xmem_bin_addr 0x2AA4
#define HIVE_SIZE_xmem_bin_addr 4
#else
#endif
#endif
#define HIVE_MEM_sp_xmem_bin_addr scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_xmem_bin_addr 0x2AA4
#define HIVE_SIZE_sp_xmem_bin_addr 4

/* function memcpy: 497A */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_pipe_threads
#define HIVE_MEM_pipe_threads scalar_processor_2400A0_dmem
#define HIVE_ADDR_pipe_threads 0x248
#define HIVE_SIZE_pipe_threads 16
#else
#endif
#endif
#define HIVE_MEM_sp_pipe_threads scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_threads 0x248
#define HIVE_SIZE_sp_pipe_threads 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_GP_DEVICE_BASE
#define HIVE_MEM_GP_DEVICE_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_GP_DEVICE_BASE 0x338
#define HIVE_SIZE_GP_DEVICE_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_GP_DEVICE_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_GP_DEVICE_BASE 0x338
#define HIVE_SIZE_sp_GP_DEVICE_BASE 4

/* function sp_dma_proxy_set_width_ab: 304C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ia_css_i_exp_id
#define HIVE_MEM_ia_css_i_exp_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_ia_css_i_exp_id 0x344
#define HIVE_SIZE_ia_css_i_exp_id 1
#else
#endif
#endif
#define HIVE_MEM_sp_ia_css_i_exp_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ia_css_i_exp_id 0x344
#define HIVE_SIZE_sp_ia_css_i_exp_id 1

/* function __divu: 48F8 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_cont_capt_stop
#define HIVE_MEM_sem_for_cont_capt_stop scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_cont_capt_stop 0x37A8
#define HIVE_SIZE_sem_for_cont_capt_stop 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_cont_capt_stop scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_cont_capt_stop 0x37A8
#define HIVE_SIZE_sp_sem_for_cont_capt_stop 20

/* function sp_dma_proxy_func: 4A1F */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_isp_started
#define HIVE_MEM_sp_isp_started scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_started 0x2AA8
#define HIVE_SIZE_sp_isp_started 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_isp_started scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_isp_started 0x2AA8
#define HIVE_SIZE_sp_sp_isp_started 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_isp_pipe_thread
#define HIVE_MEM_sp_isp_pipe_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_pipe_thread 0x2E40
#define HIVE_SIZE_sp_isp_pipe_thread 192
#else
#endif
#endif
#define HIVE_MEM_sp_sp_isp_pipe_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_isp_pipe_thread 0x2E40
#define HIVE_SIZE_sp_sp_isp_pipe_thread 192

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_obarea_start_bq
#define HIVE_MEM_sp_obarea_start_bq scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_obarea_start_bq 0x2AAC
#define HIVE_SIZE_sp_obarea_start_bq 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_obarea_start_bq scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_obarea_start_bq 0x2AAC
#define HIVE_SIZE_sp_sp_obarea_start_bq 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_IRQ_BASE
#define HIVE_MEM_IRQ_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_IRQ_BASE 0x28
#define HIVE_SIZE_IRQ_BASE 16
#else
#endif
#endif
#define HIVE_MEM_sp_IRQ_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_IRQ_BASE 0x28
#define HIVE_SIZE_sp_IRQ_BASE 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_TIMED_CTRL_BASE
#define HIVE_MEM_TIMED_CTRL_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_TIMED_CTRL_BASE 0x3C
#define HIVE_SIZE_TIMED_CTRL_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_TIMED_CTRL_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_TIMED_CTRL_BASE 0x3C
#define HIVE_SIZE_sp_TIMED_CTRL_BASE 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_is_isp_requested
#define HIVE_MEM_is_isp_requested scalar_processor_2400A0_dmem
#define HIVE_ADDR_is_isp_requested 0x11FC
#define HIVE_SIZE_is_isp_requested 4
#else
#endif
#endif
#define HIVE_MEM_sp_is_isp_requested scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_is_isp_requested 0x11FC
#define HIVE_SIZE_sp_is_isp_requested 4

/* function ia_css_i_sp_rmgr_init: 357 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_current_sp_thread
#define HIVE_MEM_current_sp_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_current_sp_thread 0x238
#define HIVE_SIZE_current_sp_thread 4
#else
#endif
#endif
#define HIVE_MEM_sp_current_sp_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_current_sp_thread 0x238
#define HIVE_SIZE_sp_current_sp_thread 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_h_pipe_private_ddr_ptrs
#define HIVE_MEM_h_pipe_private_ddr_ptrs scalar_processor_2400A0_dmem
#define HIVE_ADDR_h_pipe_private_ddr_ptrs 0x2FA0
#define HIVE_SIZE_h_pipe_private_ddr_ptrs 16
#else
#endif
#endif
#define HIVE_MEM_sp_h_pipe_private_ddr_ptrs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_h_pipe_private_ddr_ptrs 0x2FA0
#define HIVE_SIZE_sp_h_pipe_private_ddr_ptrs 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_capture_thread_id
#define HIVE_MEM_sp_capture_thread_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_capture_thread_id 0x508
#define HIVE_SIZE_sp_capture_thread_id 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_capture_thread_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_capture_thread_id 0x508
#define HIVE_SIZE_sp_sp_capture_thread_id 4

/* function ia_css_sp_input_system_token_map_is_full: 47BD */

/* function sp_turn_off_flash: 33FE */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_internal_event
#define HIVE_MEM_sp_internal_event scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_internal_event 0x376C
#define HIVE_SIZE_sp_internal_event 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_internal_event scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_internal_event 0x376C
#define HIVE_SIZE_sp_sp_internal_event 4

/* function _sp_dma_proxy_init_isp_vector: 3060 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_sh_dma_cmd_buffer
#define HIVE_MEM_isp_sh_dma_cmd_buffer scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_sh_dma_cmd_buffer 0x2DEC
#define HIVE_SIZE_isp_sh_dma_cmd_buffer 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_sh_dma_cmd_buffer scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_sh_dma_cmd_buffer 0x2DEC
#define HIVE_SIZE_sp_isp_sh_dma_cmd_buffer 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_cont_capt_start
#define HIVE_MEM_sem_for_cont_capt_start scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_cont_capt_start 0x37BC
#define HIVE_SIZE_sem_for_cont_capt_start 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_cont_capt_start scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_cont_capt_start 0x37BC
#define HIVE_SIZE_sp_sem_for_cont_capt_start 20

/* function host2sp_event_queue_is_empty: 49BD */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_pipe_start_semaphore
#define HIVE_MEM_sp_pipe_start_semaphore scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_start_semaphore 0x2F00
#define HIVE_SIZE_sp_pipe_start_semaphore 80
#else
#endif
#endif
#define HIVE_MEM_sp_sp_pipe_start_semaphore scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_pipe_start_semaphore 0x2F00
#define HIVE_SIZE_sp_sp_pipe_start_semaphore 80

/* function debug_buffer_init_isp: 6F */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_preview_thread_id
#define HIVE_MEM_sp_preview_thread_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_preview_thread_id 0x504
#define HIVE_SIZE_sp_preview_thread_id 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_preview_thread_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_preview_thread_id 0x504
#define HIVE_SIZE_sp_sp_preview_thread_id 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_reading_cb_frames_capture_pipe
#define HIVE_MEM_sem_for_reading_cb_frames_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_reading_cb_frames_capture_pipe 0x37D0
#define HIVE_SIZE_sem_for_reading_cb_frames_capture_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_reading_cb_frames_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_reading_cb_frames_capture_pipe 0x37D0
#define HIVE_SIZE_sp_sem_for_reading_cb_frames_capture_pipe 20

/* function sp_event_proxy_func: 326C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_fibers
#define HIVE_MEM_fibers scalar_processor_2400A0_dmem
#define HIVE_ADDR_fibers 0x280
#define HIVE_SIZE_fibers 20
#else
#endif
#endif
#define HIVE_MEM_sp_fibers scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_fibers 0x280
#define HIVE_SIZE_sp_fibers 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_params_preview_pipe
#define HIVE_MEM_cb_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_params_preview_pipe 0x37E4
#define HIVE_SIZE_cb_params_preview_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_cb_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_params_preview_pipe 0x37E4
#define HIVE_SIZE_sp_cb_params_preview_pipe 20

/* function sp_semaphore_init: 5200 */

/* function initialize_sp_group: 2B80 */

/* function start_binary: 1209 */

/* function sp_tagger_configure: 3E2A */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_invalidate_tlb
#define HIVE_MEM_sp_invalidate_tlb scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_invalidate_tlb 0x2DF0
#define HIVE_SIZE_sp_invalidate_tlb 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_invalidate_tlb scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_invalidate_tlb 0x2DF0
#define HIVE_SIZE_sp_sp_invalidate_tlb 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ISP_DMEM_BASE
#define HIVE_MEM_ISP_DMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_ISP_DMEM_BASE 0x10
#define HIVE_SIZE_ISP_DMEM_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_ISP_DMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ISP_DMEM_BASE 0x10
#define HIVE_SIZE_sp_ISP_DMEM_BASE 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_SP_DMEM_BASE
#define HIVE_MEM_SP_DMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_SP_DMEM_BASE 0x4
#define HIVE_SIZE_SP_DMEM_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_SP_DMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_SP_DMEM_BASE 0x4
#define HIVE_SIZE_sp_SP_DMEM_BASE 4

/* function ia_css_sp_frontend_stop: 45C5 */

/* function bin_spec_init_ifs: 6CD */

/* function dma_proxy_channel_release: 4F72 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ia_css_sp_frontend_states
#define HIVE_MEM_ia_css_sp_frontend_states scalar_processor_2400A0_dmem
#define HIVE_ADDR_ia_css_sp_frontend_states 0x3BD8
#define HIVE_SIZE_ia_css_sp_frontend_states 12
#else
#endif
#endif
#define HIVE_MEM_sp_ia_css_sp_frontend_states scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ia_css_sp_frontend_states 0x3BD8
#define HIVE_SIZE_sp_ia_css_sp_frontend_states 12

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_writing_cb_frames_preview_pipe
#define HIVE_MEM_sem_for_writing_cb_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_writing_cb_frames_preview_pipe 0x37F8
#define HIVE_SIZE_sem_for_writing_cb_frames_preview_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_writing_cb_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_writing_cb_frames_preview_pipe 0x37F8
#define HIVE_SIZE_sp_sem_for_writing_cb_frames_preview_pipe 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_event_can_send_token_mask
#define HIVE_MEM_event_can_send_token_mask scalar_processor_2400A0_dmem
#define HIVE_ADDR_event_can_send_token_mask 0x84
#define HIVE_SIZE_event_can_send_token_mask 44
#else
#endif
#endif
#define HIVE_MEM_sp_event_can_send_token_mask scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_event_can_send_token_mask 0x84
#define HIVE_SIZE_sp_event_can_send_token_mask 44

/* function sp_dma_proxy_wait_for_ack: 4D89 */

/* function sp_thread_yield: 50BF */

/* function sp_circular_buf_peek: 3683 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_thread
#define HIVE_MEM_isp_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_thread 0x3B24
#define HIVE_SIZE_isp_thread 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_thread 0x3B24
#define HIVE_SIZE_sp_isp_thread 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_obarea_length_bq
#define HIVE_MEM_sp_obarea_length_bq scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_obarea_length_bq 0x2AB0
#define HIVE_SIZE_sp_obarea_length_bq 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_obarea_length_bq scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_obarea_length_bq 0x2AB0
#define HIVE_SIZE_sp_sp_obarea_length_bq 4

/* function is_ddr_debug_buffer_full: 24B */

/* function sp_uds_init: 8C0 */

/* function sp_dma_proxy_isp_write_addr: 30A3 */

/* function sp_circular_buf_create: 38F5 */

/* function debug_enqueue_ddr: 79 */

/* function host2sp_dequeue_buffer: 334 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_buf_swap
#define HIVE_MEM_buf_swap scalar_processor_2400A0_dmem
#define HIVE_ADDR_buf_swap 0x498
#define HIVE_SIZE_buf_swap 96
#else
#endif
#endif
#define HIVE_MEM_sp_buf_swap scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_buf_swap 0x498
#define HIVE_SIZE_sp_buf_swap 96

/* function is_dynamic_buffer: 3B0F */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_curr_nr_of_copied_frames
#define HIVE_MEM_curr_nr_of_copied_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_curr_nr_of_copied_frames 0x2DC8
#define HIVE_SIZE_curr_nr_of_copied_frames 4
#else
#endif
#endif
#define HIVE_MEM_sp_curr_nr_of_copied_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_curr_nr_of_copied_frames 0x2DC8
#define HIVE_SIZE_sp_curr_nr_of_copied_frames 4

/* function sp2host_enqueue_buffer: 315 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_dma_crop_block_width_b
#define HIVE_MEM_sp_dma_crop_block_width_b scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_crop_block_width_b 0x26EC
#define HIVE_SIZE_sp_dma_crop_block_width_b 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_dma_crop_block_width_b scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_dma_crop_block_width_b 0x26EC
#define HIVE_SIZE_sp_sp_dma_crop_block_width_b 4

/* function sp_event_proxy_init: 3291 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_elems_params_preview_pipe
#define HIVE_MEM_cb_elems_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_elems_params_preview_pipe 0x380C
#define HIVE_SIZE_cb_elems_params_preview_pipe 16
#else
#endif
#endif
#define HIVE_MEM_sp_cb_elems_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_elems_params_preview_pipe 0x380C
#define HIVE_SIZE_sp_cb_elems_params_preview_pipe 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_output
#define HIVE_MEM_sp_output scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_output 0x2AB4
#define HIVE_SIZE_sp_output 16
#else
#endif
#endif
#define HIVE_MEM_sp_sp_output scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_output 0x2AB4
#define HIVE_SIZE_sp_sp_output 16

/* function init_buffer_queues: 3DCA */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ISP_CTRL_BASE
#define HIVE_MEM_ISP_CTRL_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_ISP_CTRL_BASE 0x8
#define HIVE_SIZE_ISP_CTRL_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_ISP_CTRL_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ISP_CTRL_BASE 0x8
#define HIVE_SIZE_sp_ISP_CTRL_BASE 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_INPUT_FORMATTER_BASE
#define HIVE_MEM_INPUT_FORMATTER_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_INPUT_FORMATTER_BASE 0x48
#define HIVE_SIZE_INPUT_FORMATTER_BASE 16
#else
#endif
#endif
#define HIVE_MEM_sp_INPUT_FORMATTER_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_INPUT_FORMATTER_BASE 0x48
#define HIVE_SIZE_sp_INPUT_FORMATTER_BASE 16

/* function sp_raw_copy_func: 2BE5 */

/* function __sp_dma_proxy_configure_channel_text: 314D */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_sp2host_event_queue
#define HIVE_MEM_sem_for_sp2host_event_queue scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_sp2host_event_queue 0x3770
#define HIVE_SIZE_sem_for_sp2host_event_queue 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_sp2host_event_queue scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_sp2host_event_queue 0x3770
#define HIVE_SIZE_sp_sem_for_sp2host_event_queue 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_tagger
#define HIVE_MEM_tagger scalar_processor_2400A0_dmem
#define HIVE_ADDR_tagger 0x2DCC
#define HIVE_SIZE_tagger 20
#else
#endif
#endif
#define HIVE_MEM_sp_tagger scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_tagger 0x2DCC
#define HIVE_SIZE_sp_tagger 20

/* function host2sp_dequeue_sp_event: 2F2 */

/* function sp_start_isp_entry: 23E5 */
#ifndef HIVE_MULTIPLE_PROGRAMS
#ifdef HIVE_ADDR_sp_start_isp_entry
#endif
#define HIVE_ADDR_sp_start_isp_entry 0x23E5
#endif
#define HIVE_ADDR_sp_sp_start_isp_entry 0x23E5

/* function __sp_raw_copy_func_critical: 49C7 */

/* function add_sp_command: 4F56 */

/* function sp2host_enqueue_irq_event: 2D5 */

/* function create_sp_fibers: 3366 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_pipe_private_s3a_bufs
#define HIVE_MEM_pipe_private_s3a_bufs scalar_processor_2400A0_dmem
#define HIVE_ADDR_pipe_private_s3a_bufs 0x2FB0
#define HIVE_SIZE_pipe_private_s3a_bufs 48
#else
#endif
#endif
#define HIVE_MEM_sp_pipe_private_s3a_bufs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_private_s3a_bufs 0x2FB0
#define HIVE_SIZE_sp_pipe_private_s3a_bufs 48

/* function sp_debug_mode_init: 4309 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_dma_crop_block_width_a
#define HIVE_MEM_sp_dma_crop_block_width_a scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_crop_block_width_a 0x26F0
#define HIVE_SIZE_sp_dma_crop_block_width_a 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_dma_crop_block_width_a scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_dma_crop_block_width_a 0x26F0
#define HIVE_SIZE_sp_sp_dma_crop_block_width_a 4

/* function sp_bin_copy_func: 61C */

/* function ia_css_i_sp_rmgr_acq_gen: 3B1 */

/* function sp_turn_on_flash: 3412 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sems_for_sp2host_buf_queues
#define HIVE_MEM_sems_for_sp2host_buf_queues scalar_processor_2400A0_dmem
#define HIVE_ADDR_sems_for_sp2host_buf_queues 0x2FE0
#define HIVE_SIZE_sems_for_sp2host_buf_queues 140
#else
#endif
#endif
#define HIVE_MEM_sp_sems_for_sp2host_buf_queues scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sems_for_sp2host_buf_queues 0x2FE0
#define HIVE_SIZE_sp_sems_for_sp2host_buf_queues 140

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_vectors_per_line
#define HIVE_MEM_isp_vectors_per_line scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_vectors_per_line 0x2AC4
#define HIVE_SIZE_isp_vectors_per_line 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_vectors_per_line scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_vectors_per_line 0x2AC4
#define HIVE_SIZE_sp_isp_vectors_per_line 4

/* function __sp_dma_proxy_func_text: 2FC6 */

/* function sp_thread_join: 351D */

/* function sp_dma_proxy_configure_channel: 4DB6 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_do_irq_raise
#define HIVE_MEM_do_irq_raise scalar_processor_2400A0_dmem
#define HIVE_ADDR_do_irq_raise 0xD30
#define HIVE_SIZE_do_irq_raise 4
#else
#endif
#endif
#define HIVE_MEM_sp_do_irq_raise scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_do_irq_raise 0xD30
#define HIVE_SIZE_sp_do_irq_raise 4

/* function ia_css_sp_backend_flush: 4417 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_group
#define HIVE_MEM_sp_group scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_group 0x2AC8
#define HIVE_SIZE_sp_group 724
#else
#endif
#endif
#define HIVE_MEM_sp_sp_group scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_group 0x2AC8
#define HIVE_SIZE_sp_sp_group 724

/* function sp2host_buffer_queue_get_size: 309 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_event_proxy_thread
#define HIVE_MEM_sp_event_proxy_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_event_proxy_thread 0x2F50
#define HIVE_SIZE_sp_event_proxy_thread 64
#else
#endif
#endif
#define HIVE_MEM_sp_sp_event_proxy_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_event_proxy_thread 0x2F50
#define HIVE_SIZE_sp_sp_event_proxy_thread 64

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_dma_pool
#define HIVE_MEM_dma_pool scalar_processor_2400A0_dmem
#define HIVE_ADDR_dma_pool 0xC4
#define HIVE_SIZE_dma_pool 4
#else
#endif
#endif
#define HIVE_MEM_sp_dma_pool scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_pool 0xC4
#define HIVE_SIZE_sp_dma_pool 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_uv_internal_width_vecs
#define HIVE_MEM_isp_uv_internal_width_vecs scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_uv_internal_width_vecs 0x2D9C
#define HIVE_SIZE_isp_uv_internal_width_vecs 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_uv_internal_width_vecs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_uv_internal_width_vecs 0x2D9C
#define HIVE_SIZE_sp_isp_uv_internal_width_vecs 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_pipe_private_exp_id
#define HIVE_MEM_pipe_private_exp_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_pipe_private_exp_id 0x306C
#define HIVE_SIZE_pipe_private_exp_id 4
#else
#endif
#endif
#define HIVE_MEM_sp_pipe_private_exp_id scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_private_exp_id 0x306C
#define HIVE_SIZE_sp_pipe_private_exp_id 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_MMU_BASE
#define HIVE_MEM_MMU_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_MMU_BASE 0x24
#define HIVE_SIZE_MMU_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_MMU_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_MMU_BASE 0x24
#define HIVE_SIZE_sp_MMU_BASE 4

/* function sp_dma_proxy_configure_init_dmem_channel: 3115 */

/* function ia_css_sp_backend_create: 44CA */

/* function sp2host_event_queue_get_size: 2CC */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ia_css_sp_frontend_idle
#define HIVE_MEM_ia_css_sp_frontend_idle scalar_processor_2400A0_dmem
#define HIVE_ADDR_ia_css_sp_frontend_idle 0x3BE4
#define HIVE_SIZE_ia_css_sp_frontend_idle 60
#else
#endif
#endif
#define HIVE_MEM_sp_ia_css_sp_frontend_idle scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ia_css_sp_frontend_idle 0x3BE4
#define HIVE_SIZE_sp_ia_css_sp_frontend_idle 60

/* function isp_hmem_load: 46D8 */

/* function sp_dma_proxy_read_byte_addr: 4DA0 */

/* function sp_thread_fork: 352E */

/* function sp_semaphore_wait: 517A */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_debug_buffer_ddr_address
#define HIVE_MEM_debug_buffer_ddr_address scalar_processor_2400A0_dmem
#define HIVE_ADDR_debug_buffer_ddr_address 0xB8
#define HIVE_SIZE_debug_buffer_ddr_address 4
#else
#endif
#endif
#define HIVE_MEM_sp_debug_buffer_ddr_address scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_debug_buffer_ddr_address 0xB8
#define HIVE_SIZE_sp_debug_buffer_ddr_address 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_reading_cb_frames_preview_pipe
#define HIVE_MEM_sem_for_reading_cb_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_reading_cb_frames_preview_pipe 0x381C
#define HIVE_SIZE_sem_for_reading_cb_frames_preview_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_reading_cb_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_reading_cb_frames_preview_pipe 0x381C
#define HIVE_SIZE_sp_sem_for_reading_cb_frames_preview_pipe 20

/* function sizeof_hmem: 4773 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_request_flash
#define HIVE_MEM_sp_request_flash scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_request_flash 0x2DF8
#define HIVE_SIZE_sp_request_flash 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_request_flash scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_request_flash 0x2DF8
#define HIVE_SIZE_sp_sp_request_flash 4

/* function sp_debug_mode_is_dma_request_enabled: 42DF */

/* function cnd_input_system_cfg: 2A29 */

/* function sp_generate_events: 41D6 */

/* function sp_uds_configure: 749 */

/* function sp_dma_proxy_execute: 30E8 */

/* function __modu: 493E */

/* function sp_circular_buf_push_marked: 36F4 */

/* function isp_vamem_store: 0 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_sdis_horiproj_num
#define HIVE_MEM_isp_sdis_horiproj_num scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_sdis_horiproj_num 0x2DA0
#define HIVE_SIZE_isp_sdis_horiproj_num 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_sdis_horiproj_num scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_sdis_horiproj_num 0x2DA0
#define HIVE_SIZE_sp_isp_sdis_horiproj_num 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_GDC_BASE
#define HIVE_MEM_GDC_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_GDC_BASE 0x40
#define HIVE_SIZE_GDC_BASE 8
#else
#endif
#endif
#define HIVE_MEM_sp_GDC_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_GDC_BASE 0x40
#define HIVE_SIZE_sp_GDC_BASE 8

/* function sp_event_proxy_callout_func: 3281 */

/* function sp_fiber_init: 33ED */

/* function ia_css_sp_input_system_token_map_destroy: 4872 */

/* function ia_css_i_sp_rmgr_uninit: 350 */

/* function wait_for_in_frame: 3B2A */

/* function ia_css_sp_input_system_token_map_init: 48B3 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_isys_token_handler
#define HIVE_MEM_sem_for_isys_token_handler scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_isys_token_handler 0x3830
#define HIVE_SIZE_sem_for_isys_token_handler 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_isys_token_handler scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_isys_token_handler 0x3830
#define HIVE_SIZE_sp_sem_for_isys_token_handler 20

/* function sp_thread_init: 3555 */

/* function ia_css_sp_frontend_destroy: 4666 */

/* function irq_raise_set_token: 41 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_GPIO_BASE
#define HIVE_MEM_GPIO_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_GPIO_BASE 0x38
#define HIVE_SIZE_GPIO_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_GPIO_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_GPIO_BASE 0x38
#define HIVE_SIZE_sp_GPIO_BASE 4

/* function _dma_proxy_dma_read_write: 4E45 */

/* function sp_dma_proxy_configure_init_vmem_channel: 3131 */

/* function sp_acquire_dynamic_buf: 3A6C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_ph
#define HIVE_MEM_isp_ph scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_ph 0x2650
#define HIVE_SIZE_isp_ph 28
#else
#endif
#endif
#define HIVE_MEM_sp_isp_ph scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_ph 0x2650
#define HIVE_SIZE_sp_isp_ph 28

/* function sp_tagger_destroy: 40EC */

/* function init_isp_internal_buffers: 1325 */

/* function dma_proxy_dma_set_addr_B: 3172 */

/* function ia_css_sp_input_system_token_map_snd_capture_req: 4827 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_target_nr_of_captured_frames
#define HIVE_MEM_target_nr_of_captured_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_target_nr_of_captured_frames 0x2DE0
#define HIVE_SIZE_target_nr_of_captured_frames 4
#else
#endif
#endif
#define HIVE_MEM_sp_target_nr_of_captured_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_target_nr_of_captured_frames 0x2DE0
#define HIVE_SIZE_sp_target_nr_of_captured_frames 4

/* function sp_dma_proxy_write: 30CF */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_sp_group
#define HIVE_MEM_sem_for_sp_group scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_sp_group 0x3844
#define HIVE_SIZE_sem_for_sp_group 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_sp_group scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_sp_group 0x3844
#define HIVE_SIZE_sp_sem_for_sp_group 20

/* function ia_css_i_sp_refcount_init_vbuf: 3F2 */

/* function isp_hmem_clear: 46A9 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_reading_cb_params_preview_pipe
#define HIVE_MEM_sem_for_reading_cb_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_reading_cb_params_preview_pipe 0x3858
#define HIVE_SIZE_sem_for_reading_cb_params_preview_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_reading_cb_params_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_reading_cb_params_preview_pipe 0x3858
#define HIVE_SIZE_sp_sem_for_reading_cb_params_preview_pipe 20

/* function input_system_acquisition_run: 2A07 */

/* function sp_dma_proxy_vmem_read: 308C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_reading_cb_params_capture_pipe
#define HIVE_MEM_sem_for_reading_cb_params_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_reading_cb_params_capture_pipe 0x386C
#define HIVE_SIZE_sem_for_reading_cb_params_capture_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_reading_cb_params_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_reading_cb_params_capture_pipe 0x386C
#define HIVE_SIZE_sp_sem_for_reading_cb_params_capture_pipe 20

/* function release_in_frame: 3B66 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_params_capture_pipe
#define HIVE_MEM_cb_params_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_params_capture_pipe 0x3880
#define HIVE_SIZE_cb_params_capture_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_cb_params_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_params_capture_pipe 0x3880
#define HIVE_SIZE_sp_cb_params_capture_pipe 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_sdis_vertproj_num
#define HIVE_MEM_isp_sdis_vertproj_num scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_sdis_vertproj_num 0x2DA4
#define HIVE_SIZE_isp_sdis_vertproj_num 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_sdis_vertproj_num scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_sdis_vertproj_num 0x2DA4
#define HIVE_SIZE_sp_isp_sdis_vertproj_num 4

/* function wait_for_in_param: 3B93 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_frames_capture_pipe
#define HIVE_MEM_cb_frames_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_frames_capture_pipe 0x3894
#define HIVE_SIZE_cb_frames_capture_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_cb_frames_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_frames_capture_pipe 0x3894
#define HIVE_SIZE_sp_cb_frames_capture_pipe 20

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_host_sp_queue
#define HIVE_MEM_host_sp_queue scalar_processor_2400A0_dmem
#define HIVE_ADDR_host_sp_queue 0x3070
#define HIVE_SIZE_host_sp_queue 1036
#else
#endif
#endif
#define HIVE_MEM_sp_host_sp_queue scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_host_sp_queue 0x3070
#define HIVE_SIZE_sp_host_sp_queue 1036

/* function sp_thread_main: 356D */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_pool
#define HIVE_MEM_isp_pool scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_pool 0xC8
#define HIVE_SIZE_isp_pool 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_pool scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_pool 0xC8
#define HIVE_SIZE_sp_isp_pool 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_busy_frame
#define HIVE_MEM_busy_frame scalar_processor_2400A0_dmem
#define HIVE_ADDR_busy_frame 0x3C60
#define HIVE_SIZE_busy_frame 16
#else
#endif
#endif
#define HIVE_MEM_sp_busy_frame scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_busy_frame 0x3C60
#define HIVE_SIZE_sp_busy_frame 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_is_done_flag
#define HIVE_MEM_isp_is_done_flag scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_is_done_flag 0xD2C
#define HIVE_SIZE_isp_is_done_flag 1
#else
#endif
#endif
#define HIVE_MEM_sp_isp_is_done_flag scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_is_done_flag 0xD2C
#define HIVE_SIZE_sp_isp_is_done_flag 1

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_event_any_pending_mask
#define HIVE_MEM_event_any_pending_mask scalar_processor_2400A0_dmem
#define HIVE_ADDR_event_any_pending_mask 0x33C
#define HIVE_SIZE_event_any_pending_mask 8
#else
#endif
#endif
#define HIVE_MEM_sp_event_any_pending_mask scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_event_any_pending_mask 0x33C
#define HIVE_SIZE_sp_event_any_pending_mask 8

/* function ia_css_sp_frontend_has_empty_mipi_buffer_cb: 44FE */

/* function ia_css_i_sp_refcount_release_vbuf: 48F */

/* function init_isp_data_segment: 13D2 */

/* function ia_css_sp_frontend_start: 45F3 */

/* function sh_css_decode_tag_descr: 5C5 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_dma_configs
#define HIVE_MEM_dma_configs scalar_processor_2400A0_dmem
#define HIVE_ADDR_dma_configs 0x269C
#define HIVE_SIZE_dma_configs 80
#else
#endif
#endif
#define HIVE_MEM_sp_dma_configs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_configs 0x269C
#define HIVE_SIZE_sp_dma_configs 80

/* function debug_enqueue_isp: 1FA */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_dma_crop_cropping_a
#define HIVE_MEM_sp_dma_crop_cropping_a scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_crop_cropping_a 0x26F4
#define HIVE_SIZE_sp_dma_crop_cropping_a 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_dma_crop_cropping_a scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_dma_crop_cropping_a 0x26F4
#define HIVE_SIZE_sp_sp_dma_crop_cropping_a 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_HIVE_IF_SWITCH_CODE
#define HIVE_MEM_HIVE_IF_SWITCH_CODE scalar_processor_2400A0_dmem
#define HIVE_ADDR_HIVE_IF_SWITCH_CODE 0x320
#define HIVE_SIZE_HIVE_IF_SWITCH_CODE 4
#else
#endif
#endif
#define HIVE_MEM_sp_HIVE_IF_SWITCH_CODE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_HIVE_IF_SWITCH_CODE 0x320
#define HIVE_SIZE_sp_HIVE_IF_SWITCH_CODE 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_isp_idle
#define HIVE_MEM_sem_for_isp_idle scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_isp_idle 0x38A8
#define HIVE_SIZE_sem_for_isp_idle 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_isp_idle scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_isp_idle 0x38A8
#define HIVE_SIZE_sp_sem_for_isp_idle 20

/* function sp_thread_get_state: 34A1 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_channels
#define HIVE_MEM_channels scalar_processor_2400A0_dmem
#define HIVE_ADDR_channels 0x2630
#define HIVE_SIZE_channels 32
#else
#endif
#endif
#define HIVE_MEM_sp_channels scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_channels 0x2630
#define HIVE_SIZE_sp_channels 32

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_vf_downscale_bits
#define HIVE_MEM_sp_vf_downscale_bits scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_vf_downscale_bits 0x2DA8
#define HIVE_SIZE_sp_vf_downscale_bits 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_vf_downscale_bits scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_vf_downscale_bits 0x2DA8
#define HIVE_SIZE_sp_sp_vf_downscale_bits 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_sdis_vertcoef_vectors
#define HIVE_MEM_isp_sdis_vertcoef_vectors scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_sdis_vertcoef_vectors 0x2DAC
#define HIVE_SIZE_isp_sdis_vertcoef_vectors 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_sdis_vertcoef_vectors scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_sdis_vertcoef_vectors 0x2DAC
#define HIVE_SIZE_sp_isp_sdis_vertcoef_vectors 4

/* function dma_configure: 906 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_pipe_stop
#define HIVE_MEM_sp_pipe_stop scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_stop 0x2F90
#define HIVE_SIZE_sp_pipe_stop 16
#else
#endif
#endif
#define HIVE_MEM_sp_sp_pipe_stop scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_pipe_stop 0x2F90
#define HIVE_SIZE_sp_sp_pipe_stop 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ISP_VAMEM_BASE
#define HIVE_MEM_ISP_VAMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_ISP_VAMEM_BASE 0x14
#define HIVE_SIZE_ISP_VAMEM_BASE 12
#else
#endif
#endif
#define HIVE_MEM_sp_ISP_VAMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ISP_VAMEM_BASE 0x14
#define HIVE_SIZE_sp_ISP_VAMEM_BASE 12

/* function handle_parameter_sets: 3C29 */

/* function ia_css_sp_frontend_create: 467C */

/* function sp_tagger_create: 410D */

/* function sp_dma_proxy_vmem_write: 3076 */

/* function sp_thread_set_priority: 34EC */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_pipe_private_dis_bufs
#define HIVE_MEM_pipe_private_dis_bufs scalar_processor_2400A0_dmem
#define HIVE_ADDR_pipe_private_dis_bufs 0x347C
#define HIVE_SIZE_pipe_private_dis_bufs 32
#else
#endif
#endif
#define HIVE_MEM_sp_pipe_private_dis_bufs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_private_dis_bufs 0x347C
#define HIVE_SIZE_sp_pipe_private_dis_bufs 32

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_callout_sp_thread
#define HIVE_MEM_callout_sp_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_callout_sp_thread 0x2DFC
#define HIVE_SIZE_callout_sp_thread 4
#else
#endif
#endif
#define HIVE_MEM_sp_callout_sp_thread scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_callout_sp_thread 0x2DFC
#define HIVE_SIZE_sp_callout_sp_thread 4

/* function sp_semaphore_signal: 5134 */

/* function ia_css_sp_input_system_token_map_snd_acquire_req: 4814 */

/* function sp_dma_proxy_write_byte_addr: 30B9 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_SP_PMEM_BASE
#define HIVE_MEM_SP_PMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_SP_PMEM_BASE 0x0
#define HIVE_SIZE_SP_PMEM_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_SP_PMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_SP_PMEM_BASE 0x0
#define HIVE_SIZE_sp_SP_PMEM_BASE 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_isp_input_stream_format
#define HIVE_MEM_sp_isp_input_stream_format scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_input_stream_format 0x2DB0
#define HIVE_SIZE_sp_isp_input_stream_format 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_isp_input_stream_format scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_isp_input_stream_format 0x2DB0
#define HIVE_SIZE_sp_sp_isp_input_stream_format 4

/* function sp_circular_buf_push_unmarked: 35FE */

/* function __mod: 492A */

/* function __sp_event_proxy_func_critical: 4F9A */

/* function sp_circular_buf_mark: 37CB */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_target_nr_of_copied_frames
#define HIVE_MEM_target_nr_of_copied_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_target_nr_of_copied_frames 0x2DE4
#define HIVE_SIZE_target_nr_of_copied_frames 4
#else
#endif
#endif
#define HIVE_MEM_sp_target_nr_of_copied_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_target_nr_of_copied_frames 0x2DE4
#define HIVE_SIZE_sp_target_nr_of_copied_frames 4

/* function irq_raise: 53 */

/* function sp_circular_buf_unmark: 37A3 */

/* function ia_css_i_sp_rmgr_vbuf_dequeue: 44D */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_HIVE_IF_SRST_ADDRESS
#define HIVE_MEM_HIVE_IF_SRST_ADDRESS scalar_processor_2400A0_dmem
#define HIVE_ADDR_HIVE_IF_SRST_ADDRESS 0x300
#define HIVE_SIZE_HIVE_IF_SRST_ADDRESS 16
#else
#endif
#endif
#define HIVE_MEM_sp_HIVE_IF_SRST_ADDRESS scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_HIVE_IF_SRST_ADDRESS 0x300
#define HIVE_SIZE_sp_HIVE_IF_SRST_ADDRESS 16

/* function _dma_proxy_dma_execute: 4F1F */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_elems_frames_preview_pipe
#define HIVE_MEM_cb_elems_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_elems_frames_preview_pipe 0x38BC
#define HIVE_SIZE_cb_elems_frames_preview_pipe 16
#else
#endif
#endif
#define HIVE_MEM_sp_cb_elems_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_elems_frames_preview_pipe 0x38BC
#define HIVE_SIZE_sp_cb_elems_frames_preview_pipe 16

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_frames_preview_pipe
#define HIVE_MEM_cb_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_frames_preview_pipe 0x38CC
#define HIVE_SIZE_cb_frames_preview_pipe 20
#else
#endif
#endif
#define HIVE_MEM_sp_cb_frames_preview_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_frames_preview_pipe 0x38CC
#define HIVE_SIZE_sp_cb_frames_preview_pipe 20

/* function set_sp_sleep_for_debug: 4314 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_current_sp_fiber
#define HIVE_MEM_current_sp_fiber scalar_processor_2400A0_dmem
#define HIVE_ADDR_current_sp_fiber 0x1218
#define HIVE_SIZE_current_sp_fiber 4
#else
#endif
#endif
#define HIVE_MEM_sp_current_sp_fiber scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_current_sp_fiber 0x1218
#define HIVE_SIZE_sp_current_sp_fiber 4

/* function ia_css_sp_input_system_token_map_create: 48E0 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_dma_vfout_cropping_a
#define HIVE_MEM_sp_dma_vfout_cropping_a scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_dma_vfout_cropping_a 0x26F8
#define HIVE_SIZE_sp_dma_vfout_cropping_a 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_dma_vfout_cropping_a scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_dma_vfout_cropping_a 0x26F8
#define HIVE_SIZE_sp_sp_dma_vfout_cropping_a 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_cb_elems_frames_capture_pipe
#define HIVE_MEM_cb_elems_frames_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_cb_elems_frames_capture_pipe 0x38E0
#define HIVE_SIZE_cb_elems_frames_capture_pipe 16
#else
#endif
#endif
#define HIVE_MEM_sp_cb_elems_frames_capture_pipe scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_cb_elems_frames_capture_pipe 0x38E0
#define HIVE_SIZE_sp_cb_elems_frames_capture_pipe 16

/* function sp_dma_proxy_init: 2FE6 */

/* function sp_release_dynamic_buf: 390C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ISP_HMEM_BASE
#define HIVE_MEM_ISP_HMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_ISP_HMEM_BASE 0x20
#define HIVE_SIZE_ISP_HMEM_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_ISP_HMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ISP_HMEM_BASE 0x20
#define HIVE_SIZE_sp_ISP_HMEM_BASE 4

/* function ia_css_sp_input_system_token_map_flush: 4855 */

/* function ia_css_i_sp_rmgr_vbuf_enqueue: 478 */

/* function __sp_event_proxy_callout_func_critical: 4FAD */

/* function ia_css_sp_input_system_isr: 477A */

/* function end_binary: 1172 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_stacks
#define HIVE_MEM_stacks scalar_processor_2400A0_dmem
#define HIVE_ADDR_stacks 0x258
#define HIVE_SIZE_stacks 20
#else
#endif
#endif
#define HIVE_MEM_sp_stacks scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_stacks 0x258
#define HIVE_SIZE_sp_stacks 20

/* function dma_proxy_dma_execute_split: 3210 */

/* function ia_css_i_sp_refcount_dump: 428 */

/* function ia_css_i_sp_rmgr_rel_gen: 399 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_irq_sw_interrupt_token
#define HIVE_MEM_irq_sw_interrupt_token scalar_processor_2400A0_dmem
#define HIVE_ADDR_irq_sw_interrupt_token 0x2610
#define HIVE_SIZE_irq_sw_interrupt_token 4
#else
#endif
#endif
#define HIVE_MEM_sp_irq_sw_interrupt_token scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_irq_sw_interrupt_token 0x2610
#define HIVE_SIZE_sp_irq_sw_interrupt_token 4

/* function sp_thread_kill: 34F4 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_pipe_private_buffer_bufs
#define HIVE_MEM_pipe_private_buffer_bufs scalar_processor_2400A0_dmem
#define HIVE_ADDR_pipe_private_buffer_bufs 0x349C
#define HIVE_SIZE_pipe_private_buffer_bufs 112
#else
#endif
#endif
#define HIVE_MEM_sp_pipe_private_buffer_bufs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_private_buffer_bufs 0x349C
#define HIVE_SIZE_sp_pipe_private_buffer_bufs 112

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_isp_addresses
#define HIVE_MEM_sp_isp_addresses scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_addresses 0x3B28
#define HIVE_SIZE_sp_isp_addresses 176
#else
#endif
#endif
#define HIVE_MEM_sp_sp_isp_addresses scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_isp_addresses 0x3B28
#define HIVE_SIZE_sp_sp_isp_addresses 176

/* function sp_fiber_main: 33F7 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isps
#define HIVE_MEM_isps scalar_processor_2400A0_dmem
#define HIVE_ADDR_isps 0x266C
#define HIVE_SIZE_isps 28
#else
#endif
#endif
#define HIVE_MEM_sp_isps scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isps 0x266C
#define HIVE_SIZE_sp_isps 28

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_host_sp_queues_initialized
#define HIVE_MEM_host_sp_queues_initialized scalar_processor_2400A0_dmem
#define HIVE_ADDR_host_sp_queues_initialized 0x2DB4
#define HIVE_SIZE_host_sp_queues_initialized 4
#else
#endif
#endif
#define HIVE_MEM_sp_host_sp_queues_initialized scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_host_sp_queues_initialized 0x2DB4
#define HIVE_SIZE_sp_host_sp_queues_initialized 4

/* function ia_css_sp_backend_acquire: 44A8 */

/* function _dma_proxy_dma_read_write_inline: 31B7 */

/* function dma_proxy_dma_set_increments: 3164 */

/* function __sp_dma_proxy_wait_for_ack_text: 302C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_vbuf_spref
#define HIVE_MEM_vbuf_spref scalar_processor_2400A0_dmem
#define HIVE_ADDR_vbuf_spref 0xCC
#define HIVE_SIZE_vbuf_spref 4
#else
#endif
#endif
#define HIVE_MEM_sp_vbuf_spref scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_vbuf_spref 0xCC
#define HIVE_SIZE_sp_vbuf_spref 4

/* function sp_circular_buf_extract: 37F3 */

/* function output_compute_dma_info: 1E1B */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_sdis_horicoef_vectors
#define HIVE_MEM_isp_sdis_horicoef_vectors scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_sdis_horicoef_vectors 0x2DB8
#define HIVE_SIZE_isp_sdis_horicoef_vectors 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_sdis_horicoef_vectors scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_sdis_horicoef_vectors 0x2DB8
#define HIVE_SIZE_sp_isp_sdis_horicoef_vectors 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sem_for_reading_if
#define HIVE_MEM_sem_for_reading_if scalar_processor_2400A0_dmem
#define HIVE_ADDR_sem_for_reading_if 0x38F0
#define HIVE_SIZE_sem_for_reading_if 20
#else
#endif
#endif
#define HIVE_MEM_sp_sem_for_reading_if scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sem_for_reading_if 0x38F0
#define HIVE_SIZE_sp_sem_for_reading_if 20

/* function sp_circular_buf_pop_marked: 36A8 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_pipe_private_frames
#define HIVE_MEM_pipe_private_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_pipe_private_frames 0x350C
#define HIVE_SIZE_pipe_private_frames 48
#else
#endif
#endif
#define HIVE_MEM_sp_pipe_private_frames scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_pipe_private_frames 0x350C
#define HIVE_SIZE_sp_pipe_private_frames 48

/* function ia_css_sp_frontend_rcv_capture_ack: 454A */

/* function sp_generate_interrupts: 4135 */

/* function init_isp_vars: 20D4 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sems_for_host2sp_buf_queues
#define HIVE_MEM_sems_for_host2sp_buf_queues scalar_processor_2400A0_dmem
#define HIVE_ADDR_sems_for_host2sp_buf_queues 0x353C
#define HIVE_SIZE_sems_for_host2sp_buf_queues 560
#else
#endif
#endif
#define HIVE_MEM_sp_sems_for_host2sp_buf_queues scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sems_for_host2sp_buf_queues 0x353C
#define HIVE_SIZE_sp_sems_for_host2sp_buf_queues 560

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_data
#define HIVE_MEM_sp_data scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_data 0x27AC
#define HIVE_SIZE_sp_data 640
#else
#endif
#endif
#define HIVE_MEM_sp_sp_data scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_data 0x27AC
#define HIVE_SIZE_sp_sp_data 640

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ISP_BAMEM_BASE
#define HIVE_MEM_ISP_BAMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_ISP_BAMEM_BASE 0x334
#define HIVE_SIZE_ISP_BAMEM_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_ISP_BAMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ISP_BAMEM_BASE 0x334
#define HIVE_SIZE_sp_ISP_BAMEM_BASE 4

/* function acquire_isp: 433B */

/* function sp_circular_buf_is_marked: 377E */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_mem_map
#define HIVE_MEM_mem_map scalar_processor_2400A0_dmem
#define HIVE_ADDR_mem_map 0x26FC
#define HIVE_SIZE_mem_map 104
#else
#endif
#endif
#define HIVE_MEM_sp_mem_map scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_mem_map 0x26FC
#define HIVE_SIZE_sp_mem_map 104

/* function sp_init_dmem: 2B16 */

/* function ia_css_i_sp_refcount_retain_vbuf: 4B0 */

/* function init_isp_code_segment: 122C */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_ISP_PMEM_BASE
#define HIVE_MEM_ISP_PMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_ISP_PMEM_BASE 0xC
#define HIVE_SIZE_ISP_PMEM_BASE 4
#else
#endif
#endif
#define HIVE_MEM_sp_ISP_PMEM_BASE scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_ISP_PMEM_BASE 0xC
#define HIVE_SIZE_sp_ISP_PMEM_BASE 4

/* function run_sp_threads: 3584 */

/* function ia_css_sp_backend_snd_acquire_request: 43A1 */

/* function sp_thread_queue_print: 35A1 */

/* function done_isp_data_segment: 13B4 */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_flash_in_service
#define HIVE_MEM_sp_flash_in_service scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_flash_in_service 0x1228
#define HIVE_SIZE_sp_flash_in_service 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_flash_in_service scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_flash_in_service 0x1228
#define HIVE_SIZE_sp_sp_flash_in_service 4

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_vf_output_width_vecs
#define HIVE_MEM_isp_vf_output_width_vecs scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_vf_output_width_vecs 0x2DBC
#define HIVE_SIZE_isp_vf_output_width_vecs 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_vf_output_width_vecs scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_vf_output_width_vecs 0x2DBC
#define HIVE_SIZE_sp_isp_vf_output_width_vecs 4

/* function sp_circular_buf_pop_unmarked: 35BA */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_sp_sleep_mode
#define HIVE_MEM_sp_sleep_mode scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sleep_mode 0x2DC0
#define HIVE_SIZE_sp_sleep_mode 4
#else
#endif
#endif
#define HIVE_MEM_sp_sp_sleep_mode scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_sp_sleep_mode 0x2DC0
#define HIVE_SIZE_sp_sp_sleep_mode 4

/* function mmu_invalidate_cache: 5E */

/* function ia_css_sp_input_system_token_map_receive_ack: 47DB */

#ifndef HIVE_MULTIPLE_PROGRAMS
#ifndef HIVE_MEM_isp_stop_req
#define HIVE_MEM_isp_stop_req scalar_processor_2400A0_dmem
#define HIVE_ADDR_isp_stop_req 0x2DF4
#define HIVE_SIZE_isp_stop_req 4
#else
#endif
#endif
#define HIVE_MEM_sp_isp_stop_req scalar_processor_2400A0_dmem
#define HIVE_ADDR_sp_isp_stop_req 0x2DF4
#define HIVE_SIZE_sp_isp_stop_req 4

/* function release_isp: 4326 */

#define HIVE_ICACHE_sp_critical_SEGMENT_START 0
#define HIVE_ICACHE_sp_critical_NUM_SEGMENTS  1

#endif /* _sp_map_h_ */
extern void sh_css_dump_sp_init_dmem_data (void);
void sh_css_dump_sp_init_dmem_data (void)
{
  static struct ia_css_sp_init_dmem_cfg sp_init_dmem_data;
  assert(sizeof(sp_init_dmem_data) ==
         HIVE_SIZE_sp_init_dmem_data);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_init_dmem_data),
    (char*)&sp_init_dmem_data,
    sizeof(sp_init_dmem_data));
  sh_css_print("sp_init_dmem_data.done ="
    "                                  0x%x\n",
    sp_init_dmem_data.done);
  sh_css_print("sp_init_dmem_data.ddr_data_addr ="
    "                         0x%x\n",
    sp_init_dmem_data.ddr_data_addr);
  sh_css_print("sp_init_dmem_data.dmem_data_addr ="
    "                        0x%x\n",
    sp_init_dmem_data.dmem_data_addr);
  sh_css_print("sp_init_dmem_data.dmem_bss_addr ="
    "                         0x%x\n",
    sp_init_dmem_data.dmem_bss_addr);
  sh_css_print("sp_init_dmem_data.data_size ="
    "                             0x%x\n",
    sp_init_dmem_data.data_size);
  sh_css_print("sp_init_dmem_data.bss_size ="
    "                              0x%x\n",
    sp_init_dmem_data.bss_size);
}

extern void sh_css_dump_xmem_bin_addr (void);
void sh_css_dump_xmem_bin_addr (void)
{
  hrt_vaddress xmem_bin_addr;
  assert(sizeof(xmem_bin_addr) ==
         HIVE_SIZE_xmem_bin_addr);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(xmem_bin_addr),
    (char*)&xmem_bin_addr,
    sizeof(xmem_bin_addr));
  sh_css_print("xmem_bin_addr ="
    "                                           0x%x\n",
    xmem_bin_addr);
}

extern void sh_css_dump_sp_vf_downscale_bits (void);
void sh_css_dump_sp_vf_downscale_bits (void)
{
  unsigned int sp_vf_downscale_bits;
  assert(sizeof(sp_vf_downscale_bits) ==
         HIVE_SIZE_sp_vf_downscale_bits);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_vf_downscale_bits),
    (char*)&sp_vf_downscale_bits,
    sizeof(sp_vf_downscale_bits));
  sh_css_print("sp_vf_downscale_bits ="
    "                                    0x%x\n",
    sp_vf_downscale_bits);
}

extern void sh_css_dump_sp_per_frame_data (void);
void sh_css_dump_sp_per_frame_data (void)
{
  static struct sh_css_sp_per_frame_data sp_per_frame_data;
  assert(sizeof(sp_per_frame_data) ==
         HIVE_SIZE_sp_per_frame_data);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_per_frame_data),
    (char*)&sp_per_frame_data,
    sizeof(sp_per_frame_data));
  sh_css_print("sp_per_frame_data.sp_group_addr ="
    "                         0x%x\n",
    sp_per_frame_data.sp_group_addr);
}

extern void sh_css_dump_sp_group (void);
void sh_css_dump_sp_group (void)
{
  static struct sh_css_sp_group sp_group;
  assert(sizeof(sp_group) ==
         HIVE_SIZE_sp_group);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_group),
    (char*)&sp_group,
    sizeof(sp_group));
  sh_css_print("sp_group.config.is_offline ="
    "                              0x%x\n",
    sp_group.config.is_offline);
  sh_css_print("sp_group.config.input_needs_raw_binning ="
    "                 0x%x\n",
    sp_group.config.input_needs_raw_binning);
  sh_css_print("sp_group.config.no_isp_sync ="
    "                             0x%x\n",
    sp_group.config.no_isp_sync);
  sh_css_print("sp_group.config.input_formatter.a_changed ="
    "               0x%x\n",
    sp_group.config.input_formatter.a_changed);
  sh_css_print("sp_group.config.input_formatter.b_changed ="
    "               0x%x\n",
    sp_group.config.input_formatter.b_changed);
  sh_css_print("sp_group.config.input_formatter.isp_2ppc ="
    "                0x%x\n",
    sp_group.config.input_formatter.isp_2ppc);
  sh_css_print("sp_group.config.input_formatter.set[0].stream_format ="
    "    0x%x\n",
    sp_group.config.input_formatter.set[0].stream_format);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.start_line ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.start_line);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.start_column ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.start_column);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.left_padding ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.left_padding);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.cropped_height ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.cropped_height);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.cropped_width ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.cropped_width);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.deinterleaving ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.deinterleaving);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.buf_vecs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.buf_vecs);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.buf_start_index ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.buf_start_index);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.buf_increment ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.buf_increment);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.buf_eol_offset ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.buf_eol_offset);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.is_yuv420_format ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.is_yuv420_format);
  sh_css_print("sp_group.config.input_formatter.set[0].config_a.block_no_reqs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_a.block_no_reqs);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.start_line ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.start_line);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.start_column ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.start_column);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.left_padding ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.left_padding);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.cropped_height ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.cropped_height);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.cropped_width ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.cropped_width);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.deinterleaving ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.deinterleaving);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.buf_vecs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.buf_vecs);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.buf_start_index ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.buf_start_index);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.buf_increment ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.buf_increment);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.buf_eol_offset ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.buf_eol_offset);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.is_yuv420_format ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.is_yuv420_format);
  sh_css_print("sp_group.config.input_formatter.set[0].config_b.block_no_reqs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[0].config_b.block_no_reqs);
  sh_css_print("sp_group.config.input_formatter.set[1].stream_format ="
    "    0x%x\n",
    sp_group.config.input_formatter.set[1].stream_format);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.start_line ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.start_line);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.start_column ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.start_column);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.left_padding ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.left_padding);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.cropped_height ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.cropped_height);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.cropped_width ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.cropped_width);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.deinterleaving ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.deinterleaving);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.buf_vecs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.buf_vecs);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.buf_start_index ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.buf_start_index);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.buf_increment ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.buf_increment);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.buf_eol_offset ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.buf_eol_offset);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.is_yuv420_format ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.is_yuv420_format);
  sh_css_print("sp_group.config.input_formatter.set[1].config_a.block_no_reqs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_a.block_no_reqs);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.start_line ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.start_line);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.start_column ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.start_column);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.left_padding ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.left_padding);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.cropped_height ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.cropped_height);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.cropped_width ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.cropped_width);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.deinterleaving ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.deinterleaving);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.buf_vecs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.buf_vecs);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.buf_start_index ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.buf_start_index);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.buf_increment ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.buf_increment);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.buf_eol_offset ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.buf_eol_offset);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.is_yuv420_format ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.is_yuv420_format);
  sh_css_print("sp_group.config.input_formatter.set[1].config_b.block_no_reqs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[1].config_b.block_no_reqs);
  sh_css_print("sp_group.config.input_formatter.set[2].stream_format ="
    "    0x%x\n",
    sp_group.config.input_formatter.set[2].stream_format);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.start_line ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.start_line);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.start_column ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.start_column);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.left_padding ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.left_padding);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.cropped_height ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.cropped_height);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.cropped_width ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.cropped_width);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.deinterleaving ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.deinterleaving);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.buf_vecs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.buf_vecs);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.buf_start_index ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.buf_start_index);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.buf_increment ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.buf_increment);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.buf_eol_offset ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.buf_eol_offset);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.is_yuv420_format ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.is_yuv420_format);
  sh_css_print("sp_group.config.input_formatter.set[2].config_a.block_no_reqs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_a.block_no_reqs);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.start_line ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.start_line);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.start_column ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.start_column);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.left_padding ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.left_padding);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.cropped_height ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.cropped_height);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.cropped_width ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.cropped_width);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.deinterleaving ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.deinterleaving);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.buf_vecs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.buf_vecs);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.buf_start_index ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.buf_start_index);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.buf_increment ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.buf_increment);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.buf_eol_offset ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.buf_eol_offset);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.is_yuv420_format ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.is_yuv420_format);
  sh_css_print("sp_group.config.input_formatter.set[2].config_b.block_no_reqs ="
    "0x%x\n",
    sp_group.config.input_formatter.set[2].config_b.block_no_reqs);
  sh_css_print("sp_group.config.sync_gen.width ="
    "                          0x%x\n",
    sp_group.config.sync_gen.width);
  sh_css_print("sp_group.config.sync_gen.height ="
    "                         0x%x\n",
    sp_group.config.sync_gen.height);
  sh_css_print("sp_group.config.sync_gen.hblank_cycles ="
    "                  0x%x\n",
    sp_group.config.sync_gen.hblank_cycles);
  sh_css_print("sp_group.config.sync_gen.vblank_cycles ="
    "                  0x%x\n",
    sp_group.config.sync_gen.vblank_cycles);
  sh_css_print("sp_group.config.tpg.x_mask ="
    "                              0x%x\n",
    sp_group.config.tpg.x_mask);
  sh_css_print("sp_group.config.tpg.y_mask ="
    "                              0x%x\n",
    sp_group.config.tpg.y_mask);
  sh_css_print("sp_group.config.tpg.x_delta ="
    "                             0x%x\n",
    sp_group.config.tpg.x_delta);
  sh_css_print("sp_group.config.tpg.y_delta ="
    "                             0x%x\n",
    sp_group.config.tpg.y_delta);
  sh_css_print("sp_group.config.tpg.xy_mask ="
    "                             0x%x\n",
    sp_group.config.tpg.xy_mask);
  sh_css_print("sp_group.config.tpg.sync_gen_cfg.width ="
    "                  0x%x\n",
    sp_group.config.tpg.sync_gen_cfg.width);
  sh_css_print("sp_group.config.tpg.sync_gen_cfg.height ="
    "                 0x%x\n",
    sp_group.config.tpg.sync_gen_cfg.height);
  sh_css_print("sp_group.config.tpg.sync_gen_cfg.hblank_cycles ="
    "          0x%x\n",
    sp_group.config.tpg.sync_gen_cfg.hblank_cycles);
  sh_css_print("sp_group.config.tpg.sync_gen_cfg.vblank_cycles ="
    "          0x%x\n",
    sp_group.config.tpg.sync_gen_cfg.vblank_cycles);
  sh_css_print("sp_group.config.prbs.seed ="
    "                               0x%x\n",
    sp_group.config.prbs.seed);
  sh_css_print("sp_group.config.prbs.sync_gen_cfg.width ="
    "                 0x%x\n",
    sp_group.config.prbs.sync_gen_cfg.width);
  sh_css_print("sp_group.config.prbs.sync_gen_cfg.height ="
    "                0x%x\n",
    sp_group.config.prbs.sync_gen_cfg.height);
  sh_css_print("sp_group.config.prbs.sync_gen_cfg.hblank_cycles ="
    "         0x%x\n",
    sp_group.config.prbs.sync_gen_cfg.hblank_cycles);
  sh_css_print("sp_group.config.prbs.sync_gen_cfg.vblank_cycles ="
    "         0x%x\n",
    sp_group.config.prbs.sync_gen_cfg.vblank_cycles);
  sh_css_print("sp_group.config.input_circuit.no_side_band ="
    "              0x%x\n",
    sp_group.config.input_circuit.no_side_band);
  sh_css_print("sp_group.config.input_circuit.fmt_type ="
    "                  0x%x\n",
    sp_group.config.input_circuit.fmt_type);
  sh_css_print("sp_group.config.input_circuit.ch_id ="
    "                     0x%x\n",
    sp_group.config.input_circuit.ch_id);
  sh_css_print("sp_group.config.input_circuit.input_mode ="
    "                0x%x\n",
    sp_group.config.input_circuit.input_mode);
  sh_css_print("sp_group.config.input_circuit_cfg_changed ="
    "               0x%x\n",
    sp_group.config.input_circuit_cfg_changed);
  sh_css_print("sp_group.pipe[0].pipe_id ="
    "                                0x%x\n",
    sp_group.pipe[0].pipe_id);
  sh_css_print("sp_group.pipe[0].pipe_num ="
    "                               0x%x\n",
    sp_group.pipe[0].pipe_num);
  sh_css_print("sp_group.pipe[0].thread_id ="
    "                              0x%x\n",
    sp_group.pipe[0].thread_id);
  sh_css_print("sp_group.pipe[0].pipe_config ="
    "                            0x%x\n",
    sp_group.pipe[0].pipe_config);
  sh_css_print("sp_group.pipe[0].input_system_mode ="
    "                      0x%x\n",
    sp_group.pipe[0].input_system_mode);
  sh_css_print("sp_group.pipe[0].port_id ="
    "                                0x%x\n",
    sp_group.pipe[0].port_id);
  sh_css_print("sp_group.pipe[0].num_stages ="
    "                             0x%x\n",
    sp_group.pipe[0].num_stages);
  sh_css_print("sp_group.pipe[0].running ="
    "                                0x%x\n",
    sp_group.pipe[0].running);
  sh_css_print("sp_group.pipe[0].sp_stage_addr[0] ="
    "                       0x%x\n",
    sp_group.pipe[0].sp_stage_addr[0]);
  sh_css_print("sp_group.pipe[0].sp_stage_addr[1] ="
    "                       0x%x\n",
    sp_group.pipe[0].sp_stage_addr[1]);
  sh_css_print("sp_group.pipe[0].sp_stage_addr[2] ="
    "                       0x%x\n",
    sp_group.pipe[0].sp_stage_addr[2]);
  sh_css_print("sp_group.pipe[0].sp_stage_addr[3] ="
    "                       0x%x\n",
    sp_group.pipe[0].sp_stage_addr[3]);
  sh_css_print("sp_group.pipe[0].sp_stage_addr[4] ="
    "                       0x%x\n",
    sp_group.pipe[0].sp_stage_addr[4]);
  sh_css_print("sp_group.pipe[0].sp_stage_addr[5] ="
    "                       0x%x\n",
    sp_group.pipe[0].sp_stage_addr[5]);
  sh_css_print("sp_group.pipe[0].stage ="
    "                                    %p\n",
    sp_group.pipe[0].stage);
  sh_css_print("sp_group.pipe[0].copy.bin.bytes_available ="
    "               0x%x\n",
    sp_group.pipe[0].copy.bin.bytes_available);
  sh_css_print("sp_group.pipe[0].copy.raw.height ="
    "                        0x%x\n",
    sp_group.pipe[0].copy.raw.height);
  sh_css_print("sp_group.pipe[0].copy.raw.width ="
    "                         0x%x\n",
    sp_group.pipe[0].copy.raw.width);
  sh_css_print("sp_group.pipe[0].copy.raw.padded_width ="
    "                  0x%x\n",
    sp_group.pipe[0].copy.raw.padded_width);
  sh_css_print("sp_group.pipe[0].copy.raw.max_input_width ="
    "               0x%x\n",
    sp_group.pipe[0].copy.raw.max_input_width);
  sh_css_print("sp_group.pipe[0].copy.raw.raw_bit_depth ="
    "                 0x%x\n",
    sp_group.pipe[0].copy.raw.raw_bit_depth);
  sh_css_print("sp_group.pipe[1].pipe_id ="
    "                                0x%x\n",
    sp_group.pipe[1].pipe_id);
  sh_css_print("sp_group.pipe[1].pipe_num ="
    "                               0x%x\n",
    sp_group.pipe[1].pipe_num);
  sh_css_print("sp_group.pipe[1].thread_id ="
    "                              0x%x\n",
    sp_group.pipe[1].thread_id);
  sh_css_print("sp_group.pipe[1].pipe_config ="
    "                            0x%x\n",
    sp_group.pipe[1].pipe_config);
  sh_css_print("sp_group.pipe[1].input_system_mode ="
    "                      0x%x\n",
    sp_group.pipe[1].input_system_mode);
  sh_css_print("sp_group.pipe[1].port_id ="
    "                                0x%x\n",
    sp_group.pipe[1].port_id);
  sh_css_print("sp_group.pipe[1].num_stages ="
    "                             0x%x\n",
    sp_group.pipe[1].num_stages);
  sh_css_print("sp_group.pipe[1].running ="
    "                                0x%x\n",
    sp_group.pipe[1].running);
  sh_css_print("sp_group.pipe[1].sp_stage_addr[0] ="
    "                       0x%x\n",
    sp_group.pipe[1].sp_stage_addr[0]);
  sh_css_print("sp_group.pipe[1].sp_stage_addr[1] ="
    "                       0x%x\n",
    sp_group.pipe[1].sp_stage_addr[1]);
  sh_css_print("sp_group.pipe[1].sp_stage_addr[2] ="
    "                       0x%x\n",
    sp_group.pipe[1].sp_stage_addr[2]);
  sh_css_print("sp_group.pipe[1].sp_stage_addr[3] ="
    "                       0x%x\n",
    sp_group.pipe[1].sp_stage_addr[3]);
  sh_css_print("sp_group.pipe[1].sp_stage_addr[4] ="
    "                       0x%x\n",
    sp_group.pipe[1].sp_stage_addr[4]);
  sh_css_print("sp_group.pipe[1].sp_stage_addr[5] ="
    "                       0x%x\n",
    sp_group.pipe[1].sp_stage_addr[5]);
  sh_css_print("sp_group.pipe[1].stage ="
    "                                    %p\n",
    sp_group.pipe[1].stage);
  sh_css_print("sp_group.pipe[1].copy.bin.bytes_available ="
    "               0x%x\n",
    sp_group.pipe[1].copy.bin.bytes_available);
  sh_css_print("sp_group.pipe[1].copy.raw.height ="
    "                        0x%x\n",
    sp_group.pipe[1].copy.raw.height);
  sh_css_print("sp_group.pipe[1].copy.raw.width ="
    "                         0x%x\n",
    sp_group.pipe[1].copy.raw.width);
  sh_css_print("sp_group.pipe[1].copy.raw.padded_width ="
    "                  0x%x\n",
    sp_group.pipe[1].copy.raw.padded_width);
  sh_css_print("sp_group.pipe[1].copy.raw.max_input_width ="
    "               0x%x\n",
    sp_group.pipe[1].copy.raw.max_input_width);
  sh_css_print("sp_group.pipe[1].copy.raw.raw_bit_depth ="
    "                 0x%x\n",
    sp_group.pipe[1].copy.raw.raw_bit_depth);
  sh_css_print("sp_group.pipe[2].pipe_id ="
    "                                0x%x\n",
    sp_group.pipe[2].pipe_id);
  sh_css_print("sp_group.pipe[2].pipe_num ="
    "                               0x%x\n",
    sp_group.pipe[2].pipe_num);
  sh_css_print("sp_group.pipe[2].thread_id ="
    "                              0x%x\n",
    sp_group.pipe[2].thread_id);
  sh_css_print("sp_group.pipe[2].pipe_config ="
    "                            0x%x\n",
    sp_group.pipe[2].pipe_config);
  sh_css_print("sp_group.pipe[2].input_system_mode ="
    "                      0x%x\n",
    sp_group.pipe[2].input_system_mode);
  sh_css_print("sp_group.pipe[2].port_id ="
    "                                0x%x\n",
    sp_group.pipe[2].port_id);
  sh_css_print("sp_group.pipe[2].num_stages ="
    "                             0x%x\n",
    sp_group.pipe[2].num_stages);
  sh_css_print("sp_group.pipe[2].running ="
    "                                0x%x\n",
    sp_group.pipe[2].running);
  sh_css_print("sp_group.pipe[2].sp_stage_addr[0] ="
    "                       0x%x\n",
    sp_group.pipe[2].sp_stage_addr[0]);
  sh_css_print("sp_group.pipe[2].sp_stage_addr[1] ="
    "                       0x%x\n",
    sp_group.pipe[2].sp_stage_addr[1]);
  sh_css_print("sp_group.pipe[2].sp_stage_addr[2] ="
    "                       0x%x\n",
    sp_group.pipe[2].sp_stage_addr[2]);
  sh_css_print("sp_group.pipe[2].sp_stage_addr[3] ="
    "                       0x%x\n",
    sp_group.pipe[2].sp_stage_addr[3]);
  sh_css_print("sp_group.pipe[2].sp_stage_addr[4] ="
    "                       0x%x\n",
    sp_group.pipe[2].sp_stage_addr[4]);
  sh_css_print("sp_group.pipe[2].sp_stage_addr[5] ="
    "                       0x%x\n",
    sp_group.pipe[2].sp_stage_addr[5]);
  sh_css_print("sp_group.pipe[2].stage ="
    "                                    %p\n",
    sp_group.pipe[2].stage);
  sh_css_print("sp_group.pipe[2].copy.bin.bytes_available ="
    "               0x%x\n",
    sp_group.pipe[2].copy.bin.bytes_available);
  sh_css_print("sp_group.pipe[2].copy.raw.height ="
    "                        0x%x\n",
    sp_group.pipe[2].copy.raw.height);
  sh_css_print("sp_group.pipe[2].copy.raw.width ="
    "                         0x%x\n",
    sp_group.pipe[2].copy.raw.width);
  sh_css_print("sp_group.pipe[2].copy.raw.padded_width ="
    "                  0x%x\n",
    sp_group.pipe[2].copy.raw.padded_width);
  sh_css_print("sp_group.pipe[2].copy.raw.max_input_width ="
    "               0x%x\n",
    sp_group.pipe[2].copy.raw.max_input_width);
  sh_css_print("sp_group.pipe[2].copy.raw.raw_bit_depth ="
    "                 0x%x\n",
    sp_group.pipe[2].copy.raw.raw_bit_depth);
  sh_css_print("sp_group.pipe[3].pipe_id ="
    "                                0x%x\n",
    sp_group.pipe[3].pipe_id);
  sh_css_print("sp_group.pipe[3].pipe_num ="
    "                               0x%x\n",
    sp_group.pipe[3].pipe_num);
  sh_css_print("sp_group.pipe[3].thread_id ="
    "                              0x%x\n",
    sp_group.pipe[3].thread_id);
  sh_css_print("sp_group.pipe[3].pipe_config ="
    "                            0x%x\n",
    sp_group.pipe[3].pipe_config);
  sh_css_print("sp_group.pipe[3].input_system_mode ="
    "                      0x%x\n",
    sp_group.pipe[3].input_system_mode);
  sh_css_print("sp_group.pipe[3].port_id ="
    "                                0x%x\n",
    sp_group.pipe[3].port_id);
  sh_css_print("sp_group.pipe[3].num_stages ="
    "                             0x%x\n",
    sp_group.pipe[3].num_stages);
  sh_css_print("sp_group.pipe[3].running ="
    "                                0x%x\n",
    sp_group.pipe[3].running);
  sh_css_print("sp_group.pipe[3].sp_stage_addr[0] ="
    "                       0x%x\n",
    sp_group.pipe[3].sp_stage_addr[0]);
  sh_css_print("sp_group.pipe[3].sp_stage_addr[1] ="
    "                       0x%x\n",
    sp_group.pipe[3].sp_stage_addr[1]);
  sh_css_print("sp_group.pipe[3].sp_stage_addr[2] ="
    "                       0x%x\n",
    sp_group.pipe[3].sp_stage_addr[2]);
  sh_css_print("sp_group.pipe[3].sp_stage_addr[3] ="
    "                       0x%x\n",
    sp_group.pipe[3].sp_stage_addr[3]);
  sh_css_print("sp_group.pipe[3].sp_stage_addr[4] ="
    "                       0x%x\n",
    sp_group.pipe[3].sp_stage_addr[4]);
  sh_css_print("sp_group.pipe[3].sp_stage_addr[5] ="
    "                       0x%x\n",
    sp_group.pipe[3].sp_stage_addr[5]);
  sh_css_print("sp_group.pipe[3].stage ="
    "                                    %p\n",
    sp_group.pipe[3].stage);
  sh_css_print("sp_group.pipe[3].copy.bin.bytes_available ="
    "               0x%x\n",
    sp_group.pipe[3].copy.bin.bytes_available);
  sh_css_print("sp_group.pipe[3].copy.raw.height ="
    "                        0x%x\n",
    sp_group.pipe[3].copy.raw.height);
  sh_css_print("sp_group.pipe[3].copy.raw.width ="
    "                         0x%x\n",
    sp_group.pipe[3].copy.raw.width);
  sh_css_print("sp_group.pipe[3].copy.raw.padded_width ="
    "                  0x%x\n",
    sp_group.pipe[3].copy.raw.padded_width);
  sh_css_print("sp_group.pipe[3].copy.raw.max_input_width ="
    "               0x%x\n",
    sp_group.pipe[3].copy.raw.max_input_width);
  sh_css_print("sp_group.pipe[3].copy.raw.raw_bit_depth ="
    "                 0x%x\n",
    sp_group.pipe[3].copy.raw.raw_bit_depth);
  sh_css_print("sp_group.debug.dma_sw_reg ="
    "                               0x%x\n",
    sp_group.debug.dma_sw_reg);
}

extern void sh_css_dump_sp_output (void);
void sh_css_dump_sp_output (void)
{
  static struct sh_css_sp_output sp_output;
  assert(sizeof(sp_output) ==
         HIVE_SIZE_sp_output);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_output),
    (char*)&sp_output,
    sizeof(sp_output));
  sh_css_print("sp_output.bin_copy_bytes_copied ="
    "                         0x%x\n",
    sp_output.bin_copy_bytes_copied);
  sh_css_print("sp_output.sw_interrupt_value[0] ="
    "                         0x%x\n",
    sp_output.sw_interrupt_value[0]);
  sh_css_print("sp_output.sw_interrupt_value[1] ="
    "                         0x%x\n",
    sp_output.sw_interrupt_value[1]);
  sh_css_print("sp_output.sw_interrupt_value[2] ="
    "                         0x%x\n",
    sp_output.sw_interrupt_value[2]);
}

extern void sh_css_dump_host_sp_com (void);
void sh_css_dump_host_sp_com (void)
{
  static volatile struct host_sp_communication host_sp_com;
  assert(sizeof(host_sp_com) ==
         HIVE_SIZE_host_sp_com);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(host_sp_com),
    (char*)&host_sp_com,
    sizeof(host_sp_com));
  sh_css_print("host_sp_com.host2sp_command ="
    "                             0x%x\n",
    host_sp_com.host2sp_command);
  sh_css_print("host_sp_com.host2sp_offline_frames[0] ="
    "                   0x%x\n",
    host_sp_com.host2sp_offline_frames[0]);
  sh_css_print("host_sp_com.host2sp_offline_frames[1] ="
    "                   0x%x\n",
    host_sp_com.host2sp_offline_frames[1]);
  sh_css_print("host_sp_com.host2sp_offline_frames[2] ="
    "                   0x%x\n",
    host_sp_com.host2sp_offline_frames[2]);
  sh_css_print("host_sp_com.host2sp_offline_frames[3] ="
    "                   0x%x\n",
    host_sp_com.host2sp_offline_frames[3]);
  sh_css_print("host_sp_com.host2sp_offline_frames[4] ="
    "                   0x%x\n",
    host_sp_com.host2sp_offline_frames[4]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[0] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[0]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[1] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[1]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[2] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[2]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[3] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[3]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[4] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[4]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[5] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[5]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[6] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[6]);
  sh_css_print("host_sp_com.host2sp_mipi_frames[7] ="
    "                      0x%x\n",
    host_sp_com.host2sp_mipi_frames[7]);
  sh_css_print("host_sp_com.host2sp_cont_num_raw_frames ="
    "                 0x%x\n",
    host_sp_com.host2sp_cont_num_raw_frames);
  sh_css_print("host_sp_com.host2sp_cont_num_mipi_frames ="
    "                0x%x\n",
    host_sp_com.host2sp_cont_num_mipi_frames);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[0].or_mask ="
    "           0x%x\n",
    host_sp_com.host2sp_event_irq_mask[0].or_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[0].and_mask ="
    "          0x%x\n",
    host_sp_com.host2sp_event_irq_mask[0].and_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[1].or_mask ="
    "           0x%x\n",
    host_sp_com.host2sp_event_irq_mask[1].or_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[1].and_mask ="
    "          0x%x\n",
    host_sp_com.host2sp_event_irq_mask[1].and_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[2].or_mask ="
    "           0x%x\n",
    host_sp_com.host2sp_event_irq_mask[2].or_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[2].and_mask ="
    "          0x%x\n",
    host_sp_com.host2sp_event_irq_mask[2].and_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[3].or_mask ="
    "           0x%x\n",
    host_sp_com.host2sp_event_irq_mask[3].or_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[3].and_mask ="
    "          0x%x\n",
    host_sp_com.host2sp_event_irq_mask[3].and_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[4].or_mask ="
    "           0x%x\n",
    host_sp_com.host2sp_event_irq_mask[4].or_mask);
  sh_css_print("host_sp_com.host2sp_event_irq_mask[4].and_mask ="
    "          0x%x\n",
    host_sp_com.host2sp_event_irq_mask[4].and_mask);
}

extern void sh_css_dump_sp_isp_started (void);
void sh_css_dump_sp_isp_started (void)
{
  volatile int sp_isp_started;
  assert(sizeof(sp_isp_started) ==
         HIVE_SIZE_sp_isp_started);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_isp_started),
    (char*)&sp_isp_started,
    sizeof(sp_isp_started));
  sh_css_print("sp_isp_started ="
    "                                          0x%x\n",
    sp_isp_started);
}

extern void sh_css_dump_sp_sw_state (void);
void sh_css_dump_sp_sw_state (void)
{
  volatile int sp_sw_state;
  assert(sizeof(sp_sw_state) ==
         HIVE_SIZE_sp_sw_state);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_sw_state),
    (char*)&sp_sw_state,
    sizeof(sp_sw_state));
  sh_css_print("sp_sw_state ="
    "                                             0x%x\n",
    sp_sw_state);
}

extern void sh_css_dump_host_sp_queues_initialized (void);
void sh_css_dump_host_sp_queues_initialized (void)
{
  volatile int host_sp_queues_initialized;
  assert(sizeof(host_sp_queues_initialized) ==
         HIVE_SIZE_host_sp_queues_initialized);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(host_sp_queues_initialized),
    (char*)&host_sp_queues_initialized,
    sizeof(host_sp_queues_initialized));
  sh_css_print("host_sp_queues_initialized ="
    "                              0x%x\n",
    host_sp_queues_initialized);
}

extern void sh_css_dump_sp_sleep_mode (void);
void sh_css_dump_sp_sleep_mode (void)
{
  volatile int sp_sleep_mode;
  assert(sizeof(sp_sleep_mode) ==
         HIVE_SIZE_sp_sleep_mode);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_sleep_mode),
    (char*)&sp_sleep_mode,
    sizeof(sp_sleep_mode));
  sh_css_print("sp_sleep_mode ="
    "                                           0x%x\n",
    sp_sleep_mode);
}

extern void sh_css_dump_isp_uv_internal_width_vecs (void);
void sh_css_dump_isp_uv_internal_width_vecs (void)
{
  unsigned int isp_uv_internal_width_vecs;
  assert(sizeof(isp_uv_internal_width_vecs) ==
         HIVE_SIZE_isp_uv_internal_width_vecs);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_uv_internal_width_vecs),
    (char*)&isp_uv_internal_width_vecs,
    sizeof(isp_uv_internal_width_vecs));
  sh_css_print("isp_uv_internal_width_vecs ="
    "                              0x%x\n",
    isp_uv_internal_width_vecs);
}

extern void sh_css_dump_isp_vf_output_width_vecs (void);
void sh_css_dump_isp_vf_output_width_vecs (void)
{
  unsigned int isp_vf_output_width_vecs;
  assert(sizeof(isp_vf_output_width_vecs) ==
         HIVE_SIZE_isp_vf_output_width_vecs);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_vf_output_width_vecs),
    (char*)&isp_vf_output_width_vecs,
    sizeof(isp_vf_output_width_vecs));
  sh_css_print("isp_vf_output_width_vecs ="
    "                                0x%x\n",
    isp_vf_output_width_vecs);
}

extern void sh_css_dump_isp_vectors_per_line (void);
void sh_css_dump_isp_vectors_per_line (void)
{
  unsigned int isp_vectors_per_line;
  assert(sizeof(isp_vectors_per_line) ==
         HIVE_SIZE_isp_vectors_per_line);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_vectors_per_line),
    (char*)&isp_vectors_per_line,
    sizeof(isp_vectors_per_line));
  sh_css_print("isp_vectors_per_line ="
    "                                    0x%x\n",
    isp_vectors_per_line);
}

extern void sh_css_dump_isp_vectors_per_input_line (void);
void sh_css_dump_isp_vectors_per_input_line (void)
{
  unsigned int isp_vectors_per_input_line;
  assert(sizeof(isp_vectors_per_input_line) ==
         HIVE_SIZE_isp_vectors_per_input_line);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_vectors_per_input_line),
    (char*)&isp_vectors_per_input_line,
    sizeof(isp_vectors_per_input_line));
  sh_css_print("isp_vectors_per_input_line ="
    "                              0x%x\n",
    isp_vectors_per_input_line);
}

extern void sh_css_dump_isp_sdis_horiproj_num (void);
void sh_css_dump_isp_sdis_horiproj_num (void)
{
  unsigned int isp_sdis_horiproj_num;
  assert(sizeof(isp_sdis_horiproj_num) ==
         HIVE_SIZE_isp_sdis_horiproj_num);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_sdis_horiproj_num),
    (char*)&isp_sdis_horiproj_num,
    sizeof(isp_sdis_horiproj_num));
  sh_css_print("isp_sdis_horiproj_num ="
    "                                   0x%x\n",
    isp_sdis_horiproj_num);
}

extern void sh_css_dump_isp_sdis_vertproj_num (void);
void sh_css_dump_isp_sdis_vertproj_num (void)
{
  unsigned int isp_sdis_vertproj_num;
  assert(sizeof(isp_sdis_vertproj_num) ==
         HIVE_SIZE_isp_sdis_vertproj_num);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_sdis_vertproj_num),
    (char*)&isp_sdis_vertproj_num,
    sizeof(isp_sdis_vertproj_num));
  sh_css_print("isp_sdis_vertproj_num ="
    "                                   0x%x\n",
    isp_sdis_vertproj_num);
}

extern void sh_css_dump_isp_sdis_horicoef_vectors (void);
void sh_css_dump_isp_sdis_horicoef_vectors (void)
{
  unsigned int isp_sdis_horicoef_vectors;
  assert(sizeof(isp_sdis_horicoef_vectors) ==
         HIVE_SIZE_isp_sdis_horicoef_vectors);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_sdis_horicoef_vectors),
    (char*)&isp_sdis_horicoef_vectors,
    sizeof(isp_sdis_horicoef_vectors));
  sh_css_print("isp_sdis_horicoef_vectors ="
    "                               0x%x\n",
    isp_sdis_horicoef_vectors);
}

extern void sh_css_dump_isp_sdis_vertcoef_vectors (void);
void sh_css_dump_isp_sdis_vertcoef_vectors (void)
{
  unsigned int isp_sdis_vertcoef_vectors;
  assert(sizeof(isp_sdis_vertcoef_vectors) ==
         HIVE_SIZE_isp_sdis_vertcoef_vectors);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(isp_sdis_vertcoef_vectors),
    (char*)&isp_sdis_vertcoef_vectors,
    sizeof(isp_sdis_vertcoef_vectors));
  sh_css_print("isp_sdis_vertcoef_vectors ="
    "                               0x%x\n",
    isp_sdis_vertcoef_vectors);
}

extern void sh_css_dump_sp_isp_input_stream_format (void);
void sh_css_dump_sp_isp_input_stream_format (void)
{
  enum sh_stream_format{ sh_stream_format_yuv420_legacy, sh_stream_format_yuv420, sh_stream_format_yuv422, sh_stream_format_rgb, sh_stream_format_raw, sh_stream_format_binary} sp_isp_input_stream_format;
  assert(sizeof(sp_isp_input_stream_format) ==
         HIVE_SIZE_sp_isp_input_stream_format);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_isp_input_stream_format),
    (char*)&sp_isp_input_stream_format,
    sizeof(sp_isp_input_stream_format));
  sh_css_print("sp_isp_input_stream_format ="
    "                              0x%x\n",
    sp_isp_input_stream_format);
}

extern void sh_css_dump_sp_obarea_start_bq (void);
void sh_css_dump_sp_obarea_start_bq (void)
{
  unsigned int sp_obarea_start_bq;
  assert(sizeof(sp_obarea_start_bq) ==
         HIVE_SIZE_sp_obarea_start_bq);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_obarea_start_bq),
    (char*)&sp_obarea_start_bq,
    sizeof(sp_obarea_start_bq));
  sh_css_print("sp_obarea_start_bq ="
    "                                      0x%x\n",
    sp_obarea_start_bq);
}

extern void sh_css_dump_sp_obarea_length_bq (void);
void sh_css_dump_sp_obarea_length_bq (void)
{
  unsigned int sp_obarea_length_bq;
  assert(sizeof(sp_obarea_length_bq) ==
         HIVE_SIZE_sp_obarea_length_bq);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_obarea_length_bq),
    (char*)&sp_obarea_length_bq,
    sizeof(sp_obarea_length_bq));
  sh_css_print("sp_obarea_length_bq ="
    "                                     0x%x\n",
    sp_obarea_length_bq);
}

extern void sh_css_dump_sp_preview_thread_id (void);
void sh_css_dump_sp_preview_thread_id (void)
{
  unsigned int sp_preview_thread_id;
  assert(sizeof(sp_preview_thread_id) ==
         HIVE_SIZE_sp_preview_thread_id);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_preview_thread_id),
    (char*)&sp_preview_thread_id,
    sizeof(sp_preview_thread_id));
  sh_css_print("sp_preview_thread_id ="
    "                                    0x%x\n",
    sp_preview_thread_id);
}

extern void sh_css_dump_sp_capture_thread_id (void);
void sh_css_dump_sp_capture_thread_id (void)
{
  unsigned int sp_capture_thread_id;
  assert(sizeof(sp_capture_thread_id) ==
         HIVE_SIZE_sp_capture_thread_id);
  sp_dmem_load(SP0_ID, (unsigned int)sp_address_of(sp_capture_thread_id),
    (char*)&sp_capture_thread_id,
    sizeof(sp_capture_thread_id));
  sh_css_print("sp_capture_thread_id ="
    "                                    0x%x\n",
    sp_capture_thread_id);
}

extern void sh_css_dump_sp_dmem(void);
void sh_css_dump_sp_dmem(void)
{
  sh_css_dump_sp_init_dmem_data();
  sh_css_dump_xmem_bin_addr();
  sh_css_dump_sp_vf_downscale_bits();
  sh_css_dump_sp_per_frame_data();
  sh_css_dump_sp_group();
  sh_css_dump_sp_output();
  sh_css_dump_host_sp_com();
  sh_css_dump_sp_isp_started();
  sh_css_dump_sp_sw_state();
  sh_css_dump_host_sp_queues_initialized();
  sh_css_dump_sp_sleep_mode();
  sh_css_dump_isp_uv_internal_width_vecs();
  sh_css_dump_isp_vf_output_width_vecs();
  sh_css_dump_isp_vectors_per_line();
  sh_css_dump_isp_vectors_per_input_line();
  sh_css_dump_isp_sdis_horiproj_num();
  sh_css_dump_isp_sdis_vertproj_num();
  sh_css_dump_isp_sdis_horicoef_vectors();
  sh_css_dump_isp_sdis_vertcoef_vectors();
  sh_css_dump_sp_isp_input_stream_format();
  sh_css_dump_sp_obarea_start_bq();
  sh_css_dump_sp_obarea_length_bq();
  sh_css_dump_sp_preview_thread_id();
  sh_css_dump_sp_capture_thread_id();
}
