// OoT3D decomp @ 003650d0  name=FUN_003650d0  size=812

undefined4 FUN_003650d0(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  bool bVar10;

  uVar3 = DAT_00365400;
  iVar9 = *(int *)(param_1 + 0x20ac);
  sVar1 = *(short *)(param_2 + 0xbe);
  sVar4 = *(short *)(param_2 + 0x82) - sVar1;
  if (sVar4 < 0) {
    sVar4 = -sVar4;
  }
  sVar5 = *(short *)(param_2 + 0x92) - sVar1;
  if (sVar5 < 0) {
    sVar5 = -sVar5;
  }
  iVar6 = FUN_0035b950(DAT_00365400,param_1,param_2,DAT_003653fc,16000,(int)sVar1);
  if (iVar6 != 0) {
    if (*(char *)(DAT_00365404 + iVar9) == '\x11') goto LAB_00365210;
    if (*(uint *)(param_1 + 0x5bf4) +
        (uint)((ulonglong)*(uint *)(param_1 + 0x5bf4) * (ulonglong)DAT_00365408 >> 0x21) * -3 == 0)
    goto LAB_00365244;
  }
  iVar7 = FUN_0035b950(uVar3,param_1,param_2,DAT_00365410,DAT_0036540c,
                       (int)*(short *)(param_2 + 0xbe));
  iVar6 = DAT_00365414;
  if (iVar7 != 0) {
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0x92);
    *(undefined2 *)(param_2 + 0xbe) = *(undefined2 *)(param_2 + 0x92);
    if ((((*(ushort *)(param_2 + 0x90) & 8) == 0) || (DAT_00365418 < (int)sVar4 + 11999U)) ||
       (iVar6 <= *(int *)(param_2 + 0x98))) {
      if (*(char *)(DAT_00365404 + iVar9) == '\x11') {
LAB_00365210:
        FUN_0035b70c(param_2,param_1);
        return 1;
      }
      if ((*(int *)(param_2 + 0x98) < iVar6) && ((*(uint *)(param_1 + 0x5bf4) & 1) != 0)) {
LAB_00365244:
        FUN_0035b5f4(param_2);
        return 1;
      }
LAB_00365308:
      FUN_00364fbc(param_2);
      return 1;
    }
LAB_003651e8:
    FUN_00365030(param_2);
    return 1;
  }
  psVar8 = (short *)FUN_00369334(DAT_0036541c,param_1,param_2,0xffffffff,3);
  if (psVar8 == (short *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    if (sVar5 < DAT_00365428) {
      sVar4 = *(short *)(iVar9 + 0xbe);
      sVar1 = *(short *)(param_2 + 0xbe);
      if (((*(int *)(param_2 + 0x98) <= DAT_0036542c) &&
          (iVar9 = FUN_00369608(param_1,param_2), iVar9 == 0)) &&
         (((*(uint *)(param_1 + 0x5bf4) & 7) != 0 ||
          ((int)(short)(sVar4 - sVar1) + 0x38dfU <= DAT_00365430)))) {
        FUN_00373d40(param_2 + 0x1e0,0);
        iVar9 = DAT_00365438;
        uVar3 = DAT_00365434;
        *(byte *)(param_2 + 0xc84) = *(byte *)(param_2 + 0xc84) & 0xfb;
        *(undefined4 *)(param_2 + 0xbe8) = 7;
        *(undefined4 *)(param_2 + 0x6c) = uVar3;
        *(undefined2 *)(iVar9 + param_2) = 0;
        FUN_003ff758(param_2 + 0x28,DAT_0036543c);
        *(undefined4 *)(param_2 + 0xbf0) = DAT_00365440;
        return 1;
      }
      FUN_0035b818(param_2);
      return 1;
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0x92);
    *(undefined2 *)(param_2 + 0xbe) = *(undefined2 *)(param_2 + 0x92);
    bVar10 = (*(ushort *)(param_2 + 0x90) & 8) != 0;
    uVar2 = *(ushort *)(param_2 + 0x90) & 8;
    if (bVar10) {
      uVar2 = DAT_00365420;
    }
    if (bVar10 && (int)sVar4 < (int)uVar2) {
      if (*psVar8 != 0xda) goto LAB_003652f0;
    }
    else if (*psVar8 != 0xda) goto LAB_00365308;
    iVar9 = FUN_003306c4(param_2,psVar8);
    if ((iVar9 < DAT_00365424) &&
       ((short)((*(short *)(param_2 + 0xbe) - psVar8[0x1b]) + -0x8000) < 16000)) goto LAB_003651e8;
  }
LAB_003652f0:
  FUN_0034c4a0(param_2,param_1);
  return 1;
}
