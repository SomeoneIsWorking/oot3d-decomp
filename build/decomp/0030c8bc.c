// OoT3D decomp @ 0030c8bc  name=FUN_0030c8bc  size=148

undefined4 FUN_0030c8bc(void)

{
  int iVar1;

  if (((*DAT_0030c950 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0030c950), iVar1 != 0)) {
    iVar1 = FUN_00350820(DAT_0030c954,DAT_0030c958,0xc,3);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined2 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined2 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
  }
  return DAT_0030c954;
}
