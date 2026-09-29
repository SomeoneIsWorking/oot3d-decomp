// OoT3D decomp @ 00157390  name=FUN_00157390  size=216

/* WARNING: Removing unreachable block (ram,0x003653ec) */

int FUN_00157390(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  bool bVar11;

  fVar3 = DAT_00157468;
  uVar1 = *(ushort *)(param_1 + 0x90);
  if ((uVar1 & 2) != 0) {
    *(float *)(param_1 + 0x6c) = DAT_00157468;
  }
  if ((uVar1 & 1) != 0) {
    if (*(float *)(param_1 + 0x6c) < fVar3) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_0015746c;
    }
    *(undefined2 *)(param_1 + 0xc14) = 0;
  }
  uVar4 = DAT_00365400;
  if ((*(short *)(DAT_00157470 + param_1) != 0) || ((uVar1 & 1) == 0)) {
    return param_2;
  }
  if (*(char *)(param_1 + 0xb7) == '\0') {
    FUN_00374a58(DAT_00157474,param_1 + 0x1e0,4);
    uVar4 = DAT_0015747c;
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(undefined2 *)(param_1 + 0xc14) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = DAT_00157478;
      *(undefined2 *)(param_1 + 0xc14) = 0;
    }
    *(undefined4 *)(param_1 + 0xbe8) = 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375bcc(param_1,uVar4);
    iVar10 = DAT_00157480;
    *(int *)(param_1 + 0xbf0) = DAT_00157480;
    return iVar10;
  }
  iVar10 = *(int *)(param_2 + 0x20ac);
  sVar5 = *(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe);
  if (sVar5 < 0) {
    sVar5 = -sVar5;
  }
  sVar6 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  if (sVar6 < 0) {
    sVar6 = -sVar6;
  }
  iVar7 = FUN_0035b950(DAT_00365400,param_2,param_1,DAT_003653fc,16000);
  if (iVar7 != 0) {
    if (*(char *)(DAT_00365404 + iVar10) == '\x11') goto LAB_00365210;
    if (*(uint *)(param_2 + 0x5bf4) +
        (uint)((ulonglong)*(uint *)(param_2 + 0x5bf4) * (ulonglong)DAT_00365408 >> 0x21) * -3 == 0)
    goto LAB_00365244;
  }
  iVar8 = FUN_0035b950(uVar4,param_2,param_1,DAT_00365410,DAT_0036540c);
  iVar7 = DAT_00365414;
  if (iVar8 != 0) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    if ((((*(ushort *)(param_1 + 0x90) & 8) == 0) || (DAT_00365418 < (int)sVar5 + 11999U)) ||
       (iVar7 <= *(int *)(param_1 + 0x98))) {
      if (*(char *)(DAT_00365404 + iVar10) == '\x11') {
LAB_00365210:
        FUN_0035b70c(param_1,param_2);
        return 1;
      }
      if ((*(int *)(param_1 + 0x98) < iVar7) && ((*(uint *)(param_2 + 0x5bf4) & 1) != 0)) {
LAB_00365244:
        FUN_0035b5f4(param_1);
        return 1;
      }
LAB_00365308:
      FUN_00364fbc(param_1);
      return 1;
    }
LAB_003651e8:
    FUN_00365030(param_1);
    return 1;
  }
  psVar9 = (short *)FUN_00369334(DAT_0036541c,param_2,param_1,0xffffffff,3);
  if (psVar9 == (short *)0x0) {
    if (sVar6 < DAT_00365428) {
      sVar5 = *(short *)(iVar10 + 0xbe);
      sVar6 = *(short *)(param_1 + 0xbe);
      if (((*(int *)(param_1 + 0x98) <= DAT_0036542c) &&
          (iVar10 = FUN_00369608(param_2,param_1), iVar10 == 0)) &&
         (((*(uint *)(param_2 + 0x5bf4) & 7) != 0 ||
          ((int)(short)(sVar5 - sVar6) + 0x38dfU <= DAT_00365430)))) {
        FUN_00373d40(param_1 + 0x1e0,0);
        iVar10 = DAT_00365438;
        uVar4 = DAT_00365434;
        *(byte *)(param_1 + 0xc84) = *(byte *)(param_1 + 0xc84) & 0xfb;
        *(undefined4 *)(param_1 + 0xbe8) = 7;
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        *(undefined2 *)(iVar10 + param_1) = 0;
        FUN_003ff758(param_1 + 0x28,DAT_0036543c);
        *(undefined4 *)(param_1 + 0xbf0) = DAT_00365440;
        return 1;
      }
      FUN_0035b818(param_1);
      return 1;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    bVar11 = (*(ushort *)(param_1 + 0x90) & 8) != 0;
    uVar2 = *(ushort *)(param_1 + 0x90) & 8;
    if (bVar11) {
      uVar2 = DAT_00365420;
    }
    if (bVar11 && (int)sVar5 < (int)uVar2) {
      if (*psVar9 != 0xda) goto LAB_003652f0;
    }
    else if (*psVar9 != 0xda) goto LAB_00365308;
    iVar10 = FUN_003306c4(param_1,psVar9);
    if ((iVar10 < DAT_00365424) &&
       ((short)((*(short *)(param_1 + 0xbe) - psVar9[0x1b]) + -0x8000) < 16000)) goto LAB_003651e8;
  }
LAB_003652f0:
  FUN_0034c4a0(param_1,param_2);
  return 1;
}
