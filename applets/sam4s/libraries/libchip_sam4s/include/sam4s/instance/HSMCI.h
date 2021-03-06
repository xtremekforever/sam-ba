/* %ATMEL_LICENCE% */

#ifndef _SAM4S_HSMCI_INSTANCE_
#define _SAM4S_HSMCI_INSTANCE_

/* ========== Register definition for HSMCI peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_HSMCI_CR                 (0x40000000U) /**< \brief (HSMCI) Control Register */
#define REG_HSMCI_MR                 (0x40000004U) /**< \brief (HSMCI) Mode Register */
#define REG_HSMCI_DTOR               (0x40000008U) /**< \brief (HSMCI) Data Timeout Register */
#define REG_HSMCI_SDCR               (0x4000000CU) /**< \brief (HSMCI) SD/SDIO Card Register */
#define REG_HSMCI_ARGR               (0x40000010U) /**< \brief (HSMCI) Argument Register */
#define REG_HSMCI_CMDR               (0x40000014U) /**< \brief (HSMCI) Command Register */
#define REG_HSMCI_BLKR               (0x40000018U) /**< \brief (HSMCI) Block Register */
#define REG_HSMCI_CSTOR              (0x4000001CU) /**< \brief (HSMCI) Completion Signal Timeout Register */
#define REG_HSMCI_RSPR               (0x40000020U) /**< \brief (HSMCI) Response Register */
#define REG_HSMCI_RDR                (0x40000030U) /**< \brief (HSMCI) Receive Data Register */
#define REG_HSMCI_TDR                (0x40000034U) /**< \brief (HSMCI) Transmit Data Register */
#define REG_HSMCI_SR                 (0x40000040U) /**< \brief (HSMCI) Status Register */
#define REG_HSMCI_IER                (0x40000044U) /**< \brief (HSMCI) Interrupt Enable Register */
#define REG_HSMCI_IDR                (0x40000048U) /**< \brief (HSMCI) Interrupt Disable Register */
#define REG_HSMCI_IMR                (0x4000004CU) /**< \brief (HSMCI) Interrupt Mask Register */
#define REG_HSMCI_CFG                (0x40000054U) /**< \brief (HSMCI) Configuration Register */
#define REG_HSMCI_WPMR               (0x400000E4U) /**< \brief (HSMCI) Write Protection Mode Register */
#define REG_HSMCI_WPSR               (0x400000E8U) /**< \brief (HSMCI) Write Protection Status Register */
#define REG_HSMCI_RPR                (0x40000100U) /**< \brief (HSMCI) Receive Pointer Register */
#define REG_HSMCI_RCR                (0x40000104U) /**< \brief (HSMCI) Receive Counter Register */
#define REG_HSMCI_TPR                (0x40000108U) /**< \brief (HSMCI) Transmit Pointer Register */
#define REG_HSMCI_TCR                (0x4000010CU) /**< \brief (HSMCI) Transmit Counter Register */
#define REG_HSMCI_RNPR               (0x40000110U) /**< \brief (HSMCI) Receive Next Pointer Register */
#define REG_HSMCI_RNCR               (0x40000114U) /**< \brief (HSMCI) Receive Next Counter Register */
#define REG_HSMCI_TNPR               (0x40000118U) /**< \brief (HSMCI) Transmit Next Pointer Register */
#define REG_HSMCI_TNCR               (0x4000011CU) /**< \brief (HSMCI) Transmit Next Counter Register */
#define REG_HSMCI_PTCR               (0x40000120U) /**< \brief (HSMCI) Transfer Control Register */
#define REG_HSMCI_PTSR               (0x40000124U) /**< \brief (HSMCI) Transfer Status Register */
#define REG_HSMCI_FIFO               (0x40000200U) /**< \brief (HSMCI) FIFO Memory Aperture0 */
#else
#define REG_HSMCI_CR        (*(WoReg*)0x40000000U) /**< \brief (HSMCI) Control Register */
#define REG_HSMCI_MR        (*(RwReg*)0x40000004U) /**< \brief (HSMCI) Mode Register */
#define REG_HSMCI_DTOR      (*(RwReg*)0x40000008U) /**< \brief (HSMCI) Data Timeout Register */
#define REG_HSMCI_SDCR      (*(RwReg*)0x4000000CU) /**< \brief (HSMCI) SD/SDIO Card Register */
#define REG_HSMCI_ARGR      (*(RwReg*)0x40000010U) /**< \brief (HSMCI) Argument Register */
#define REG_HSMCI_CMDR      (*(WoReg*)0x40000014U) /**< \brief (HSMCI) Command Register */
#define REG_HSMCI_BLKR      (*(RwReg*)0x40000018U) /**< \brief (HSMCI) Block Register */
#define REG_HSMCI_CSTOR     (*(RwReg*)0x4000001CU) /**< \brief (HSMCI) Completion Signal Timeout Register */
#define REG_HSMCI_RSPR      (*(RoReg*)0x40000020U) /**< \brief (HSMCI) Response Register */
#define REG_HSMCI_RDR       (*(RoReg*)0x40000030U) /**< \brief (HSMCI) Receive Data Register */
#define REG_HSMCI_TDR       (*(WoReg*)0x40000034U) /**< \brief (HSMCI) Transmit Data Register */
#define REG_HSMCI_SR        (*(RoReg*)0x40000040U) /**< \brief (HSMCI) Status Register */
#define REG_HSMCI_IER       (*(WoReg*)0x40000044U) /**< \brief (HSMCI) Interrupt Enable Register */
#define REG_HSMCI_IDR       (*(WoReg*)0x40000048U) /**< \brief (HSMCI) Interrupt Disable Register */
#define REG_HSMCI_IMR       (*(RoReg*)0x4000004CU) /**< \brief (HSMCI) Interrupt Mask Register */
#define REG_HSMCI_CFG       (*(RwReg*)0x40000054U) /**< \brief (HSMCI) Configuration Register */
#define REG_HSMCI_WPMR      (*(RwReg*)0x400000E4U) /**< \brief (HSMCI) Write Protection Mode Register */
#define REG_HSMCI_WPSR      (*(RoReg*)0x400000E8U) /**< \brief (HSMCI) Write Protection Status Register */
#define REG_HSMCI_RPR       (*(RwReg*)0x40000100U) /**< \brief (HSMCI) Receive Pointer Register */
#define REG_HSMCI_RCR       (*(RwReg*)0x40000104U) /**< \brief (HSMCI) Receive Counter Register */
#define REG_HSMCI_TPR       (*(RwReg*)0x40000108U) /**< \brief (HSMCI) Transmit Pointer Register */
#define REG_HSMCI_TCR       (*(RwReg*)0x4000010CU) /**< \brief (HSMCI) Transmit Counter Register */
#define REG_HSMCI_RNPR      (*(RwReg*)0x40000110U) /**< \brief (HSMCI) Receive Next Pointer Register */
#define REG_HSMCI_RNCR      (*(RwReg*)0x40000114U) /**< \brief (HSMCI) Receive Next Counter Register */
#define REG_HSMCI_TNPR      (*(RwReg*)0x40000118U) /**< \brief (HSMCI) Transmit Next Pointer Register */
#define REG_HSMCI_TNCR      (*(RwReg*)0x4000011CU) /**< \brief (HSMCI) Transmit Next Counter Register */
#define REG_HSMCI_PTCR      (*(WoReg*)0x40000120U) /**< \brief (HSMCI) Transfer Control Register */
#define REG_HSMCI_PTSR      (*(RoReg*)0x40000124U) /**< \brief (HSMCI) Transfer Status Register */
#define REG_HSMCI_FIFO      (*(RwReg*)0x40000200U) /**< \brief (HSMCI) FIFO Memory Aperture0 */
#endif /* __ASSEMBLY__ */

#endif /* _SAM4S_HSMCI_INSTANCE_ */
