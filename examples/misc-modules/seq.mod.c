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
	{ 0x87e7a942, "seq_release" },
	{ 0x2cd19c2, "seq_read" },
	{ 0x1653e197, "seq_lseek" },
	{ 0x4c2ecf21, "seq_open" },
	{ 0xf1de706a, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x368b5876, "kmem_cache_alloc" },
	{ 0xc1f34dfc, "malloc_sizes" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

