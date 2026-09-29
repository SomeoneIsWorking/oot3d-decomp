// OoT3D decomp @ 00491034  name=FUN_00491034  size=756

void FUN_00491034(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;

  iVar5 = FUN_0036b4ec(param_1 + 0x254);
  psVar2 = DAT_0049132c;
  uVar1 = DAT_00491328;
  if (iVar5 == 0) {
    sVar4 = *(short *)(param_1 + 0x2238);
    if (-1 < sVar4) {
      iVar5 = (int)*(char *)(param_1 + 0x2237);
      if (-1 < iVar5) {
        if (sVar4 == 0) {
          FUN_00360a1c(param_1,DAT_00491344);
        }
        else if (sVar4 == 1) {
          FUN_00360a1c(param_1,DAT_00491348 + iVar5 * 0x10);
          if ((*(char *)(param_1 + 0x2237) == '\x02') &&
             (iVar5 = FUN_0036b1e0(DAT_0049134c,param_1 + 0x254), iVar5 != 0)) {
            *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xcfffffff;
          }
        }
        else {
          *(short *)(param_1 + 0x2238) = sVar4 + 1;
          if ((short)(ushort)*(byte *)(DAT_00491350 + iVar5) < sVar4) {
            FUN_00358dfc(uVar1,param_1 + 0x254,param_2,*(undefined4 *)(DAT_00491354 + iVar5 * 4));
            *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
            *(undefined1 *)(param_1 + 0x2237) = 0xff;
          }
        }
      }
      goto LAB_004912f4;
    }
    *(short *)(param_1 + 0x2238) = sVar4 + 1;
    uVar1 = DAT_00491340;
    iVar5 = DAT_0049133c;
    if ((short)(sVar4 + 1) != 0) goto LAB_004912f4;
    *(undefined1 *)(DAT_0049133c + 0x53b) = 1;
    FUN_0036c494(param_2,2,uVar1);
    *(undefined4 *)(iVar5 + -0x168) = 1;
    *(int *)(iVar5 + -0x184) = (int)*(float *)(iVar5 + 0x4f0);
    *(int *)(iVar5 + -0x180) = (int)*(float *)(iVar5 + 0x4f4);
    *(int *)(iVar5 + -0x17c) = (int)*(float *)(iVar5 + 0x4f8);
    *(int *)(iVar5 + -0x178) = (int)*(short *)(iVar5 + 0x4fc);
    *(undefined4 *)(iVar5 + -0x174) = uVar1;
    *(int *)(iVar5 + -0x170) = (int)*psVar2;
    *(uint *)(iVar5 + -0x16c) = (uint)*(byte *)(iVar5 + 0x502);
    *(undefined4 *)(iVar5 + -0x164) = *(undefined4 *)(iVar5 + 0x504);
    *(undefined4 *)(iVar5 + -0x160) = *(undefined4 *)(iVar5 + 0x508);
    sVar4 = 2;
  }
  else {
    iVar5 = (int)*(char *)(param_1 + 0x2237);
    if (iVar5 < 0) {
      uVar3 = (ushort)*(byte *)(param_1 + 0x1ac);
      bVar6 = uVar3 != 0x19;
      if (bVar6) {
        uVar3 = DAT_0049132c[0x40];
      }
      if (!bVar6 || uVar3 == 0) {
        FUN_002c2658(param_1,param_2);
        FUN_0036c5bc(param_2,0);
        FUN_0036ae48();
      }
      goto LAB_004912f4;
    }
    if (*(short *)(param_1 + 0x2238) == 0) {
      FUN_00358dfc(DAT_00491328,param_1 + 0x254,param_2,*(undefined4 *)(DAT_00491330 + iVar5 * 4));
      iVar5 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,
                               (int)*(short *)(DAT_00491334 + *(char *)(param_1 + 0x2237) * 2),0,0,0
                               ,0,1);
      if (iVar5 == 0) {
        FUN_0034708c(param_2);
      }
      else {
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x30000000;
        if ((*(char *)(param_1 + 0x2237) != '\0') || (*(char *)((int)psVar2 + 0x3b) < '\x01')) {
          psVar2[0x40] = 1;
        }
      }
    }
    else {
      FUN_003404a8(param_1 + 0x254,param_2,*(undefined4 *)(DAT_00491338 + iVar5 * 4));
      if (*(char *)(param_1 + 0x2237) == '\0') {
        *(undefined2 *)(param_1 + 0x2238) = 0xfff6;
      }
    }
    sVar4 = *(short *)(param_1 + 0x2238) + 1;
  }
  *(short *)(param_1 + 0x2238) = sVar4;
LAB_004912f4:
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00491358 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_00491360,fVar7 * DAT_0049135c,param_1 + 0x221c);
  return;
}
