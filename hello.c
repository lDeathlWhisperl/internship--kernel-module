#include <linux/module.h>

MODULE_LICENSE("GPL");

int init_module()
{
    printk(KERN_INFO "Hello world!");
    return 0;
}

void cleanup_module()
{
}
