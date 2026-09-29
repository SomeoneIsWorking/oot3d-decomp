// OoT3D decomp @ 001b66f8  name=FUN_001b66f8  size=884

void FUN_001b66f8(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  short local_34 [2];
  short local_30 [2];

  iVar6 = DAT_001b6a74;
  uVar4 = *(uint *)(DAT_001b6a74 + 4);
  bVar11 = uVar4 == 0;
  if (bVar11) {
    uVar4 = (uint)*(ushort *)(DAT_001b6a74 + 0xf36);
  }
  if (bVar11 && (uVar4 & 0x100) == 0) {
    *(ushort *)(DAT_001b6a74 + 0xf36) = (ushort)uVar4 | 0x100;
  }
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xcbc);
  FUN_003731e0(param_1 + 0x1a4);
  if (((*(short *)(param_1 + 0xd40) == 0) ||
      (sVar2 = *(short *)(param_1 + 0xd40) + -1, *(short *)(param_1 + 0xd40) = sVar2, sVar2 == 0))
     && (sVar2 = *(short *)(param_1 + 0xd44) + 1, *(short *)(param_1 + 0xd44) = sVar2, 2 < sVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0x1e);
  }
  FUN_00376864(param_1);
  uVar1 = DAT_001b6a80;
  if (*(int *)(param_1 + 0xcb8) == DAT_001b6a78) goto LAB_001b6a24;
  psVar10 = (short *)(param_1 + 0xd14);
  iVar9 = *(int *)(DAT_001b6a7c + param_2);
  iVar5 = FUN_0036bc98(param_1,param_2);
  if (iVar5 == 0) {
    if (*psVar10 != 0) {
      sVar2 = FUN_00173370(param_2,param_1);
      *psVar10 = sVar2;
      goto LAB_001b6a24;
    }
    uVar7 = FUN_003758b0(*(float *)(iVar9 + 0x30) - *(float *)(param_1 + 0x10),
                         *(float *)(iVar9 + 0x28) - *(float *)(param_1 + 8));
    fVar12 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3
                                       );
    if ((DAT_001b6a90 < (int)ABS(fVar12 - fVar13)) || (*(int *)(param_1 + 0x98) < DAT_001b6a94)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      goto LAB_001b6a24;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_00363a20(param_2,param_1,local_30,local_34);
    if (((DAT_001b6a98 <= (int)local_30[0] + 0x1eU) || (local_34[0] < -10)) || (0xf0 < local_34[0]))
    goto LAB_001b6a24;
    uVar7 = *(undefined4 *)(param_1 + 0x98);
    fVar13 = *(float *)(iVar9 + 0x28) - *(float *)(param_1 + 8);
    fVar12 = *(float *)(iVar9 + 0x30) - *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x98) = SQRT(fVar13 * fVar13 + fVar12 * fVar12);
    iVar6 = FUN_0036bb28(uVar1,param_1,param_2);
    *(undefined4 *)(param_1 + 0x98) = uVar7;
    if (iVar6 == 0) goto LAB_001b6a24;
    uVar3 = FUN_001735d8(param_2,param_1);
LAB_001b6a20:
    *(undefined2 *)(param_1 + 0x116) = uVar3;
    goto LAB_001b6a24;
  }
  *psVar10 = 1;
  uVar4 = DAT_001b6a84;
  if ((*(ushort *)(param_1 + 0x116) == DAT_001b6a84) &&
     ((*(ushort *)(DAT_001b6a88 + 0xf2) & 8) == 0)) {
    iVar6 = FUN_0036bc84(param_2);
    if (iVar6 == 0x1d) {
      *(ushort *)(param_1 + 0x116) = (ushort)uVar4 | (ushort)((int)uVar4 >> 0xe);
      *(undefined1 *)(param_1 + 0xd3c) = 0;
    }
    else {
LAB_001b6a4c:
      *(short *)(param_1 + 0x116) = (short)uVar4;
    }
  }
  else {
    if (*(int *)(iVar6 + 4) != 0) goto LAB_001b6a24;
    if ((*(char *)((uint)*(byte *)(DAT_001b6a9c + 0x2d) + DAT_001b6aa0) == '4') &&
       (iVar8 = FUN_0036bc84(param_2), iVar5 = DAT_001b6a8c, iVar8 == 0xc)) {
      uVar3 = (undefined2)DAT_001b6aa4;
      *(undefined2 *)(param_1 + 0x116) = uVar3;
      *(undefined1 *)(param_1 + 0xd3c) = 0;
      *(undefined2 *)(iVar5 + iVar9) = uVar3;
      *(undefined1 *)(param_1 + 0xd3d) = 1;
      goto LAB_001b6a24;
    }
    *(undefined1 *)(param_1 + 0xd3d) = 0;
    if ((*(ushort *)(iVar6 + 0xf36) & 0x200) != 0) {
      if (((*(uint *)(iVar6 + 0xbc) & *(uint *)(DAT_001b6aac + 8)) == 0) &&
         (((uint)*(ushort *)(iVar6 + 0xb6) &
          *(uint *)(DAT_001b6aac + 8) << *(sbyte *)(DAT_001b6aa8 + 2)) == 0)) {
        uVar3 = (undefined2)DAT_001b6ab0;
        goto LAB_001b6a20;
      }
      if ((*(uint *)(iVar6 + 0xbc) & *(uint *)(DAT_001b6aac + 0x20)) != 0) {
        uVar4 = DAT_001b6ab4;
      }
      goto LAB_001b6a4c;
    }
    if (((uint)*(ushort *)(iVar6 + 0xb6) &
        *(int *)(DAT_001b6aac + 8) << *(sbyte *)(DAT_001b6aa8 + 2)) == 0) {
      uVar3 = (undefined2)DAT_001b6ab8;
    }
    else {
      uVar3 = (undefined2)DAT_001b6abc;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar3;
  }
  *(undefined2 *)(DAT_001b6a8c + iVar9) = *(undefined2 *)(param_1 + 0x116);
LAB_001b6a24:
                    /* WARNING: Could not recover jumptable at 0x001b6a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xcb8))(param_1,param_2);
  return;
}
