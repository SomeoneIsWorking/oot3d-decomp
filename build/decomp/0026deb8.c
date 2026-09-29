// OoT3D decomp @ 0026deb8  name=FUN_0026deb8  size=308

void FUN_0026deb8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (*(char *)(DAT_0026dfec + param_2) == '\0') {
    *(undefined1 *)(DAT_0026dfec + param_2) = 1;
    *(undefined4 *)(DAT_0026dff0 + param_2) = 0;
    *(undefined1 *)((uint)*(ushort *)(DAT_0026dff4 + 0x92) + DAT_0026dff8) = 0xff;
    FUN_00372f38(param_1,param_2,param_1 + 0x600);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0);
    FUN_0035c358(param_1 + 0x604,param_1 + 0x1a4,0);
    uVar1 = DAT_0026dffc;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = DAT_0026e000;
    *(undefined4 *)(param_1 + 0x30) = DAT_0026e004;
    FUN_0037572c(DAT_0026e008,param_1);
    iVar2 = DAT_0026e010;
    *(undefined4 *)(param_1 + 0x5e4) = DAT_0026e00c;
    *(short *)(iVar2 + param_1) = (short)*(char *)(param_1 + 3);
    uVar1 = DAT_0026e014;
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(short *)(param_1 + 0xbe) = (short)uVar1;
    *(short *)(param_1 + 0x36) = (short)uVar1;
    uVar1 = DAT_0026e018;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    *(undefined4 *)(param_1 + 0x5d0) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
