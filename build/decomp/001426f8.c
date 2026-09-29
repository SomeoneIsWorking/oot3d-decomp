// OoT3D decomp @ 001426f8  name=FUN_001426f8  size=368

void FUN_001426f8(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;

  uVar3 = DAT_00142878;
  iVar2 = DAT_00142874;
  psVar1 = DAT_0014286c;
  iVar7 = *(int *)(DAT_00142868 + param_2);
  *DAT_0014286c = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  uVar5 = DAT_00142884;
  uVar4 = DAT_0014287c;
  if ((*(ushort *)(DAT_00142870 + 0xf6) & 0x800) == 0) {
    if ((*(uint *)(iVar7 + 0x1714) & 0x1000000) != 0) {
      *(short *)(param_1 + 0x116) = (short)DAT_00142884;
      FUN_00367c7c(param_2,uVar5,0);
      *(undefined4 *)(param_1 + 0x840) = DAT_00142888;
      uVar6 = *(ushort *)(param_1 + 0x83c) | 2;
      goto LAB_001427f4;
    }
    iVar8 = FUN_0036bc98(param_1,param_2);
    if (iVar8 == 0) {
      if (((int)*psVar1 + 0x2300U < 0x4601) && (*(int *)(param_1 + 0x98) < iVar2)) {
        *(short *)(param_1 + 0x116) = (short)DAT_0014288c;
        FUN_0036bb28(uVar3,param_1,param_2);
        *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) | 0x800000;
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x840) = DAT_0014287c;
    }
  }
  else {
    iVar7 = FUN_0036bc98(param_1,param_2);
    if (iVar7 == 0) {
      *(short *)(param_1 + 0x116) = (short)DAT_00142880;
      if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2300U < 0x4601)
         && (*(int *)(param_1 + 0x98) < iVar2)) {
        FUN_0036bb28(uVar3,param_1,param_2);
        return;
      }
      uVar6 = *(ushort *)(param_1 + 0x83c) | 1;
LAB_001427f4:
      *(ushort *)(param_1 + 0x83c) = uVar6;
      return;
    }
    *(undefined4 *)(param_1 + 0x840) = uVar4;
  }
  return;
}
