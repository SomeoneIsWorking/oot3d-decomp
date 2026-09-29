// OoT3D decomp @ 003ac4c4  name=FUN_003ac4c4  size=364

void FUN_003ac4c4(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  fVar1 = DAT_003ac630;
  iVar2 = *(int *)(param_1 + 0x124);
  fVar4 = *(float *)(iVar2 + 0x28);
  fVar5 = *(float *)(iVar2 + 0x2c);
  fVar6 = *(float *)(iVar2 + 0x30);
  fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  fVar9 = *(float *)(param_1 + 0x200);
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  fVar7 = (fVar4 + fVar9 * fVar7) - *(float *)(param_1 + 0x28);
  fVar5 = fVar5 - *(float *)(param_1 + 0x2c);
  fVar4 = (fVar6 + *(float *)(param_1 + 0x200) * fVar8) - *(float *)(param_1 + 0x30);
  fVar5 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar6 = *(float *)(param_1 + 0x6c);
  if (ABS(fVar5) <= ABS(fVar6)) {
    *(float *)(param_1 + 0x60) = fVar1;
    *(float *)(param_1 + 0x68) = fVar1;
  }
  else {
    *(float *)(param_1 + 0x60) = (fVar7 / fVar5) * fVar6;
    *(float *)(param_1 + 0x68) = (fVar4 / fVar5) * fVar6;
  }
  fVar4 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 100) = fVar4;
  if (fVar4 < *(float *)(param_1 + 0x74)) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x74);
  }
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(float *)(param_1 + 100) <= fVar1)) {
    *(float *)(param_1 + 0x60) = fVar1;
    *(float *)(param_1 + 100) = fVar1;
    *(float *)(param_1 + 0x68) = fVar1;
    *(float *)(param_1 + 0x6c) = fVar1;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    if ((*(ushort *)(param_1 + 0x1c) & 0x8000) == 0) {
      *(short *)(param_1 + 0x20a) = (short)DAT_003ac638;
      uVar3 = DAT_003ac63c;
    }
    else {
      *(undefined2 *)(param_1 + 0x20a) = 300;
      uVar3 = DAT_003ac634;
    }
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  }
  return;
}
