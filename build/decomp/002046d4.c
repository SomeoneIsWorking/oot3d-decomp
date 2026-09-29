// OoT3D decomp @ 002046d4  name=FUN_002046d4  size=252

void FUN_002046d4(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;

  FUN_003731e0(param_1 + 0x1a4);
  uVar3 = FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x242),4,0x800,0x100);
  uVar6 = 1 - uVar3;
  if (1 < uVar3) {
    uVar6 = 0;
  }
  uVar3 = FUN_00370378(param_1 + 0xbe,
                       (int)(short)(*(short *)(param_1 + 0x92) + *(short *)(param_1 + 0x240)),0xa00)
  ;
  uVar1 = DAT_002047d4;
  FUN_00373500(DAT_002047d8,DAT_002047d4,DAT_002047d0,param_1 + 0x2c);
  if ((uVar6 & uVar3) != 0) {
    FUN_00374a58(DAT_002047e0,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_002047dc + *(short *)(param_1 + 0x1c) * 4));
    sVar2 = *(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0x230) * 0x4000;
    *(short *)(param_1 + 0x36) = sVar2;
    *(short *)(param_1 + 0x240) = sVar2;
    *(undefined2 *)(param_1 + 0x234) = 0x23;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    iVar5 = 5;
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) | 1;
    puVar4 = (undefined1 *)(*(int *)(param_1 + 0xf08) + 5);
    *puVar4 = 0x20;
    do {
      iVar5 = iVar5 + -1;
      puVar4[0x50] = 0x20;
      puVar4 = puVar4 + 0xa0;
      *puVar4 = 0x20;
    } while (iVar5 != 0);
    *(undefined4 *)(param_1 + 0x22c) = DAT_002047e4;
  }
  return;
}
