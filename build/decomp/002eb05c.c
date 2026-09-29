// OoT3D decomp @ 002eb05c  name=FUN_002eb05c  size=116

void FUN_002eb05c(void)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = DAT_002eb0d0;
  puVar2 = (undefined4 *)(DAT_002eb0d0 + 0xb8);
  *(undefined4 *)(DAT_002eb0d0 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x6c) = 0xfffffffe;
  *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *puVar2 = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  if (*(int *)(iVar1 + 0xb0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0xb0) + 0x34) = DAT_002eb0d4;
    return;
  }
  return;
}
