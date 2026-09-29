// OoT3D decomp @ 001e8438  name=FUN_001e8438  size=540

void FUN_001e8438(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;

  if (((*(uint *)(DAT_001e8654 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001e8658), puVar3 = DAT_001e8660, uVar2 = DAT_001e865c, iVar4 != 0))
  {
    *DAT_001e8660 = DAT_001e865c;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  fVar7 = DAT_001e8664;
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(char *)(param_1 + 0x2c6) = *(char *)(param_1 + 0x2c6) + -1;
  }
  fVar6 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x2c6),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)FUN_003727f0(fVar6 * fVar7);
  iVar4 = DAT_001e8668;
  fVar7 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x1e4) * fVar7;
  *(float *)(param_1 + 0x2c) = fVar7;
  if (iVar4 < (int)(*(float *)(param_1 + 0xc) - fVar7)) {
    FUN_0036b940(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    *(undefined1 *)(param_1 + 0x2c6) = 0x3c;
    if (*(char *)(param_1 + 0x2c7) != '\0') {
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001e866c);
    }
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x2c4));
    fVar7 = DAT_001e8674;
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001e8670;
    iVar4 = 0;
    local_24 = *(float *)(param_1 + 0x2c) - fVar7;
    do {
      fVar6 = (float)FUN_002cfca0(iVar5);
      local_28 = *(float *)(param_1 + 0x28) + fVar6 * fVar7;
      fVar6 = (float)FUN_00338f60(iVar5);
      local_20 = *(float *)(param_1 + 0x30) + fVar6 * fVar7;
      FUN_00366150(param_2,&local_28,DAT_001e8660,DAT_001e8660,DAT_001e8678 + -4,DAT_001e8678,1000,
                   10);
      iVar4 = iVar4 + 1;
      iVar5 = (int)(short)((short)iVar5 + 0x2aaa);
    } while (iVar4 < 6);
  }
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001e867c + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  iVar4 = FUN_003532c0(param_2 + 0x10,2);
  uVar1 = (undefined2)(int)((*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c)) * DAT_001e8680)
  ;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 0x56) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 0x4a) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 0x3e) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 0x38) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 0x26) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 0x20) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 8) = uVar1;
  *(undefined2 *)(*(int *)(iVar4 + 0x18) + 2) = uVar1;
  return;
}
