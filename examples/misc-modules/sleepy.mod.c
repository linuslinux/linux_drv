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
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x3528d739, "register_chrdev" },
	{ 0x7f6a6b88, "__wake_up" },
	{ 0xe6576ef0, "finish_wait" },
	{ 0x616805d4, "prepare_to_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xa8f5ffb6, "autoremove_wake_function" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

