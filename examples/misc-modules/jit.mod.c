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
	{ 0x374cf922, "remove_proc_entry" },
	{ 0xc840821f, "create_proc_entry" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x60ea5fe7, "__tasklet_hi_schedule" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x368b5876, "kmem_cache_alloc" },
	{ 0xc1f34dfc, "malloc_sizes" },
	{ 0x7f6a6b88, "__wake_up" },
	{ 0x1ef6409c, "__mod_timer" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xe6576ef0, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x616805d4, "prepare_to_wait" },
	{ 0xa8f5ffb6, "autoremove_wake_function" },
	{ 0x4292364c, "schedule" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

