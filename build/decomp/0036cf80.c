// OoT3D decomp @ 0036cf80  name=FUN_0036cf80  size=336

int FUN_0036cf80(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;

  *(undefined2 *)(DAT_0036d100 + 2) = 0xffff;
  iVar2 = *(int *)(param_1 + 0xa54);
  if (*(short *)(iVar2 + 0x18c) == 0x14) {
    FUN_00332284(iVar2,0,param_3,param_4,param_4);
  }
  iVar2 = (int)*(short *)(iVar2 + 0x196);
  uVar6 = 0xffffffff;
  if (iVar2 != 0) {
    do {
      iVar3 = *(int *)(param_1 + iVar2 * 4 + 0xa54);
      if (iVar3 == 0) break;
      if (*(short *)(iVar3 + 0x18a) == 0x2b) {
        uVar5 = (uint)*(byte *)(*(int *)(iVar3 + 0xf0) + 2);
        if (uVar5 < *(byte *)(param_2 + 2)) break;
      }
      else {
        uVar5 = uVar6;
        if (uVar6 != 0xffffffff) goto LAB_0036d028;
      }
      iVar2 = (int)*(short *)(iVar3 + 0x196);
      uVar6 = uVar5;
    } while (iVar2 != 0);
    if (uVar6 != 0xffffffff) {
LAB_0036d028:
      sVar1 = *(short *)(iVar3 + 0x1ac);
      goto LAB_0036d030;
    }
  }
  sVar1 = 0;
LAB_0036d030:
  switch(*(undefined1 *)(param_2 + 2)) {
  default:
    uVar4 = 0x1e;
    break;
  case 4:
  case 7:
  case 0xb:
    uVar4 = 100;
  }
  if (*(byte *)(param_2 + 2) != uVar6) {
    if (param_3 == 0) {
      iVar2 = FUN_00371808(param_1,DAT_0036d104,uVar4,param_2,(int)sVar1);
    }
    else {
      if (param_4 == 0) {
        param_4 = 100;
      }
      iVar2 = FUN_00371808(param_1,(int)(short)param_3,(int)(short)param_4,param_2,(int)sVar1);
    }
    if (iVar2 != -1) {
      *(undefined4 *)(*(int *)(param_1 + iVar2 * 4 + 0xa54) + 0x170) = DAT_0036d108;
      return iVar2;
    }
  }
  return -1;
}
