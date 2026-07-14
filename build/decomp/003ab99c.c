// OoT3D decomp @ 003ab99c  name=FUN_003ab99c  size=528

void FUN_003ab99c(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = DAT_003abbac;
  iVar3 = *(int *)(param_1 + 0x1048) + 1;
  *(int *)(param_1 + 0x1048) = iVar3;
  uVar2 = DAT_003abbc4;
  if (iVar3 < 0x1e) {
    fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * DAT_003abbb0;
    fVar7 = (float)VectorSignedToFloat(iVar3 * iVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0x1038) * 0x1c;
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x103c) +
         (*(float *)(iVar5 + 0x10) - *(float *)(param_1 + 0x103c)) * fVar6;
    fVar9 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x1044) +
         (*(float *)(iVar5 + 0x18) - *(float *)(param_1 + 0x1044)) * fVar6;
    fVar8 = DAT_003abbb8 - fVar6;
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x104c) * fVar9 + fVar7 * DAT_003abbb4 + *(float *)(param_1 + 0x1040);
    fVar7 = DAT_003abbbc;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1050),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar1 = (undefined2)(int)(fVar9 + fVar8 * fVar10);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    FUN_003478b0(fVar6 * fVar7,param_1 + 0x1c4);
    FUN_003731e0(param_1 + 0x1c4);
    if (*(int *)(param_1 + 0x1048) < 0x1e) {
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x1000000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003abbc0;
    FUN_003731e8(uVar2,param_1 + 0x1c4);
    iVar3 = FUN_003731e0(param_1 + 0x1c4);
    uVar4 = DAT_003abbc8;
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
      *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      *(undefined4 *)(param_1 + 0x2c) =
           *(undefined4 *)(iVar5 + (uint)*(byte *)(param_1 + 0x1038) * 0x1c + 0x14);
      FUN_0037308c(DAT_003abbcc,param_2,param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x1a4) = 10;
      *(undefined1 *)(param_1 + 0xe74) = 7;
      iVar5 = DAT_003abbd0;
      uVar4 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(DAT_003abbd0 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x1c));
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,DAT_003abbd4,uVar4,DAT_003abbd4,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar5 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),2);
      uVar4 = DAT_003abbdc;
      uVar2 = DAT_003abbd8;
      *(undefined4 *)(param_1 + 0xea8) = 0;
      FUN_0037547c(DAT_003abbe0,param_1 + 0x28,4,uVar4,uVar4,uVar2);
      return;
    }
  }
  return;
}

