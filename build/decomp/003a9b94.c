// OoT3D decomp @ 003a9b94  name=FUN_003a9b94  size=724

void FUN_003a9b94(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;
  float fVar9;
  undefined4 local_2c;
  int local_28;

  iVar6 = *(int *)(DAT_003a9e68 + param_2);
  FUN_0031d314(param_1);
  FUN_00326a6c(param_1 + 0xec8,&local_28,&local_2c);
  iVar4 = FUN_00326b20(param_1,param_2);
  iVar3 = DAT_003a9e74;
  uVar2 = DAT_003a9e6c;
  if (iVar4 == 1) {
    if (*(int *)(param_1 + 0x1ac) == 0) {
LAB_003a9c30:
      if ((local_28 < DAT_003a9e74) && (*(int *)(param_1 + 0x1a8) < 1)) {
LAB_003a9d88:
        FUN_003478b0(uVar2,param_1 + 0x1c4);
        *(undefined4 *)(param_1 + 0xe78) = uVar2;
        FUN_00357d6c(param_1);
        *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        return;
      }
      if (DAT_003a9e74 <= local_28) {
        uVar8 = FUN_00338f60((int)(short)local_2c);
        if (0xbeffffff < uVar8) goto LAB_003a9c88;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        goto LAB_003a9d88;
      }
    }
    else {
      if (0 < *(int *)(param_1 + 0x1a8)) {
        fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1ac),(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 - DAT_003a9e78 <= fVar7) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) goto LAB_003a9c30;
      }
      if (DAT_003a9e74 <= local_28) goto LAB_003a9c88;
    }
  }
  else if ((*(uint *)(iVar6 + 4) & 0x100) != 0) goto LAB_003a9d88;
  local_2c = DAT_003a9e70;
LAB_003a9c88:
  *(undefined4 *)(param_1 + 0x6c) = DAT_003a9e7c;
  iVar4 = (int)(short)(0x7fff - (short)local_2c);
  fVar7 = DAT_003a9e80;
  if ((-0x322 < iVar4) && (fVar7 = DAT_003a9e88, iVar4 <= DAT_003a9e84)) {
    fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  }
  sVar1 = (short)(int)fVar7 + *(short *)(param_1 + 0x36);
  *(short *)(param_1 + 0x36) = sVar1;
  *(short *)(param_1 + 0xbe) = sVar1;
  if ((0 < *(int *)(param_1 + 0x1a8)) &&
     (iVar4 = *(int *)(param_1 + 0x1a8) + -1, *(int *)(param_1 + 0x1a8) = iVar4, iVar4 < 1)) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  FUN_003731e8(DAT_003a9e8c,param_1 + 0x1c4);
  iVar4 = FUN_003731e0(param_1 + 0x1c4);
  if (((iVar4 == 0) || (0 < *(int *)(param_1 + 0x1a8))) ||
     (iVar4 = FUN_00326b20(param_1,param_2), iVar4 != 1)) {
    return;
  }
  if (iVar3 < local_28) {
    uVar8 = FUN_00338f60((int)(short)local_2c);
    if (0xbeffffff < uVar8) {
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      FUN_00318814(param_1);
      return;
    }
  }
  if (iVar3 <= local_28) {
    *(undefined1 *)(param_1 + 0x1a4) = 0xd;
    *(undefined1 *)(param_1 + 0xe74) = 4;
    *(undefined4 *)(param_1 + 0xe7c) = 0;
    iVar3 = DAT_003a9e90;
    uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                         *(undefined4 *)
                          (*(int *)(DAT_003a9e90 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003a9e98,uVar2,uVar5,DAT_003a9e94,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),0);
    return;
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  FUN_003478b0(uVar2,param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0xe78) = uVar2;
  FUN_00357d6c(param_1);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
  return;
}
