// OoT3D decomp @ 0024e268  name=FUN_0024e268  size=432

void FUN_0024e268(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  uVar2 = DAT_0024e41c;
  iVar1 = *(int *)(param_1 + 0x124);
  if (*(short *)(param_1 + 0x1c) == 0xb) {
    *(undefined4 *)(param_1 + 0x1a4) = 1;
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0x4a6) = 3;
      *(undefined4 *)(param_1 + 0x1ac) = DAT_0024e418;
    }
    return;
  }
  if (*(int *)(param_1 + 0x1a8) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x530) + 0x1a8) == 0) {
    FUN_0036e168(*(float *)(iVar1 + 0x2c) - DAT_0024e420,DAT_0024e424,DAT_0024e424,uVar2,
                 param_1 + 0x2c);
    fVar9 = DAT_0024e430;
    fVar8 = DAT_0024e42c;
    fVar7 = DAT_0024e428;
    iVar4 = (int)(short)(*(short *)(*(int *)(param_1 + 0x530) + 0xbe) + 0x4000);
    iVar1 = (int)(short)((*(short *)(*(int *)(param_1 + 0x530) + 0x4a8) +
                         *(short *)(param_1 + 0x4a6)) * 2000);
    fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar5 = fVar5 * DAT_0024e428 * DAT_0024e42c - DAT_0024e430;
    }
    else {
      fVar5 = DAT_0024e430 + fVar5 * DAT_0024e428 * DAT_0024e42c;
    }
    fVar5 = (float)FUN_002cfca0((int)(short)(int)fVar5);
    fVar6 = (float)FUN_002cfca0(iVar4);
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 8) + *(float *)(param_1 + 0x4b8) * fVar5 * fVar6;
    fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar9 = fVar5 * fVar7 * fVar8 - fVar9;
    }
    else {
      fVar9 = fVar9 + fVar5 * fVar7 * fVar8;
    }
    fVar7 = (float)FUN_002cfca0((int)(short)(int)fVar9);
    fVar8 = (float)FUN_00338f60(iVar4);
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x4b8) * fVar7 * fVar8;
    return;
  }
  *(undefined4 *)(param_1 + 0x4b4) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined2 *)(param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  if (*(float *)(param_1 + 0x2c) < *(float *)(*(int *)(param_1 + 0x530) + 0xc)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x10c);
  uVar3 = *(undefined4 *)(iVar1 + 0x110);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x108);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  return;
}
