/*
  Copyright (c) 2008-2012 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

#ifndef __MEM_TYPES_H__
#define __MEM_TYPES_H__


enum gf_common_mem_types_ {
        gf_common_mt_call_stub_t          = 0,
        gf_common_mt_dnscache6            = 1,
        gf_common_mt_data_pair_t          = 2,
        gf_common_mt_data_t               = 3,
        gf_common_mt_dict_t               = 4,
        gf_common_mt_event_pool           = 5,
        gf_common_mt_reg                  = 6,
        gf_common_mt_pollfd               = 7,
        gf_common_mt_epoll_event          = 8,
        gf_common_mt_fdentry_t            = 9,
        gf_common_mt_fdtable_t            = 10,
        gf_common_mt_fd_t                 = 11,
        gf_common_mt_fd_ctx               = 12,
        gf_common_mt_gf_dirent_t          = 13,
        gf_common_mt_glusterfs_ctx_t      = 14,
        gf_common_mt_dentry_t             = 15,
        gf_common_mt_inode_t              = 16,
        gf_common_mt_inode_ctx            = 17,
        gf_common_mt_list_head            = 18,
        gf_common_mt_inode_table_t        = 19,
        gf_common_mt_xlator_t             = 20,
        gf_common_mt_xlator_list_t        = 21,
        gf_common_mt_log_msg              = 22,
        gf_common_mt_client_log           = 23,
        gf_common_mt_volume_opt_list_t    = 24,
        gf_common_mt_gf_hdr_common_t      = 25,
        gf_common_mt_call_frame_t         = 26,
        gf_common_mt_call_stack_t         = 27,
        gf_common_mt_gf_timer_t           = 28,
        gf_common_mt_gf_timer_registry_t  = 29,
        gf_common_mt_transport            = 30,
        gf_common_mt_transport_msg        = 31,
        gf_common_mt_auth_handle_t        = 32,
        gf_common_mt_iobuf                = 33,
        gf_common_mt_iobuf_arena          = 34,
        gf_common_mt_iobref               = 35,
        gf_common_mt_iobuf_pool           = 36,
        gf_common_mt_iovec                = 37,
        gf_common_mt_memdup               = 38,
        gf_common_mt_asprintf             = 39,
        gf_common_mt_strdup               = 40,
        gf_common_mt_socket_private_t     = 41,
        gf_common_mt_ioq                  = 42,
        gf_common_mt_transport_t          = 43,
        gf_common_mt_socket_local_t       = 44,
        gf_common_mt_char                 = 45,
        gf_common_mt_rbthash_table_t      = 46,
        gf_common_mt_rbthash_bucket       = 47,
        gf_common_mt_mem_pool             = 48,
        gf_common_mt_long                 = 49,
        gf_common_mt_rpcsvc_auth_list     = 50,
        gf_common_mt_rpcsvc_t             = 51,
        gf_common_mt_rpcsvc_conn_t        = 52,
        gf_common_mt_rpcsvc_program_t     = 53,
        gf_common_mt_rpcsvc_listener_t    = 54,
        gf_common_mt_rpcsvc_wrapper_t     = 55,
        gf_common_mt_rpcsvc_stage_t       = 56,
        gf_common_mt_rpcclnt_t            = 57,
        gf_common_mt_rpcclnt_savedframe_t = 58,
        gf_common_mt_rpc_trans_t          = 59,
        gf_common_mt_rpc_trans_pollin_t   = 60,
        gf_common_mt_rpc_trans_handover_t = 61,
        gf_common_mt_rpc_trans_reqinfo_t  = 62,
        gf_common_mt_rpc_trans_rsp_t      = 63,
        gf_common_mt_glusterfs_graph_t    = 64,
        gf_common_mt_rdma_private_t       = 65,
        gf_common_mt_rdma_ioq_t           = 66,
        gf_common_mt_rpc_transport_t      = 67,
        gf_common_mt_rdma_local_t         = 68,
        gf_common_mt_rdma_post_t          = 69,
        gf_common_mt_qpent                = 70,
        gf_common_mt_rdma_device_t        = 71,
        gf_common_mt_rdma_context_t       = 72,
        gf_common_mt_sge                  = 73,
        gf_common_mt_rpcclnt_cb_program_t = 74,
        gf_common_mt_libxl_marker_local   = 75,
        gf_common_mt_graph_buf            = 76,
        gf_common_mt_trie_trie            = 77,
        gf_common_mt_trie_data            = 78,
        gf_common_mt_trie_node            = 79,
        gf_common_mt_trie_buf             = 80,
        gf_common_mt_trie_end             = 81,
        gf_common_mt_run_argv             = 82,
        gf_common_mt_run_logbuf           = 83,
        gf_common_mt_fd_lk_ctx_t          = 84,
        gf_common_mt_fd_lk_ctx_node_t     = 85,
        gf_common_mt_buffer_t             = 86,
        gf_common_mt_circular_buffer_t    = 87,
        gf_common_mt_eh_t                 = 88,
        gf_common_mt_store_handle_t       = 89,
        gf_common_mt_store_iter_t         = 90,
        gf_common_mt_drc_client_t         = 91,
        gf_common_mt_drc_globals_t        = 92,
        gf_common_mt_drc_rbtree_node_t    = 93,
        gf_common_mt_iov_base_t           = 94,
        gf_common_mt_groups_t             = 95,
        gf_common_mt_cliententry_t        = 96,
        gf_common_mt_clienttable_t        = 97,
        gf_common_mt_client_t             = 98,
        gf_common_mt_client_ctx           = 99,
        gf_common_mt_lock_table           = 100,
        gf_common_mt_locker               = 101,
        gf_common_mt_auxgids              = 102,
        gf_common_mt_syncopctx            = 103,
        gf_common_mt_iobrefs              = 104,
        gf_common_mt_gsync_status_t       = 105,
        gf_common_mt_uuid_t               = 106,
        gf_common_mt_mgmt_v3_lock_obj_t   = 107,
        gf_common_mt_txn_opinfo_obj_t     = 108,
	gf_common_mt_strfd_t              = 109,
	gf_common_mt_strfd_data_t         = 110,
        gf_common_mt_regex_t              = 111,
        gf_common_mt_ereg                 = 112,
        gf_common_mt_wr                   = 113,
        gf_common_mt_rdma_arena_mr        = 114,
        gf_common_mt_parser_t             = 115,
        gf_common_quota_meta_t            = 116,
        /*related to gfdb library*/
        gfdb_mt_time_t,
        gf_mt_sql_cbk_args_t,
        gf_mt_gfdb_query_record_t,
        gf_mt_gfdb_link_info_t,
        gf_mt_gfdb_db_operations_t,
        gf_mt_sql_connection_t,
        gf_mt_sql_conn_node_t,
        gf_mt_db_conn_node_t,
        gf_mt_db_connection_t,
        gfdb_mt_db_record_t,
        /*related to gfdb library*/
        gf_common_mt_end
};
#endif
