#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Koba Karaputadze");
MODULE_DESCRIPTION("Task 1");

static int __init ModuleInit(void) {
	printk(KERN_DEBUG "Hello, KernelCare!\n");
	return 0;
}

static void __exit ModuleExit(void) {
	printk(KERN_DEBUG "Bye, KernelCare!\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
