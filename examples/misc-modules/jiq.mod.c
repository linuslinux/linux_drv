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
	{ 0xe60463b4, "del_timer_sync" },
	{ 0x1ef6409c, "__mod_timer" },
	{ 0x4c517958, "interruptible_sleep_on" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xe6576ef0, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x616805d4, "prepare_to_wait" },
	{ 0xa8f5ffb6, "autoremove_wake_function" },
	{ 0xfabb3cf5, "schedule_work" },
	{ 0x3dbeec68, "schedule_delayed_work" },
	{ 0x7f6a6b88, "__wake_up" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x1992a2ba, "param_set_long" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

