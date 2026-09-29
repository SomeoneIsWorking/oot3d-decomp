// OoT3D decomp @ 00321bd8  name=FUN_00321bd8  size=816

void FUN_00321bd8(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  short local_34 [2];
  float local_30;

  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x1000;
  iVar5 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar5 != 0) {
    FUN_00334c44(param_1);
    uVar6 = *(uint *)(param_1 + 0x1710);
    *(uint *)(param_1 + 0x1710) = uVar6 | 0x20000;
    if ((*(byte *)(param_1 + 0x2a6) & 0x80) == 0) {
      uVar7 = *(ushort *)(param_1 + 0x90) & 0x200;
      bVar10 = (*(ushort *)(param_1 + 0x90) & 0x200) != 0;
      if (bVar10) {
        uVar7 = *(uint *)(DAT_00321f08 + 0x44);
      }
      if (bVar10 && (int)uVar7 < 0x2000) {
        sVar4 = *(short *)(param_1 + 0x82) + -0x8000;
        *(short *)(param_1 + 0xbe) = sVar4;
        *(short *)(param_1 + 0x2220) = sVar4;
      }
    }
    *(undefined2 *)(param_1 + 0x2222) = *(undefined2 *)(param_1 + 0xbe);
    *(uint *)(param_1 + 0x1710) = uVar6 & 0xfffdffff;
    iVar5 = FUN_0035d260(param_1);
    FUN_00359aa0(param_1 + 0x254,param_2,*(undefined4 *)(DAT_00321f0c + iVar5 * 4));
    *(undefined2 *)(param_1 + 0x2238) = 0xffff;
  }
  fVar1 = DAT_00321f18;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00321f10 + 0x6a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_00321f18,fVar11 * DAT_00321f14,param_1 + 0x221c);
  iVar5 = FUN_003518dc(param_1,param_2);
  if ((((iVar5 == 0) && (iVar5 = FUN_00354f70(param_1,param_2), iVar5 == 0)) &&
      (iVar5 = FUN_00354894(param_1,param_2), uVar2 = DAT_00321f20, iVar5 == 0)) &&
     (*(short *)(param_1 + 0x2238) != 0)) {
    FUN_003705a0(DAT_00321f20,DAT_00321f1c,param_1 + 0x2240);
    uVar6 = 1;
    if (*(short *)(param_1 + 0x2238) < 0) {
      if (*(int *)(param_1 + 0x2240) < DAT_00321f24) {
        if ((**(uint **)(param_1 + 0x29c8) & *DAT_00321f28) == 0) {
          FUN_003518cc(param_1);
          FUN_0036055c(param_2,param_1);
          FUN_0034bbfc(param_1);
          iVar5 = FUN_0035d260(param_1);
          uVar3 = DAT_00321f40;
          uVar9 = *(undefined4 *)(DAT_00321f3c + iVar5 * 4);
          uVar8 = FUN_003603c0(param_1 + 0x254,uVar9);
          uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00360190(uVar2,fVar1,uVar8,uVar3,param_1 + 0x254,param_2,uVar9,2);
          *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x2229) = 0;
        *(undefined2 *)(param_1 + 0x2238) = 1;
      }
    }
    else {
      iVar5 = FUN_002dde30(param_1,param_2);
      if (iVar5 == 0) {
        FUN_0036b3f4(fVar1,param_1,&local_30,local_34,param_2);
        FUN_002ddba0(param_1,param_2);
        if ((local_30 != fVar1) ||
           (uVar7 = (int)*(short *)(param_1 + 0x2268) + 400, uVar6 = (uint)(800 < uVar7),
           800 < uVar7)) {
          sVar4 = FUN_00368fec(*(undefined4 *)
                                (param_2 + *(short *)(DAT_00321f44 + param_2) * 4 + 0xa54));
          iVar5 = (int)(short)(local_34[0] - sVar4);
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          uVar7 = iVar5 - 0x2000U & 0xffff;
          bVar10 = uVar7 == 0x4000;
          if (0x3fff < uVar7) {
            bVar10 = *(short *)(param_1 + 0x2268) == 0;
          }
          if (!bVar10) {
            uVar6 = 0xffffffff;
          }
        }
        if (0 < (int)uVar6) {
          FUN_0036055c(param_2,param_1,DAT_00321f48,1);
          return;
        }
        if ((int)uVar6 < 0) {
          FUN_0036055c(param_2,param_1,DAT_00321f4c,1);
          return;
        }
      }
    }
  }
  return;
}
