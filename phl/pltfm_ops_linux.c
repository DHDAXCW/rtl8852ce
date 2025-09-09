#ifndef dma_addr_t
typedef unsigned long long dma_addr_t;
#endif
#ifndef NULL
#define NULL ((void *)0)
#endif
#include <linux/dma-mapping.h>
#include <linux/pci.h>
#include <linux/kernel.h>
typedef unsigned int u32;
typedef unsigned char u8;

void *pci_alloc_cache_mem(struct pci_dev *pdev, dma_addr_t *bus_addr, u32 buf_sz, u8 direction) { return NULL; }
void *pci_alloc_noncache_mem(struct pci_dev *pdev, dma_addr_t *bus_addr, u32 buf_sz) { return NULL; }
void pci_free_cache_mem(struct pci_dev *pdev, void *vir_addr, dma_addr_t *bus_addr, u32 buf_sz, u8 direction) {}
void pci_cache_wback(struct pci_dev *pdev, dma_addr_t *bus_addr, u32 buf_sz, u8 direction) {}
void pci_unmap_bus_addr(struct pci_dev *pdev, dma_addr_t *bus_addr, u32 buf_sz, u8 direction) {}
void pci_get_bus_addr(struct pci_dev *pdev, void *vir_addr, dma_addr_t *bus_addr, u32 buf_sz, u8 direction) {}
void rtw_resume_process(void) {}
void pci_free_noncache_mem(struct pci_dev *pdev, void *vir_addr, dma_addr_t *bus_addr, u32 buf_sz) {}
void pci_cache_inv(struct pci_dev *pdev, dma_addr_t *bus_addr, u32 buf_sz, u8 direction) {}

EXPORT_SYMBOL(pci_alloc_cache_mem);
EXPORT_SYMBOL(pci_alloc_noncache_mem);
EXPORT_SYMBOL(pci_free_cache_mem);
EXPORT_SYMBOL(pci_cache_wback);
EXPORT_SYMBOL(pci_unmap_bus_addr);
EXPORT_SYMBOL(pci_get_bus_addr);
EXPORT_SYMBOL(rtw_resume_process);
EXPORT_SYMBOL(pci_free_noncache_mem);
EXPORT_SYMBOL(pci_cache_inv);
