// OoT3D decomp @ 003a1778  name=FUN_003a1778  size=976

void FUN_003a1778(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;
  float fVar9;
  short local_3c [2];
  int local_38;

  if (*(char *)(param_1 + 0xe74) == '\x04') {
    FUN_0031d314(param_1);
  }
  FUN_00326a6c(param_1 + 0xec8,&local_38,local_3c);
  if (*(int *)(param_1 + 0x1ac) == 0) {
LAB_003a17f0:
    FUN_003182cc(DAT_003a1aa4,DAT_003a1aa0,DAT_003a1a9c,DAT_003a1a98,param_1,param_2,DAT_003a1a94);
  }
  else {
    if (0 < *(int *)(param_1 + 0x1a8)) {
      fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1ac),(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 - DAT_003a1a90 <= fVar7) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) goto LAB_003a17f0;
    }
    *(undefined4 *)(param_1 + 0x6c) = DAT_003a1a8c;
  }
  uVar4 = DAT_003a1ab8;
  iVar3 = DAT_003a1ab4;
  uVar2 = DAT_003a1ab0;
  iVar1 = DAT_003a1aac;
  fVar7 = DAT_003a1aa8;
  uVar8 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == DAT_003a1aa8) << 0x1e;
  if (SUB41(uVar8 >> 0x1e,0)) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffdff;
    FUN_003478b0(fVar7,param_1 + 0x1c4);
    *(float *)(param_1 + 0xe78) = fVar7;
    FUN_00357d6c(param_1);
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    FUN_003731e0(param_1 + 0x1c4);
  }
  else {
    if (DAT_003a1aac < (int)*(float *)(param_1 + 0x6c)) {
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffdff;
      *(undefined1 *)(param_1 + 0x1a4) = 9;
      if (*(char *)(param_1 + 0xe74) == '\a') {
        *(undefined1 *)(param_1 + 0xe74) = 6;
      }
      else {
        *(undefined1 *)(param_1 + 0xe74) = 5;
      }
      uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                            (uint)*(byte *)(param_1 + 0xe74) * 4));
      uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar8 >> 0x15) & 3);
      FUN_00375c08(uVar4,fVar7,uVar5,uVar2,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),2);
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
    }
    else if ((0 < *(int *)(param_1 + 0x1a8)) &&
            (iVar6 = *(int *)(param_1 + 0x1a8) + -1, *(int *)(param_1 + 0x1a8) = iVar6, iVar6 < 1))
    {
      *(undefined4 *)(param_1 + 0x1ac) = 0;
    }
    fVar9 = DAT_003a1abc;
    if (*(short *)(param_1 + 0x100a) < 1) {
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffdff;
      FUN_003731e8(*(float *)(param_1 + 0x6c) * fVar9,param_1 + 0x1c4);
      iVar6 = FUN_003731e0(param_1 + 0x1c4);
      if (((iVar6 != 0) ||
          (uVar8 = uVar8 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar7) << 0x1e,
          SUB41(uVar8 >> 0x1e,0))) && (*(int *)(param_1 + 0x1a8) < 1)) {
        if (iVar1 < *(int *)(param_1 + 0x6c)) {
          *(undefined1 *)(param_1 + 0x1a4) = 9;
          if (*(char *)(param_1 + 0xe74) == '\a') {
            *(undefined1 *)(param_1 + 0xe74) = 6;
          }
          else {
            *(undefined1 *)(param_1 + 0xe74) = 5;
          }
          uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                               *(undefined4 *)
                                (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                                (uint)*(byte *)(param_1 + 0xe74) * 4));
          uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar8 >> 0x15) & 3);
          FUN_00375c08(uVar4,fVar7,uVar5,uVar2,param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4),2);
          *(undefined4 *)(param_1 + 0x1a8) = 0;
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          return;
        }
        if ((DAT_003a1ac0 <= local_38) &&
           (uVar8 = FUN_00338f60((int)local_3c[0]), uVar8 < 0xbf000000)) {
          *(undefined1 *)(param_1 + 0x1a4) = 8;
          *(undefined4 *)(param_1 + 0xe7c) = 0;
          *(undefined1 *)(param_1 + 0xe74) = 4;
          *(undefined2 *)(param_1 + 0x100a) = 0;
          FUN_00373d40(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
          return;
        }
        FUN_003478b0(fVar7,param_1 + 0x1c4);
        *(float *)(param_1 + 0xe78) = fVar7;
        FUN_00357d6c(param_1);
        *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
        *(undefined4 *)(param_1 + 0x1a8) = 0;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        return;
      }
    }
    else {
      *(float *)(param_1 + 0x6c) = fVar7;
      *(short *)(param_1 + 0x100a) = *(short *)(param_1 + 0x100a) + -1;
      FUN_003731e0(param_1 + 0x1c4);
      if (*(short *)(param_1 + 0x100a) == 0) {
        *(undefined1 *)(param_1 + 0x1a4) = 8;
        *(undefined4 *)(param_1 + 0xe7c) = 0;
        *(undefined1 *)(param_1 + 0xe74) = 4;
        uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                             *(undefined4 *)
                              (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
        uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar8 >> 0x15) & 3);
        FUN_00375c08(uVar4,fVar7,uVar5,uVar2,param_1 + 0x1c4,
                     *(undefined4 *)
                      (*(int *)(iVar3 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                      (uint)*(byte *)(param_1 + 0xe74) * 4),2);
        return;
      }
    }
  }
  return;
}
