#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xf2ebc18f, "struct_module" },
	{ 0x352f3b26, "kobject_put" },
	{ 0xcab8cead, "cdev_del" },
	{ 0x7da8156e, "__kmalloc" },
	{ 0x32958c89, "cdev_init" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x4c2ecf21, "seq_open" },
	{ 0xa8f5ffb6, "autoremove_wake_function" },
	{ 0x8f22d3a8, "__wake_up_sync" },
	{ 0xc1f34dfc, "malloc_sizes" },
	{ 0xc458c92a, "no_llseek" },
	{ 0xa37e75e4, "_spin_lock" },
	{ 0xf1de706a, "seq_printf" },
	{ 0x374cf922, "remove_proc_entry" },
	{ 0xd97c59ca, "kobject_set_name" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2cd19c2, "seq_read" },
	{ 0x3d7986b5, "nonseekable_open" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x96644a22, "fasync_helper" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0x22f25e73, "_spin_unlock" },
	{ 0xe927976, "cdev_add" },
	{ 0x7dceceac, "capable" },
	{ 0x368b5876, "kmem_cache_alloc" },
	{ 0x4292364c, "schedule" },
	{ 0xc840821f, "create_proc_entry" },
	{ 0x7f6a6b88, "__wake_up" },
	{ 0x1653e197, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x616805d4, "prepare_to_wait" },
	{ 0x6ade6498, "kill_fasync" },
	{ 0xe6576ef0, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x87e7a942, "seq_release" },
	{ 0x96b27088, "__down_failed" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

