#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x654eb549, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x32d22b4c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xc7cb5bc4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x20cdbcde, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x729d9e2e, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x2f3e0028, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x39e78b43, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0xcea899ea, __VMLINUX_SYMBOL_STR(down) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc87d8b47, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2203BF0B768DD6D79855594");
