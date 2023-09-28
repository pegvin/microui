#ifndef MICRO_UI_CONFIG_H_INCLUDED_
#define MICRO_UI_CONFIG_H_INCLUDED_ 1
#pragma once

// Compile-Time Configuration

#define MU_COMMANDLIST_SIZE    (256 * 1024) // 256 KB
#define MU_ROOTLIST_SIZE       (32)
#define MU_CONTAINERSTACK_SIZE (32)
#define MU_CLIPSTACK_SIZE      (32)
#define MU_IDSTACK_SIZE        (32)
#define MU_LAYOUTSTACK_SIZE    (16)
#define MU_CONTAINERPOOL_SIZE  (48)
#define MU_TREENODEPOOL_SIZE   (48)
#define MU_MAX_WIDTHS          (16)

#endif // MICRO_UI_CONFIG_H_INCLUDED_

