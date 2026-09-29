// OoT3D decomp @ 003cab68  name=FUN_003cab68  size=340

void FUN_003cab68(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(ushort *)(param_1 + 0x230) & 0xf) == 0) {
    FUN_00375bcc(param_1,DAT_003cacbc);
  }
  FUN_0036fc20(DAT_003cacc4,DAT_003cacc0,param_1 + 0x6c);
  sVar1 = *(short *)(param_1 + 0x24e) + 1;
  *(short *)(param_1 + 0x24e) = sVar1;
  if (sVar1 == 0x24) {
    *(undefined2 *)(param_1 + 0x24c) = 0xf;
  }
  else if (sVar1 == 0x30) {
    *(undefined2 *)(param_1 + 0x24a) = 0xf;
  }
  else if (sVar1 == 0x3c) {
    *(undefined2 *)(param_1 + 0x248) = 0xf;
  }
  else if (sVar1 == 0x48) {
    *(undefined2 *)(param_1 + 0x246) = 0xf;
  }
  if (*(short *)(param_1 + 0x246) == 3) {
    iVar2 = 0;
    do {
      if (*(short *)(param_1 + iVar2 * 2 + 0x240) == 0) {
        FUN_0036aa20(*(undefined4 *)(param_1 + 0x2fc),*(float *)(param_1 + 0x300) - DAT_003caccc,
                     *(undefined4 *)(param_1 + 0x304),param_2 + 0x208c,param_1,param_2,0x2b,0,
                     (int)(short)((short)iVar2 * (short)DAT_003cacc8),0,iVar2);
        *(undefined2 *)(param_1 + iVar2 * 2 + 0x240) = 1;
        break;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 3);
    bVar3 = *(short *)(param_1 + 0x240) == 0;
    sVar1 = 0;
    if (!bVar3) {
      sVar1 = *(short *)(param_1 + 0x242);
    }
    bVar4 = sVar1 == 0;
    if (!bVar3 && !bVar4) {
      sVar1 = *(short *)(param_1 + 0x244);
    }
    if ((bVar3 || bVar4) || sVar1 == 0) {
      *(undefined2 *)(param_1 + 0x24e) = 0x23;
      goto LAB_003cacb0;
    }
  }
  if (0x5f < *(short *)(param_1 + 0x24e)) {
    FUN_001c5fb4(param_1);
  }
LAB_003cacb0:
  *(undefined2 *)(param_1 + 0x250) = 1;
  return;
}
